//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Trie {
    unordered_set <string> us;
  public:
    Trie() {}

    void insert(string &word) {
        us.insert(word);
    }

    bool search(string &word) {
        if(us.find(word) != us.end())
            return true;     
     return false;
    }

    bool isPrefix(string &word) {
        int n = word.length();
        for(auto s : us){
            if(s.length()>=n){
                string str = s.substr(0,n);
                if(word == str) return true;
            }
        }
        return false;
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int q;
        cin >> q;
        cin.ignore();
        vector<bool> ans;
        Trie ob;
        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;
            string s;
            cin >> s;
            cin.ignore();
            if (x == 1) {
                ob.insert(s);
            } else if (x == 2) {
                ans.push_back(ob.search(s));
            } else if (x == 3) {
                ans.push_back(ob.isPrefix(s));
            }
        }
        cout << boolalpha;
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends