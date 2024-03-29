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

Node* reverseLinkedListRec(Node* head)
{
if(head==NULL)
    return head;
if(head->next==NULL)
    return head;

    Node*temp=reverseLinkedListRec(head->next);
    /*Node*smalloutput=temp;

    while(smalloutput->next!=NULL)
    {
        smalloutput=smalloutput->next;
    }
    smalloutput->next=head;
    head->next=NULL;
    */

    (head->next)->next=head;//head ->next represent tail address
    head->next=NULL;


    return temp;;


}


int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		Node *head = takeinput();
		head = reverseLinkedListRec(head);
		print(head);
	}

	return 0;
}
