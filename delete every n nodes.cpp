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
Node* skipMdeleteN(Node*head,int m,int n)
{
    Node*temp=head;
    if(head==NULL)
    {
        return head;
    }


 while(temp!=NULL)
 {


    int i=0;
    if(m!=0)
 {

  while(i<m-1&&temp!=NULL)
{
    temp=temp->next;
    i++;
}



if(temp==NULL)
{
    break;
}

int j=0;
while(j<n&&temp->next!=NULL)
{
    Node*a=temp->next;
    Node*b=a->next;
    temp->next=b;
    delete a;
    j++;
}
if(temp->next!=NULL)
temp=temp->next;
 }

 else

 {
    if(n!=0)
    {
        head=NULL;
        return head;
    }
    else
    {
      return head;
    }

    }
 }

 return head;

}





int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}
