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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>inorder;
        stack<TreeNode*>st;
        while(true){
            if(root!=NULL){
                st.push(root);
                root=root->left;
            }
            else{
                if(st.empty())
                    break;
                root=st.top();
                inorder.push_back(root->val);
                st.pop();
                root=root->right;
            }
        }
        TreeNode * newroot =new TreeNode(inorder[0]);
        TreeNode * current = newroot;
        for(int i=1;i<inorder.size();i++){
            if(inorder[i]==NULL)
                continue;
            current->right=new TreeNode(inorder[i]);
            current=current->right;
        }
        return newroot;
    }
};