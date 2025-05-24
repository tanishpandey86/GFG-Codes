class Solution {
  public:
    int sumSubstrings(string &s) {
      int sum=s[0]-'0';
      int ans=sum;
      for(int i=1;i<s.size();i++){
         sum=sum*10+(s[i]-'0')*(i+1);
         ans+=sum;
      }
      return ans;
    }
};