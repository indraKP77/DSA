#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        right = left = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight,rightHeight) + 1;
}

int countOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftCount = countOfNodes(root->left);
    int rightCount = countOfNodes(root->right);
    return (leftCount+rightCount+1);
}

int sumOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);
    return leftSum+rightSum+root->data;
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    int h = height(root);
    cout<<"Height of tree is "<<h<<endl;
    int c = countOfNodes(root);
    cout<<"No. of nodes in tree is "<<c<<endl;
    int s = sumOfNodes(root);
    cout<<"Sum of Nodes is "<<s<<endl;
    return 0;
}