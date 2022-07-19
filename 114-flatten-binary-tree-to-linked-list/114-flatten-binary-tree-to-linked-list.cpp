/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        TreeNode* cur = root;
        while(cur!=NULL) {
            if(cur->left != NULL) {
                TreeNode* prev = cur->left; // 2
                while(prev->right) prev = prev->right; // reached 4
                prev->right = cur->right; // connect 4.right to 1.right
                cur->right = cur->left; // connect 1.right to 2
                cur->left = NULL;
            }
            cur = cur->right;
        }
    }
};