class Solution {
  public:
    int romanToDecimal(string &s) {
        int ans = 0;
        map<char,int>val;
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;
        for(int i=0;i<s.size();i++){
            if(i+1 < s.size() and val[s[i+1]] > val[s[i]]){
                ans += val[s[i+1]]-val[s[i]];
                i++;
            }
            else{
                ans += val[s[i]];
            }
        }
        return ans;
    }
};