class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code her
        for(int i=0,j=-1;i<s2.length() && j<(int)s1.length();j+=(s1[j+1]==s2[i++]),j>=0?s1[j]='-':j);
        return s1.back()=='-';
    }
};