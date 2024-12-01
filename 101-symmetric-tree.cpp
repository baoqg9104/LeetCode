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
    bool isSymmetric(TreeNode* root) {
        vector<TreeNode*> a, b;
        preorderA(root->left, &a);
        preorderB(root->right, &b);
        if (a.size() != b.size()) return false;
        for (int i=0; i<a.size(); i++) {
            if (a[i] == nullptr && b[i] == nullptr) continue;
            if (a[i] == nullptr || b[i] == nullptr || a[i]->val != b[i]->val) return false;
        }
        return true;
    }

    void preorderA(TreeNode* root, vector<TreeNode*>* a) {
        a->push_back(root);
        if (root == nullptr) return;
        preorderA(root->left, a);
        preorderA(root->right, a);
    }

    void preorderB(TreeNode* root, vector<TreeNode*>* a) {
        a->push_back(root);
        if (root == nullptr) return;
        preorderB(root->right, a);
        preorderB(root->left, a);
    }
};