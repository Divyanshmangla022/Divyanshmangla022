#include<iostream>
#include<vector>
#include<queue>
using namespace std;

template<typename T>
class TreeNode{
public:

T data;
vector<TreeNode*> children;//s ave the adddress of children as many you want
TreeNode(T data)
{
    this->data=data;
}

};

TreeNode<int>* takeInputlevelwise(){   //return level wise

    int rootdata;
    cout<<"enter the root data "<<endl;
    cin>>rootdata;
    TreeNode<int>*root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingnodes;
      pendingnodes.push(root);

      while(pendingnodes.size()!=0)
      {
          TreeNode<int>*front=pendingnodes.front();
          pendingnodes.pop();

          int numchild;
          cout<<"enter the number of child of "<<front->data<<endl;
          cin>>numchild;
          for(int i=0;i<numchild;i++)
          {
              int childdata;
              cout<<"enter the "<<i<<"th child of "<<front->data<<endl;
              cin>>childdata;

             TreeNode<int>*child=new TreeNode<int>(childdata);
             front->children.push_back(child);
             pendingnodes.push(child);
        }

    }
    return root;



}

/*void printTree(TreeNode<int>*root)//print tree
{
    if(root==NULL)//edge case not a base case
    {
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;

    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }

}
*/


void printLevelWise(TreeNode<int>*root)

{
    queue<TreeNode<int>*> q;
   q.push(root);

   while(q.size()!=0)
   {
       TreeNode<int>*front=q.front();
       q.pop();

       cout<<front->data<<":";
    for(int i=0;i<front->children.size();i++)
    {
        q.push(front->children[i]);
        if(i!=0)
        {
            cout<<",";
        }
        cout<<front->children[i]->data;
    }
         cout<<endl;




   }

}
int sumnodes(TreeNode<int>* root)
{
    int sum=root->data;
    for(int i=0;i<root->children.size();i++)
    {
        sum=sum+sumnodes(root->children[i]);
    }
    return sum;

}



int main()
{
    /*TreeNode<int>*root=new TreeNode<int>(1);
     TreeNode<int>*Node1=new TreeNode<int>(2);
      TreeNode<int>*Node2=new TreeNode<int>(3);

      root->children.push_back(Node1);//put values of address in the vector children

      root->children.push_back(Node2);
      */
      TreeNode<int>*root=takeInputlevelwise();
      int counti=sumnodes(root);
      cout<<counti<<endl;

      //printLevelWise(root);
}
