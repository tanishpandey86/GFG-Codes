
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        if (n == 1) return {1};
        
        vector<int> k = {1,1};
        while(n>2) {
            vector<int> temp;
            temp.push_back(1);
            for (int i= 0; i < k.size()-1;i++) {
                temp.push_back(k[i]+ k[i+1]);
            }
            temp.push_back(1);
            k = temp;
            n--;
            
            
        }
        return k;
    }
};