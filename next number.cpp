#include <iostream>
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

using namespace std;


Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
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
Node * NextLargeNumber(Node*head)
{

    Node *temp1=head;
    //Node*temp3=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->data=temp1->data+1;

    if(temp1->data<10)
        return head;
    else
    {
    Node*temp=reverseLinkedListRec(head);
    Node*temp2=temp;
    while(temp2->next!=NULL)
    {
        if(temp2->data<10)
            break;
      temp2->data=0;
      temp2->next->data=temp2->next->data+1;
      temp2=temp2->next;

    }
    if(temp2->data<10)
    {
        head=reverseLinkedListRec(temp);
        return head;
    }
    else if(temp2->data=10)
    {
        Node*newnode=new Node(1);
        temp2->data=0;
        temp2->next=newnode;
        Node*head2=reverseLinkedListRec(temp);
        return head2;
    }
    else
        return NULL;
    }


    }


    /*int n=0;//for smaller input only not for large linked list

    while(head!=NULL)
    {  n=head->data+n*10;
        head=head->next;
    }
    n=n+1;

    while(n!=0)

    {     Node*newnode=new Node(n%10);

    if(head==NULL)
       {
           head=newnode;

       }
         else{
               newnode->next=head;
               head=newnode;
         }
         n=n/10;



    }
    return head;




*/


int main() {
    Node *head = takeinput();

    head = NextLargeNumber(head);
    print(head);
    return 0;
}



