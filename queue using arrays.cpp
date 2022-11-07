#include<iostream>
using namespace std;
template<typename T>
class QueueUsingArray{
T *data;
int nextindex;
int firstindex;
int size;
int capacity;
public:
    QueueUsingArray( )
    {
        data=new T[5];
        nextindex=0;
        firstindex=-1;
        size=0;
         capacity=5;
    }

    int getsize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
    void enqueue(T element)
    {
        if(size==capacity)
        {
       T *newdata=new T[2*capacity];
        for(int i=0;i<capacity;i++)
        {
            if(firstindex==capacity)
            {
                firstindex=0;
             }
            newdata[i]=data[firstindex];
            firstindex++;
        }
        delete[]data;
        data=newdata;
        nextindex=capacity;
        firstindex=0;
        capacity=2*capacity;
        }
        data[nextindex]=element;
        nextindex=(nextindex+1)%capacity;
        if(firstindex==-1)
        {
            firstindex=0;
        }
        size++;

    }

    T front()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return data[firstindex];
    }

    T dequeue()
    {

        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return 0;
        }
        T temp=data[firstindex];
        firstindex=(firstindex+1)%capacity;
        size--;
        if(size==0)
        {
            firstindex=-1;
            nextindex=0;
        }
        return temp;

    }










};
int main()
{
    QueueUsingArray<int>q;

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
