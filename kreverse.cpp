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

	int length(Node*head)
	{
	    Node*temp=head;
	    int counti=0;
	    while(temp!=NULL)
        {
          temp=temp->next;
          counti++;
        }

        return counti;
	}

Node* reverseLinkedListRec(Node* head)
{
if(head==NULL)
    return head;
if(head->next==NULL)
    return head;

    Node*temp=reverseLinkedListRec(head->next);


    (head->next)->next=head;//head ->next represent tail address
    head->next=NULL;


    return temp;;


}

Node* kReverse(Node*head,int k)
{

    Node*tail=head;
    Node*temp=head;
    if(head==NULL)
    {
        return head;

    }
    if(k==0)
    {
        return head;
    }
    int lengthi=length(head);

    int i=(lengthi/k);

    int j=0;
        Node*temp1=temp;
        Node*temp2=temp1;
    while(j<i)
    {

        int counti=0;
        while(counti<k-1)
        {
            tail=tail->next;
            counti++;
        }
        Node*c=tail->next;
        tail->next=NULL;
          temp1=reverseLinkedListRec(temp1);

          if(j!=0)
          {
              temp2->next=temp1;
          }

          if(j==0)
          {
              head=temp1;
          }
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
         temp2=temp1;
        if(j==0)
        {temp1->next=c;

          temp1=temp1->next;
          tail=temp1;
        }
        else
        {
          temp1->next=c;
          temp1=temp1->next;
          tail=temp1;

        }



        j++;

    }
    if(temp1!=NULL)
    {
        temp1=reverseLinkedListRec(temp1);
        temp2->next=temp1;
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
		int k;
		cin >> k;
		head = kReverse(head, k);
		print(head);
	}

	return 0;
}
