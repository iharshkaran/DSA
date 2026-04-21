 #include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
int sumTree(Node* root){
    if(root == NULL) return 0;
    return root->val + sumTree(root->left) + sumTree(root->right);
}
int productTree(Node* root){
    if(root == NULL) return 1;
    return root->val * productTree(root->left) * productTree(root->right);
}
int treeSize(Node* root){
    if(root == NULL) return 0;
    return 1 + treeSize(root->left) + treeSize(root->right);
}
int maxInTree(Node* root){
    if(root == NULL) return INT_MIN;
    int leftMax = maxInTree(root->left);
    int rightMax = maxInTree(root->right);
    return max(root->val,max(leftMax,rightMax));
}
int minInTree(Node* root){
    if(root == NULL) return INT_MAX;
    int leftMin = minInTree(root->left);
    int rightMin = minInTree(root->right);
    return min(root->val,min(leftMin,rightMin));
}
int treeLevels(Node* root){
    if(root == NULL) return 0;
    int leftMaxLevel = treeLevels(root->left);
    int rightMaxLevel = treeLevels(root->right);
    return 1 + max(leftMaxLevel,rightMaxLevel);
}
int treeHeight(Node* root){
    return treeLevels(root)-1;
}
int main(){
    Node* a = new Node(8); // Root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    // c->right = g;
    displayTree(a);
    cout<<endl;
    cout<<sumTree(a)<<endl;
    cout<<productTree(a)<<endl;
    cout<<treeSize(a)<<endl;
    cout<<maxInTree(a)<<endl;
    cout<<minInTree(a)<<endl;
    cout<<treeLevels(a)<<endl;
    cout<<treeHeight(a)<<endl;
}