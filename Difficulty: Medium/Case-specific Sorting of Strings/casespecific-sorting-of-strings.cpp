class Solution {
  public:
    string caseSort(string& s) {
        vector<int> upper(26,0);
        vector<int> lower(26,0);
        int n=s.length();
        for(int i=0;i<n;i++){
            int c=s[i];
            if(int('A')<=c && c<=int('Z')){
                upper[c-'A']++;
            }
            else if(int('a')<=c && c<=int('z')){
                lower[c-'a']++;
            }
        }
        int u=0,l=0;
        for(int i=0;i<n;i++){
            int c=s[i];
            if(int('A')<=c && c<=int('Z')){
                while(u<26 && upper[u]==0) u++;
                s[i]='A'+ u;
                upper[u]--;
            }
            else{
                while(l<26 && lower[l]==0) l++;
                s[i]='a'+ l;
                lower[l]--;
            }
        }
        return s;
    }
};