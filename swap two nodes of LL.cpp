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


Node* swapNodes(Node*head,int m,int n)
{
    if(head==NULL)
    {
        return head;
    }
Node*temp1=head;
Node*temp2=head;
int i=0;
if(m==0&&n==0)
{
    return head;
}
if(m==0)
{

    int j=0;
    while(j<n-1&&temp2!=NULL)
    {
      temp2=temp2->next;
      j++;
    }
  temp1=head;
  Node*b=temp2->next;
  head=temp2->next;
  temp2->next=temp1;
  Node*c=temp1->next;
  temp1->next=b->next;
  b->next=c;
  return head;



}
if(n==0)
{
    int i=0;
    while(i<m-1&&temp1!=NULL)
    {
        temp1=temp1->next;
        i++;
    }
    temp2=head;
    Node*a=temp1->next;
    head=temp1->next;
    temp1->next=temp2;
    Node*c=temp2->next;
    temp2->next=a->next;
    a->next=c;

    return head;

}
while(i<m-1&&temp1!=NULL)
{
    temp1=temp1->next;
    i++;

}

int j=0;

while(j<n-1&&temp2!=NULL)
{
    temp2=temp2->next;
    j++;
}

Node*a=temp1->next;
Node*b=temp2->next;
temp1->next=temp2->next;
temp2->next=a;
Node*c=a->next;
a->next=b->next;
b->next=c;
return head;




}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}
