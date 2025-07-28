class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat) {
        // code here
        priority_queue<int>row,col;
        
        for(int i=0;i<mat.size();i++){
            int rowsum=0,colsum=0;
            for(int j=0;j<mat[0].size();j++){
                rowsum+=mat[i][j];
                colsum+=mat[j][i];
            }
            
            // cout<<rowsum<<" "<<colsum<<endl;
            
            row.push(rowsum);
            col.push(colsum);
        }
        
        int ans=0,ansmax;
        
        if(row.top() > col.top()){
            ansmax=row.top();
            row.pop();
        }
        else{
            ansmax=col.top();
            col.pop();
        }
        
        while(!row.empty() and !col.empty()){
            int x = row.top() , y= col.top(), ext=0;
            row.pop();
            col.pop();
            
            if(x > y){
                ext = ansmax - x;
                ans+=ext;
                y+=ext;
                col.push(y);
            }
            else{
                ext = ansmax - y;
                ans+=ext;
                x+=ext;
                row.push(x);
            }
        }
        
        
        return ans;
        
        
    }
};