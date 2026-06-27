class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>inmap;
        for(int i=0; i<inorder.size(); i++){
            inmap[inorder[i]]=i;
        }
        TreeNode* root = builtTree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, inmap);
        return root;
    }
    TreeNode* builtTree(vector<int>&preorder, int preStart, int preEnd, vector<int>&inorder, int inStart, int inEnd, map<int,int>&inmap){
        if(preStart > preEnd || inStart > inEnd){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[preStart]);
        int inRoot = inmap[root->val];
        int numleft = inRoot - inStart;
        root->left = builtTree(preorder, preStart + 1, preStart + numleft, inorder, inStart, inRoot-1, inmap);
        root->right = builtTree(preorder, preStart + numleft + 1, preEnd, inorder, inRoot+1, inEnd, inmap);
        return root;
    }
};