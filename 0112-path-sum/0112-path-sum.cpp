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
     bool inorder(TreeNode* root,int targetsum,int sum){
        if(root==nullptr){
            return false;
        }
         sum=sum+root->val;
         if(root->left==nullptr && root->right==nullptr && sum==targetsum)
               return true;
        cout<<root->val<<" "<<sum<<endl;
        return  inorder(root->left,targetsum,sum) || inorder(root->right,targetsum,sum);
         
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr){
            return false;
        }
        int sum=0;
        return  inorder(root,targetSum,sum);
    
    }
};