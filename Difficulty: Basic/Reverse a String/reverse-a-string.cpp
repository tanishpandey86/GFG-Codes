//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // Your code goes here
        int i=0,e=s.size()-1;
        while(i<e){
            swap(s[i],s[e]);
            i++;
            e--;
        }
        return s;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseString(s) << endl;
    }
    return 0;
}

// } Driver Code Ends