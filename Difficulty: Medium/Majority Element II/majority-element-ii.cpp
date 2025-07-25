class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        vector<int> ans;
        map<int, int> mp;
        for(auto it : arr)
        {
            mp[it]++;
        }
        for(auto it : mp)
        {
            if(it.second > arr.size() / 3)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};