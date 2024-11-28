//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     int myAtoi(char *s) {
        // Your code here
        long ans=0;
        int n=strlen(s);
        long c=1;
        int sign=1;
        if(s[0]=='-')
        sign=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]>='0' and s[i]<='9'){
                   int digi=s[i]-'0';
                   ans+=digi*c;
                   c*=10;
            }
            else if(s[i]!='-')
            {
                ans=0;
                c=1;
            }
            if (ans * sign > INT_MAX) return INT_MAX;
            if (ans * sign < INT_MIN) return INT_MIN;
        }
        return int(sign*ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends