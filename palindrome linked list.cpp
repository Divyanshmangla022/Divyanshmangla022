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


 bool isPalindrome(Node* head)
 {

    Node*temp=head;
   int n=0;
    while(temp!=NULL)
  {
       n++;
     temp=temp->next;
  }

  int* arr=new int[n];
  temp=head;
  int i=0;
  while(temp!=NULL)
  {  arr[i]=temp->data;
       i++;
     temp=temp->next;
  }


  for(int i=0;i<n;i++)
  {
      if(arr[i]!=arr[n-1-i])
      {
          return false;
      }
  }
  return true;


 }


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}
