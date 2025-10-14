/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    private:
    void getAns(Node* root, int l, int r, int &sum){
        if(!root)
        return;
        if(root->data>=l and root->data<=r){
            sum= sum+ root->data;
        }
        getAns(root->left, l, r, sum);
        getAns(root->right, l, r, sum);
    }
  public:
    int nodeSum(Node* root, int l, int r) {
        // code here
        int sum=0;
        getAns(root, l, r, sum);
        return sum;
    }
};
