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
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>temp;
        
        stack<TreeNode*>st;
        int sum=0;
        st.push(root);
        while(!st.empty()){
            TreeNode* topnode =st.top();
            if(topnode->val >= low && topnode->val <= high)
              temp.push_back(topnode->val);
            
            st.pop();
            if(topnode->left!=NULL)
                st.push(topnode->left);
            if(topnode->right!=NULL)
                st.push(topnode->right);
        }
        
        for(int i=0;i<temp.size();i++){
            sum+=temp[i];
        }
     return sum;   
    }
};