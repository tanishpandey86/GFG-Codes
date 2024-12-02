//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int dpFib(int n, vector<int> &dp)
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        
        if(dp[n]!=-1)// if we have already computed for n number
            return dp[n];
            
        return dp[n] = (dpFib(n-1, dp) + dpFib(n-2, dp))%1000000007;
    }
    int nthFibonacci(int n){
        // code here
        vector<int>dp(n+1, -1);
        if(n==0)
            return 0;
        if(n==1)
            return 1;
            
        dp[0]=0;
        dp[1]=1;
        
        return dpFib(n, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends