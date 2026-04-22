class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }

    void nthLevel(TreeNode* root,int n,int curr,vector<int>& v){
        if(root == NULL) return;

        if(curr == n){
            v.push_back(root->val);
            return;
        }
        if(n%2!=0){
            nthLevel(root->left,n ,curr+1,v);
            nthLevel(root->right,n,curr+1,v);
        }
        else{
            nthLevel(root->right,n,curr+1,v);
            nthLevel(root->left,n ,curr+1,v);
        }
        
    }
    void zigzagLevelOrder(TreeNode* root, vector<vector<int>>& ans){
        int n = levels(root);
        for(int i=1; i<=n; i++){
            vector<int> v;
            nthLevel(root,i,1,v);
            ans.push_back(v);
        }   
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        zigzagLevelOrder(root ,ans);
        return ans;
    }
};