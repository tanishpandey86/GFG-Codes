class Solution {
  public:
      int totalElements(vector<int> &arr) {
        // code here
        unordered_map<int,int>mp;
        int n=arr.size();
        int maxi=0,i=0,j=0;
        
        while(j<n){
            mp[arr[j]]++;
            
            if(mp.size()==2 || mp.size()<2){
                maxi=max(maxi,j-i+1);
                j++;
            } else {
                while(mp.size()>2){
                    mp[arr[i]]--;
                    if(mp[arr[i]]==0) mp.erase(arr[i]);
                    i++;
                }
                
                maxi=max(maxi,j-i+1);
                j++;
            }
        }
        
        return maxi;
    }
};