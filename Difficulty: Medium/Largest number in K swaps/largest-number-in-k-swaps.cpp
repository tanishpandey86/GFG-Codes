//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    // Function to find the largest number after k swaps.
    string findMaximumNum(string& s, int k) {
    int n = s.length();
    string maxNum = s;

    function<void(string&, int)> findMax;

    findMax = [&](string& str, int k) {
        if (k == 0)
            return;

        for (int i = 0; i < str.size() - 1; ++i) {
            char maxDigit = str[i];
            // Find the max digit after index i
            for (int j = i + 1; j < str.size(); ++j) {
                if (str[j] > maxDigit)
                    maxDigit = str[j];
            }

            // If there's a better digit to swap with
            if (maxDigit != str[i]) {
                for (int j = str.size() - 1; j > i; --j) {
                    if (str[j] == maxDigit) {
                        swap(str[i], str[j]);
                        if (str.compare(maxNum) > 0)
                            maxNum = str;

                        findMax(str, k - 1);
                        swap(str[i], str[j]); // backtrack
                    }
                }
                return; // prevent deeper recursion at same level
            }
        }
    };

    findMax(s, k);  // will modify maxNum through reference
    return maxNum;
}

    };



//{ Driver Code Starts.

int main() {
    int t, k;
    string str;

    cin >> t;
    while (t--) {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends