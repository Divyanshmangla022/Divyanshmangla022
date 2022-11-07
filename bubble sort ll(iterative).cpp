//bubble sort iterative
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


int length(Node *head) {
    if(head == NULL) {
        return 0;
    }
    return 1 + length(head -> next);
}

Node *bubbleSort(Node *head) {

    for(int i = 0; length(head)-1 > i; i++) {
        Node *prev = NULL;
        Node *current = head;

        while(current -> next!=NULL) {
            Node*fut=current->next;
            if(current -> data > current -> next -> data) {
                if(prev!=NULL) {

                    prev->next=current->next;
                    current->next=fut->next;
                    fut->next=current;
                    prev=prev->next;
                } else {
                   prev=current->next;
                   head=prev;
                   current->next=fut->next;
                   fut->next=current;


                }
            } else {
                prev = current;
                current = current -> next;
            }
        }
    }
    return head;
}


int main()
{
	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
}
