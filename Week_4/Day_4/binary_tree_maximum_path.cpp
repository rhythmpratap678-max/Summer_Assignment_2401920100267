class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxsum = INT_MIN;
        maxPathDown(root, maxsum);
        return maxsum;
    }
    int maxPathDown(TreeNode* node, int &maxsum){
        if(node == NULL){
            return 0;
        }
        int left = max(0, maxPathDown(node->left, maxsum));
        int right = max(0, maxPathDown(node->right, maxsum));
        maxsum = max(maxsum, left + right + node->val);
        return max(left, right) + node->val;
    }
};