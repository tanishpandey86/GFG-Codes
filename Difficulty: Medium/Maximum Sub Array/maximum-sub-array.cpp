//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
  vector<int> findSubarray(int n, int arr[]) 
  {     

        int sum=0,max_sum=INT_MIN;
        vector<int>sub;
        int start=0,end=0,max_count=0,count=0,cur=0;
        for(int i=0; i<n;++i)
        {
            if(sum+arr[i]<sum)
            {
                count=0;
                sum=0;
                cur=i+1;
            }
            else if(sum+arr[i]>=sum)
            {
                sum+=arr[i];
                count++;
            }
            if(max_sum<sum or(max_sum==sum and count>max_count))
            {
                max_sum=sum;
                max_count=count;
                start=cur;
                end=i;
            }
        }
        for(int i=start; i<=end;++i)
        {
            sub.push_back(arr[i]);
        }
        return sub;

}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(n, a);
        printAns(ans);
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends