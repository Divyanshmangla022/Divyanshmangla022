#include<iostream>
using namespace std;
class Deque{
int *data;
int size;
int capacity;
public:

Deque(int totalsize){
    data=new int[totalsize];
    size=0;
    capacity=totalsize;
}

int getsize()
{
    return size;
}
bool isEmpty()
{
    return size==0;
}

int getFront()
{
    if(0==size)
    {
         return -1;
    }

    return data[0];
}

int getRear()
{
    if(size==0)
    {
      return -1;
    }

    return data[size-1];
}


void insertRear(int element)
{
    if(capacity==size)
    {
        cout<<"-1"<<endl;
        return;
    }
    data[size]=element;
    size++;

}

void insertFront(int element)
{
    if(size==capacity)
    {
        cout<<"-1"<<endl;
        return;
    }

for(int i=size-1;i>=0;i--)
{
    data[i+1]=data[i];
}
data[0]=element;
size++;
};

void deleteFront(){
if(size==0)
{
    cout<<"-1"<<endl;
    return;
}
for(int i=0;i<size-1;i++)
{
    data[i]=data[i+1];
}
size--;

}

void deleteRear()
{
    if(size==0)
    {
        cout<<"-1"<<endl;
        return ;
    }
   size--;
}

};

int main()
{
    Deque dq(10);
    int choice,input;
    while(true) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                dq.insertFront(input);
                break;
            case 2:
                cin >> input;
                dq.insertRear(input);
                break;
            case 3:
                dq.deleteFront();
                break;
            case 4:
                dq.deleteRear();
                break;
            case 5:
                cout << dq.getFront() << "\n";
                break;
            case 6:
                cout << dq.getRear() << "\n";
                break;
            default:
                return 0;
        }
    }

    return 0;
}
