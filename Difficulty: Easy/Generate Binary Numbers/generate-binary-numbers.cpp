class Solution {
  public:
  string solve(int n){
      string bit="";
      while(n>0){
          int bits=n%2;
          bit.push_back('0'+bits);
          n/=2;
      }
      reverse(bit.begin(),bit.end());
      return bit;
  }
    vector<string> generateBinary(int n) {
        vector<string>ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i]=solve(i);
        }
        return ans;
    }
};