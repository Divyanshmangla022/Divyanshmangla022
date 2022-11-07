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
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node* appendLastNToFirst(Node* head,int n)
{
    int counti=1;
    Node*tail=head;
    if(head==NULL)
    {
        return head;
    }
    while(tail->next!=NULL)
    {
        tail=tail->next;
        counti++;
    }

    int i=counti-n;
   int m=0;

   Node*temp=head;
    if(i>0)
    {


      /*  if(m==(i-1))
    {
     tail->next=head;
     Node*a=head;
     head=a->next;
     a->next=NULL;
     return head;
    }
    */
    while(m<i)
    {
        tail->next=head;
        Node*a=head;
        head=a->next;
        tail=a;
        tail->next=NULL;
        m++;
    }
    return head;

}
else
return head;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}
