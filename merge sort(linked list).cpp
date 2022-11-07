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

Node* mergeTwoSortedLinkedLists(Node* head1,Node* head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    else if(head2==NULL)
    {
        return head1;
    }
    else
    {
        Node*head3=NULL;


    if(head1->data<head2->data)
    {
        head3=head1;
        head1=head1->next;
    }
    else
    {
        head3=head2;
        head2=head2->next;
    }

    Node*temp3=head3;

    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->data<head2->data)
        {
            temp3->next=head1;
            head1=head1->next;
             temp3=temp3->next;

       }
       else
       {
           temp3->next=head2;
           head2=head2->next;
           temp3=temp3->next;

       }



    }
      if(head1!=NULL)
   {
      while(head1!=NULL)
    {
        temp3->next=head1;
            head1=head1->next;
            temp3=temp3->next;
    }
   }
   else
   {
     while(head2!=NULL)
    {
        temp3->next=head2;
           head2=head2->next;
           temp3=temp3->next;
    }
   }


    return head3;

    }
}
Node* midPoint(Node* head)
{
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



Node* mergeSort(Node* head)
{

    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    Node*mid=midPoint(head);
    Node*head1=mid->next;
    mid->next=NULL;
      Node*temp1=mergeSort(head);
    Node*temp2=mergeSort(head1);

    Node*head3=mergeTwoSortedLinkedLists(temp1,temp2);
    return head3;




}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		head = mergeSort(head);
		print(head);
	}

	return 0;
}
