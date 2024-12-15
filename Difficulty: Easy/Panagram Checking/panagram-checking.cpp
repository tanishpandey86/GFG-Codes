//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to check if a string is Pangram or not.
    bool checkPangram(string& s) {
        // your code here
        unordered_set<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                st.insert(s[i]);
            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                st.insert(s[i]-'A'+'a');
            }
        }
        if(st.size() == 26) return true;
        return false;
    }
};

//{ Driver Code Starts.

// Driver Program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
    return (0);
}

// } Driver Code Ends