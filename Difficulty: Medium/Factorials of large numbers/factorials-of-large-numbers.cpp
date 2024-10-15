//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    void multiply(vector<int>& arr, int& size, int m){
        int carry = 0;
        for(int i = 0 ; i < size; i++){
         int res = m*arr[i];
         res = res + carry;
         arr[i] = res%10;
         carry = res/10;
        }
        while(carry>0){
            arr[size] = carry%10;
            size++;
            carry /= 10;
            
        }
        
    }
    vector<int> factorial(int N){
        
        vector<int> arr(10000,0);
        arr[0] = 1;
        int size = 1;
        for(int mult = 1; mult <= N; mult++){
            multiply(arr,size,mult);
        }
        vector<int> result;
        for(int i = size-1; i >= 0; i--){
            result.push_back(arr[i]);
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends