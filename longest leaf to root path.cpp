#include <iostream>
#include <vector>
#include <queue>

template <typename T>
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
//#include "solution.h"

BinaryTreeNode<int>* takeInput() {
    int rootData;
    //cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
	q.pop();
        int leftChild, rightChild;
        //cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        //cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}
int height(BinaryTreeNode<int>*root)
{
    if(root==NULL)
        return 0;
   int ans1=height(root->left);
   int ans2=height(root->right);
   if(ans1>ans2)
    return ans1+1;
   else
   {
       return ans2+1;
   }
}


vector<int>* longestPath(BinaryTreeNode<int>* root) {

    if(root==NULL)
        return NULL;

        if(root->left==NULL&&root->right==NULL)
        {
            vector<int>*output=new vector<int>();
            output->push_back(root->data);
            return output;
        }

    int leftheight=height(root->left);
    int rightheight=height(root->right);
    if(leftheight>rightheight)
    {
       vector<int>*left=longestPath(root->left);
       left->push_back(root->data);
       return left;
    }
    else
    {
        vector<int>*right=longestPath(root->right);
        right->push_back(root->data);
        return right;
    }

    return NULL;




}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    vector<int> *output = longestPath(root);
    vector<int> :: iterator i = output -> begin();
    while(i != output -> end()) {
    	cout << *i << endl;
    	i++;
    }
}
