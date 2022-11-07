#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};



Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

Node* insertnode(Node*head,int i,int data)
{
    Node*newnode=new Node(data);
    Node *temp=head;
    int counti=0;
    if(i==0)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(counti<i-1&&temp!=NULL)
    {
        temp=temp->next;
        counti++;
    }
    if(temp->next!=NULL)
    {


    Node* a=temp->next;
    temp->next=newnode;
    newnode->next=a;
    return head;

}
return head;
}
 void print(Node *head)
     {
            Node* temp=head;
         while(temp!=NULL)
         {
             cout<<temp->data<<" ";
             temp=temp->next;
         }
     }


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int i;
		cin>>i;
		int data;
		cin>>data;
		head= insertnode(head,i,data);
		print(head);
	}

	return 0;
}
