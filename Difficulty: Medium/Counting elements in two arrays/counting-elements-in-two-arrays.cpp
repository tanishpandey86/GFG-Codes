class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // [1 9 17 21 26 26 48]
        // [17 48 26 1 26 9 21]
        // match current index to sorted index
        unordered_map<int, vector<int>> mp;
        int n = a.size(), m = b.size();
        
        for (int i = 0; i < n; i++){
            mp[a[i]].push_back(i);
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int count = 0;
        int i = 0, j = 0;
        vector<int> ans(n);
        while (i < n){
            int num = a[i];
            while ((j < m) && (num >= b[j])){
                count++;
                j++;
            }
            int size = mp[num].size();
            
            ans[mp[num][size - 1]] = count;
            mp[num].pop_back();
            i++;
        }
        return ans;
    }
};