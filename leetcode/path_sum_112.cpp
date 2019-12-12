/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL) return false;
        return _hasPathSum(root, sum, 0);
    }

    bool _hasPathSum(TreeNode* root, int sum, int curSum) {
        curSum = curSum + root->val;
        if (root->left == NULL && root->right == NULL && curSum == sum) {
            return true;
        }
        cout << curSum << " " << root->val << endl;
        if (root->left != NULL && _hasPathSum(root->left, sum, curSum))
           return true;
        if (root->right != NULL && _hasPathSum(root->right, sum, curSum))
           return true;
        return false;
    }
};
