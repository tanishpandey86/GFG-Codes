//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
        sort(arr,arr+n);
        if(arr[0]>x){
            return false;
        }
        for(int i=n-1;i>0;i--){
            int num1=arr[i];
            if(num1>x){
                continue;
            }
            int strt=0,end=i-1;
            while(strt<end){
                if(num1+arr[strt]+arr[end]==x){
                    return true;
                }
                else if(num1+arr[strt]+arr[end]>x){
                    end--;
                }
                else{
                    strt++;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, X;
        cin >> n >> X;
        int i, A[n];
        for (i = 0; i < n; i++)
            cin >> A[i];
        Solution ob;
        cout << ob.find3Numbers(A, n, X) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends