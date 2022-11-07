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

Node* deleteNode(Node*head,int pos)
{

    Node*temp=head;
    int counti=0;
    if(pos==0)
    {
        Node*a=temp->next;
        head=a;
        delete temp;
        return head;

    }
    while(counti<pos-1&&temp!=NULL)
    {
        temp=temp->next;
        counti++;
    }
    if(temp->next!=NULL)
    {
    Node*a=temp->next;
    Node*b=a->next;
    temp->next=b;
    delete a;
    return head;

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
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
	}

	return 0;
}
