//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.
        int cnt=0, i=0; 
        while(i<arr.size()) {
            if(arr[i]==i+1) {
                i++;
                continue; //if correct position, move to next index
            }
            //else swap and increase number of swaps by 1
            swap(arr[i], arr[arr[i]-1]);
            cnt++;
            if(cnt>2) return false;
        }
        /*cnt will be zero if the array is already sorted and in 
        that case we can swap any two indices twice to get the cnt=2*/
        if(cnt==0 || cnt==2) return true;
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends