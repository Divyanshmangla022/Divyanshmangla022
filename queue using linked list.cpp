#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;

    Node(int data)
    {
        this->data=data;
        next=NULL;
    }


};

class Queue{
Node* head;
int size;
Node* tail;
public:

Queue()
{
    head=NULL;
    tail=NULL;
    size=0;

}
int getsize()
{
    return size;

}
bool isEmpty()
{
    return size==0;
}

void enqueue(int element)
{
    Node*newnode=new Node(element);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        size++;
        return ;
    }
    tail->next=newnode;
    tail=tail->next;
    size++;
}

int dequeue()
{
    if(size==0)
    {
        return -1;
    }
    int ans=head->data;
    Node*a=head;
    head=a->next;
    delete a;
    size--;
    return ans;
}
int front()
{
    if(head==NULL)
        return 0;
    return head->data;
}



};
/*
int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<q.front()<<endl;
    cout<<q.getsize()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getsize()<<endl;
}
*/
