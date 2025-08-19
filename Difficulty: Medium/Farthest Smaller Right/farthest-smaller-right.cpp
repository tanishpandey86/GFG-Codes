class Solution {
  public:
    vector<int> farMin(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> index;
        vector<int> small;
        vector<int> ans(n, -1);
        
        small.push_back(arr[n-1]);
        index[arr[n-1]] = n-1;
        
        for(int i = n-2; i >= 0; i--) {
            if(arr[i] < small[0]) {
                small.insert(small.begin(), arr[i]);
                index[arr[i]] = i;
            } else {
                auto it = lower_bound(small.begin(), small.end(), arr[i]) - small.begin();
                if(it != 0) {
                    ans[i] = index[small[it - 1]];  
                }
            }
        }
        
        return ans;
    }
};