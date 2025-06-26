class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        unordered_map<char, int> m;
        for(auto &ch: s) m[ch]++;
        priority_queue<int> pq;
        for(auto &i : m) pq.push(i.second);
        int num = pq.top(), cnt = 1; pq.pop();
        while(!pq.empty()) {
            if(pq.top() < num) {
                int diff = cnt*(num-pq.top());
                if(diff <= k) {
                    k -= diff;
                    num = pq.top();
                } else break;
            }
            ++cnt;
            pq.pop();
        }
        while(k >= cnt) {
            --num;
            k -= cnt;
        }
        int ans = k*((num-1)*(num-1)) + (cnt-k)*(num*num);
        while(!pq.empty()) {
            ans += pq.top()*pq.top();
            pq.pop();
        }
        return ans;
    }
};