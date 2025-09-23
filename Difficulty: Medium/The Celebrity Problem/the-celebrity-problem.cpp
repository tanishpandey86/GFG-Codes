class Solution {
  public:
        int celebrity(vector<vector<int> >& mat) {
      int n=mat.size();
      vector<int> out(n);
      vector<int> in(n);
      
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              if(mat[i][j] && i!=j){
                  out[i]++;
                  in[j]++;
              }
          }
          
      }
      for(int i=0;i<n;i++){
          if(in[i]==n-1 && out[i]==0)return i;
      }
      return -1;
    }
};