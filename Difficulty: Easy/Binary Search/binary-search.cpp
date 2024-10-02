//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {

  public:

    int binarysearch(vector<int> &arr, int k) {

        // code here

        int target=k;

        int s=0,e=arr.size()-1;

        while(s<=e)

        {

            int mid= s+(e-s)/2;

            if(arr[mid]>target)

            {

                e=mid-1;

            }

            else if(arr[mid]<target)

            {

                s=mid+1;

            }

            else{return mid;}

        }

        return -1;

    }

};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends