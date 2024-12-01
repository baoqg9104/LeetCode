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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans = true;
        preorder(p, q, &ans);
        return ans;
    }

    void preorder(TreeNode* p, TreeNode* q, bool* ans) {
        if (!*ans) return;
        if (p == nullptr && q == nullptr) return;
        if (p == nullptr || q == nullptr || p->val != q->val) {
            *ans = false;
            return;
        }
        preorder(p->left, q->left, ans);
        preorder(p->right, q->right, ans);  
    }
};