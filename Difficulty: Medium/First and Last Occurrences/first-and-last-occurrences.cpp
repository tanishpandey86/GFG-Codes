//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> find(vector<int> arr, int x) {
        // code here
        
        //binary search approach 
        
        int first=firstOccurance(arr,x);
        int last=lastOccurance(arr,x);
        return {first,last};
    }
    
    
    int firstOccurance(vector<int> arr, int x){
        
        int l=0;
        int r=arr.size()-1;
        int ans=-1;
        
        while(l<=r){
            int mid=(l+r)/2;
            
            if(arr[mid]==x){
                //possible ans
                ans=mid;
                r=mid-1;
                
            }
            else if(arr[mid]>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
    return ans;
    }
    
    
    int lastOccurance(vector<int> arr, int x){
        
        int l=0;
        int r=arr.size()-1;
        int ans=-1;
        
        while(l<=r){
            int mid=(l+r)/2;
            
            if(arr[mid]==x){
                //possible ans
                ans=mid;
                l=mid+1;
                
            }
            else if(arr[mid]>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
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
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends