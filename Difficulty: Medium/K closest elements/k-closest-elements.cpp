class Solution {
  public:
   using pii = pair<int,int>;
   
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
        auto cmp = [](pii&a , pii&b){
            if(a.first == b.first){
                return a.second < b.second;
            }
            
            return a.first > b.first;
        };
        
        
        priority_queue<pii, vector<pii>, decltype(cmp)> pq(cmp);
        
        for(int a: arr){
            int d = abs(a-x);
            
            if(d==0) continue;
            
            pq.push({d, a});
        }
        
        vector<int> ans;
        
        while(k-- && !pq.empty()){
            int num = pq.top().second;
            
            pq.pop();
            ans.push_back(num);
        }
        
        return ans;
    }
};