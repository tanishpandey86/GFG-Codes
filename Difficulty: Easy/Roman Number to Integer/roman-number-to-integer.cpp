//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int n = str.length();  
        int total = 0;       
        auto getValue = [](char c) -> int {  
            if (c == 'I') return 1;
            if (c == 'V') return 5;
            if (c == 'X') return 10;
            if (c == 'L') return 50;
            if (c == 'C') return 100;
            if (c == 'D') return 500;
            if (c == 'M') return 1000;
            return 0; 
        };

        for (int i = 0; i < n; i++) {
            int currentValue = getValue(str[i]);

            if (i < n - 1 && currentValue < getValue(str[i + 1])) {
                total -= currentValue;
            }
            else {
                total += currentValue;
            }
        }

        return total;
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
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends