//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> change(n);
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > k) {
                change[i] = 1;
            } else {
                change[i] = -1;
            }
        }

        int prefixSum = 0, maxLength = 0;
        unordered_map<int, int> prefixMap;
        prefixMap[0] = -1;

        for (int i = 0; i < n; i++) {
            prefixSum += change[i];

            if (prefixSum > 0) {
                maxLength = i + 1;
            } else if (prefixMap.find(prefixSum - 1) != prefixMap.end()) {
                maxLength = max(maxLength, i - prefixMap[prefixSum - 1]);
            }

            if (prefixMap.find(prefixSum) == prefixMap.end()) {
                prefixMap[prefixSum] = i;
            }
        }

        return maxLength;
    }
};

// Driver code



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        int k = stoi(input);

        Solution ob;
        cout << ob.longestSubarray(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends