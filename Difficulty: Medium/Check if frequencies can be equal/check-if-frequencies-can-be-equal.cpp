class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
        int n = s.size();
        vector<int> freq(26,0);
        for(auto i:s){
            freq[i-'a']++;
        }
        sort(freq.begin(),freq.end());
        int flse = 0;
        int idx = -1;
        for(int i=0;i<25;i++){
            if(freq[i]==0){
                idx = i;
                continue;
            }
            if(freq[i]!=freq[i+1]){
                flse++;
                // cout<<flse<<" ";
                if(flse>1) return false;
            }
        }
        
        if(flse==0) return true;
        if(idx==-1) idx = 0;
        else idx++;
        if(freq[idx] != freq[idx+1] && freq[idx]==1) return true;
        else if((freq[24]+1)==freq[25]) return true;
        else return false;
    }
};