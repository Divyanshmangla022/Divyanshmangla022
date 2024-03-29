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
Node* deleteNodeRec(Node*head,int pos)
{
    if(head==NULL)
    {
        return head;
    }

    if(pos==1&&head->next!=NULL)
    {
        Node*a=head->next;
        Node*b=a->next;
        head->next=b;
        delete a;
        return head;
    }
    if(pos==0)
    {
        Node*a=head->next;
        delete head;
        head=a;
        return head;
    }
    Node*smalloutput=deleteNodeRec(head->next,pos-1);
    return head;

}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNodeRec(head, pos);
		print(head);
	}

	return 0;
}
