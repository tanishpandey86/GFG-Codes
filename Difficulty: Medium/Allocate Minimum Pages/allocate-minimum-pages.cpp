class Solution {
  public:
  bool isPossible(vector<int>arr,int k,int mid){
      int student = 1;
      int pagesum =0;
      for(int i=0; i<arr.size(); i++){
          
          if(pagesum+ arr[i] <= mid){
              pagesum += arr[i];
          }
         
         else{
              student++;
              pagesum = arr[i];
          }
          if(student > k || arr[i]>mid){
              return false;
          }
         
      }
       return true;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        
        int n = arr.size();
        if(k>n){
            return -1;
        }
        int sum =0;
        int l =0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }
        int h = sum;
        int ans = -1;
        
        while(l<=h){
            int mid = (l+h)/2;
            if(isPossible(arr,k,mid)){
                ans = mid;
                h = mid-1;
                
            }
            else{
                l = mid +1;
            }
        }
        return ans;
    }
};