//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    bool subArrayExists(vector<int>& arr) {
        // Your code here

        int l = 0,  r= 0;
        int sum = 0;
        unordered_map<int, int> hm;
        
        for (int i = 0; i < arr.size(); i++ ){
            
            sum = sum + arr[i];
            
            if (sum == 0) return true;
            
            if(hm.find(sum) != hm.end()) {
                return true;
            }else {
                hm[sum]++;
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
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        if (obj.subArrayExists(arr))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends