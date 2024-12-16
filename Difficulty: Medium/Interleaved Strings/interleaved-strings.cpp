//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    /*You are required to complete this method */
    bool isInterleave(string A, string B, string C) 
{
    int n=A.length(),m=B.length();
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
        
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i>0 && A[i-1]==C[i+j-1])dp[i][j]|=dp[i-1][j];
            if(j>0 && B[j-1]==C[i+j-1])dp[i][j]|=dp[i][j-1];
        }
    }
    return dp[n][m];
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        Solution obj;
        if (obj.isInterleave(a, b, c))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
    // your code goes here
    return 0;
}
// } Driver Code Ends