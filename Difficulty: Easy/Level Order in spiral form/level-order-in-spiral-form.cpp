/* A binary tree node has data, pointer to left child
   and a pointer to right child
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
class Solution {
  public:
    vector<int> findSpiral(Node* root) {
     
        queue<Node*> q;
        q.push(root);
        vector<int> ans;
          bool flag= false;
        while(!q.empty()){
            Node* front= q.front();
            int size= q.size();
            
            vector<int> v(size);
            for (int i=0; i<size; i++){
              Node* front= q.front();
              q.pop();
              int index= flag== true ? i : size-i-1;
              v[index]= front->data;
              if(front->left){
                  q.push(front->left);
              }
              if(front->right){
                  q.push(front->right);
              }
                
            }
            for (auto i: v){
                ans.push_back(i);
            }
            
    
        flag= !flag;
        
        }
        return ans;
    }
};