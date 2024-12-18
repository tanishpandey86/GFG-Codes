//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> prev(target + 1);
        for (int tar = 0; tar <= target; tar++)
        {
            if (tar == 0 && arr[0] == 0)
                prev[tar] = 2;
            else if (tar == 0 || tar == arr[0])
                prev[tar] = 1;
            else
                prev[tar] = 0;
        }
        for (int index = 1; index < n; index++)
        {
            vector<int> temp(target + 1);
            for (int tar = 0; tar <= target; tar++)
            {
                int notTake = prev[tar];
                int take = 0;
                if (tar >= arr[index])
                {
                    take = prev[tar - arr[index]];
                }
                temp[tar] = (take + notTake);
            }
            prev = temp;
        }
        return prev[target];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        cout << solution.perfectSum(arr, target);
        cout << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends