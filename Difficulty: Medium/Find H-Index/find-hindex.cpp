class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // code here
        int n = citations.size();
        
        vector<int> count(n+1, 0);
        
        for(int i = 0; i < n; i++){
            int citation = citations[i];
            
            count[min(citation, n)]++;
        }
        
        int papersWithAtleastH = 0;
        
        for(int h = n; h >= 0; h--){
            papersWithAtleastH += count[h];
            
            if(papersWithAtleastH >= h){
                return h;
            }
        }
        
        return 0;
    }
};