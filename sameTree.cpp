/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
*
*@Oliverlyn:2016-2-23
**/
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return true;
        else if((!p&&q) || (!q && p))
            return false;
        else{
            if(p->val != q->val)
                return false;
            else {
                return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
            }
        }
       
    }
    
};
