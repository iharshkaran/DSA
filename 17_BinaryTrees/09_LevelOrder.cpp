// method-1

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

        nthLevel(root->left,n ,curr+1,v);
        nthLevel(root->right,n,curr+1,v);
    }

    void levelOrder(TreeNode* root, vector<vector<int>>& ans){
        int n = levels(root);

        for(int i=1; i<=n; i++){
            vector<int> v;
            nthLevel(root,i,1,v);
            ans.push_back(v);
        }   
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrder(root ,ans);
        return ans;
    }
};
// Method -2
class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
    void levelOrder(TreeNode* root, vector<vector<int>>& ans,int level){
        if(root==NULL) return;
        ans[level].push_back(root->val);
        levelOrder(root->left,ans ,level+1);
        levelOrder(root->right,ans ,level+1); 
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        int n = levels(root);
        vector<int> v;
        for(int i=1; i<=n; i++) ans.push_back(v);
        levelOrder(root ,ans,0);
        return ans;
    }
};

// Method-3
class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
    void levelOrder(TreeNode* root, vector<vector<int>>& ans,int level){
        if(root==NULL) return;
        ans[level].push_back(root->val);
        levelOrder(root->left,ans ,level+1);
        levelOrder(root->right,ans ,level+1); 
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>> ans(n);
        levelOrder(root ,ans,0);
        return ans;
    }
};