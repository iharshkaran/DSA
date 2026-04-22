#include<iostream>
#include<queue>
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
Node* constructBT(int arr[], int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i] != INT_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(j<n && arr[j] != INT_MIN) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);

        i += 2;
        j += 2;

    }
    return root;
}

// Node* constructBT(int arr[], int n){
//     if(n == 0) return NULL;

//     Node* root = new Node(arr[0]);
//     queue<Node*> q;
//     q.push(root);

//     int idx = 1;

//     while(!q.empty() && idx < n){
//         Node* temp = q.front();
//         q.pop();

//         // left child
//         if(idx < n && arr[idx] != INT_MIN){
//             temp->left = new Node(arr[idx]);
//             q.push(temp->left);
//         }
//         idx++;

//         // right child
//         if(idx < n && arr[idx] != INT_MIN){
//             temp->right = new Node(arr[idx]);
//             q.push(temp->right);
//         }
//         idx++;
//     }

//     return root;
// }
void levelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    } cout<<endl;
}
int main(){
    int arr[] = {1,2,3,INT_MIN,INT_MIN,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node* root = constructBT(arr,n);
    levelOrderQueue(root);

}


