//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    char getMaxOccuringChar(string str)
    {
        unordered_map<char,int> mpp;
        for(auto ch : str){
            mpp[ch]++;
        }
        
        int maxi = 0;
        char chr  ='\0';
        for(auto& x : mpp){
            if(x.second > maxi || (x.second == maxi && x.first < chr)){
                maxi = x.second;
                 chr  = x.first;
            }
        }
        return chr;
    }
};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends