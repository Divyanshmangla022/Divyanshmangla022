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
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
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


Node* deletemidPointll(Node* head)
{
     Node*prev=NULL;
    Node*slow=head;
    Node*fast=head->next;

if(head==NULL||head->next==NULL)
{
    return head;
}
while(fast!=NULL&&fast->next!=NULL)
{
  prev=slow;
 slow=slow->next;
 fast=fast->next->next;
}
prev->next=slow->next;
slow->next=NULL;
delete  slow;
return head;
}

int main()
{
		Node *head = takeinput();

		Node *newhead=deletemidPointll(head);
		print(newhead);

	}


