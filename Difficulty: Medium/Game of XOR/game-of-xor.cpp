class Solution {
  public:
    using ll=long long;
    int subarrayXor(vector<int>& arr) {
        // code here
        int n=arr.size();
        int x=0;
        for(int i=0;i<n;i++){
            ll cnt=(ll)(i+1)*(n-i);
            if(cnt%2)
                x=x^arr[i];
        
        }
        return x;
    }
};