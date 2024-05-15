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
    int findMaxSumPath(TreeNode* root,int &maxi){
        if(root==nullptr)
            return 0;
        
        int LeftMaxH=max(0,findMaxSumPath(root->left,maxi));
        int RightMaxH=max(0,findMaxSumPath(root->right,maxi));
        
        maxi=max(maxi,LeftMaxH+RightMaxH+root->val);
        
        return max(LeftMaxH,RightMaxH)+root->val;
        
    }
    
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        findMaxSumPath(root,maxi);
        return maxi;
    }
};