//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        int length=1,start=0;
        for(int i=1;i<s.size();i++)
        {
            int left=i-1;
            int right=i;
            // to get palindrome of even length ->  abccba
            pair<int,int> evenlength=getInd(left,right,s);
            if(evenlength.first>length)
            {
                length=evenlength.first;
                start=evenlength.second;
            }
            
            right=i+1;
            //to get palindrome of odd length -> a b c b a
            pair<int,int> oddLength=getInd(left,right,s);
            if(oddLength.first>length)
            {
                length=oddLength.first;
                start=oddLength.second;
            }
            
            
        }
        return s.substr(start,length);
    }
    pair<int,int> getInd(int left,int right,string &s)
    {
        int length=0;
        int start=0;
        //just expand window size 
        while(left>=0 && right<s.size() && s[left]==s[right])
        {
            if(right-left+1>length){
                length=right-left+1;
                start=left;
            }
            left--;
            right++;
        }
        return {length,start};
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends