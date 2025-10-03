class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size(), m = mat[0].size(), ctr = 0;
        vector<int> v(n*m);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                v[ctr++] = mat[i][j];
            }
        }
        int l = 0, r = n*m-1;
        while (l <= r){
            int mid = l+(r-l)/2;
            if (v[mid] == x) return true;
            else if (v[l] <= v[mid]){
                if (v[l] <= x && x <= v[mid]) r = mid-1;
                else l = mid+1;
            }
            else{
                if (v[mid] <= x && x <= v[r]) l = mid+1;
                else r = mid-1;
            }
        }
        return false;
    }
};
