//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        int n=a.size(), m = b.size();
        int idx1 = 0, idx2 = 0;
        int size = 0;
        while (true){
            int val1 = idx1 >= n ? INT_MAX : a[idx1];
            int val2 = idx2 >= m ? INT_MAX : b[idx2];
            if (val1 < val2){
                size+=1;
                idx1+=1;
                if (size == k) return val1;
            }
            else if(val2 < val1){
                size+=1;
                idx2+=1;
                if (size == k) return val2;
            }
            else {
                size+=1;
                idx1+=1;
                if (size == k) return val1;
                size+=1;
                idx2+=1;
                if (size == k) return val2;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends