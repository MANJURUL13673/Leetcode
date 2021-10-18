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
    bool isCousins(TreeNode* root, int x, int y) 
    {
        queue<TreeNode*>values;
        TreeNode* value;
        values.push(root);
        int temp = 0;
        int levelSize = 1;
        while(!values.empty())
        {
            value = values.front();
            if(value->left != NULL && value->right != NULL)
            {
                if((value->left->val == x || value->left->val == y) && (value->right->val == x || value->right->val == y))  return false;
            }
            if(value->left != NULL)
            {
                values.push(value->left);
            }
            if(value->right != NULL)
            {
                values.push(value->right);
            }
            values.pop();
            if(value->val == x || value->val == y)
            {
                temp++;
            }
            levelSize--;
            if(levelSize == 0)
            {
                if(temp == 1)
                {
                    return false;
                }
                else if(temp == 2)
                {
                    return true;
                }
                levelSize = values.size();
            }
        }
        return false;
    }
};