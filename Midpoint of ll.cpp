#include <iostream>

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

using namespace std;

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
Node* midPoint(Node* head)
{
/*
    int counti=0;
    Node*temp=head;
    if(temp==NULL)
    {
        return head;
    }
    while(temp!=NULL)
    {
        counti++;
        temp=temp->next;

    }
    int mid=(counti-1)/2;
    temp=head;
    int k=0;
    if(k==mid)
    {
        return head;
    }
    while(k<mid)
    {
        temp=temp->next;
        k++;
    }
    return temp;
    */
    Node*slow=head;
    Node*fast=head->next;

if(head==NULL||head->next==NULL)
{
    return head;
}
while(fast!=NULL&&fast->next!=NULL)
{

 slow=slow->next;
 fast=fast->next->next;
}
return slow;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		Node *mid = midPoint(head);
		if (mid != NULL)
		{
			cout << mid->data;
		}
		cout << endl;
	}
	return 0;
}
