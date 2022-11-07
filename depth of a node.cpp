#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

//#include "solution.h"

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

void printatlevelk(TreeNode<int>*root,int k)
{

    if(k==0)
    {
        cout<<root->data<<endl;
        return;
    }
    if(root==NULL)
        return;


    for(int i=0;i<root->children.size();i++)
    {
        printatlevelk(root->children[i],k-1);
    }


}


int main() {
    TreeNode<int>* root = takeInputLevelWise();
    //cout << getHeight(root);
    cout<<"enter the depth of a node for whjich we can find a data: "<<endl;
    int k;
    cin>>k;
    printatlevelk(root,k);
}
