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
Node* evenAfterOdd(Node*head)
{
     Node*head1=NULL;
     Node*head2=NULL;
     if(head==NULL)
     {
         return head;
     }
      if(head->data%2==0)
         {
             head1=head;

         }

         else
         {
             head2=head;

         }

         Node*temp1=head1;
         Node*temp2=head2;
         head=head->next;
     while(head!=NULL)
     {
         if(head->data%2==0)
         {
             if(head1==NULL)
             {
                  head1=head;
                  temp1=head1;
             }
           else
           {
               temp1->next=head;
             temp1=temp1->next;

           }
         }

         else
         {
             if(head2==NULL)
             {
                 head2=head;
                 temp2=head2;
         }
         else
         {
             temp2->next=head;
             temp2=temp2->next;
         }
         }
         head=head->next;
    }
    if(temp1!=NULL&&temp2!=NULL)
    {
        temp1->next=NULL;
    temp2->next=NULL;
    }
    else if(temp1==NULL&&temp2!=NULL)
    {
       temp2->next=NULL;
       return head2;
    }
    else
    {
        temp1->next=NULL;
        return head1;
    }



    Node*head3=head2;
    temp2->next=head1;
    temp1->next=NULL;
    return head3;






}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}
