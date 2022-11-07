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
/*void printReverse(Node* head)
{
   Node*temp=head;
   int n=0;
   int *arr=new int[1000];
    while(temp!=NULL)
  {
      arr[n]=temp->data;
       n++;
     temp=temp->next;
  }
  for(int i=n-1;i>=0;i--)
    cout<<arr[i]<<" ";
    delete []arr;
  return ;



}
*/

void printReverse(Node* head)
{
    if(head==NULL)
       return;

       printReverse(head->next);
       cout<<head->data<<" ";
       return ;

}



int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		printReverse(head);
		cout << endl;
	}
	return 0;
}
