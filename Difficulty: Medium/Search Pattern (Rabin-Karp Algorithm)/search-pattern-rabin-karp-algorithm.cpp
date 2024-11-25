//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string p, string t) {
            //code here.
            vector<int>ans;
            int n=t.size();
            int m=p.size();
             for (int i = 0; i <= n - m; i++) {
                if (t.substr(i, m) == p) {
                    ans.push_back(i+1);
                }
            }
            return ans;
}
};

     


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends