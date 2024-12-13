//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{
public:
    string removeDuplicates(string str) {
        // code here
        
        string ans;
        unordered_map<int,int>m;
        
        for(int i=0;i<str.length();i++){
            m[str[i]-'a']++;
            if(m[str[i]-'a']==1){
                ans+=str[i];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends