//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) 
    {
        set<int> inter;
        for(int i=0;i<a.size();i++)
        {
            int count=0;
            for(int j=0;j<b.size();j++)
            {
                if(a[i]==b[j])
                {
                    count=1;
                    break;
                }
            }
            if(count==1)
            {
                inter.insert(a[i]);
            }
        }
        vector<int> ans;
        for(auto &inte:inter)
        {
            ans.push_back(inte);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr1, arr2;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            arr2.push_back(number);
        }

        Solution ob;
        vector<int> res = ob.intersectionWithDuplicates(arr1, arr2);
        sort(res.begin(), res.end());

        if (res.size() == 0) {
            cout << "[]" << endl;
        } else {
            for (auto it : res)
                cout << it << " ";
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends