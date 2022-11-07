#include<iostream>
using namespace std;
//#include<climits>
/*class stackUsingarray{
private:
    int *data;
    int nextindex;
    int capacity;
public:
     stackUsingarray(int totalsize)
     {
         data=new int[totalsize];
         capacity=totalsize;
         nextindex=0;
     }

     int size()
     {
         return nextindex;
     }
      bool isEmpty()
      {
          return nextindex==0;
      }
      void push(int element)
      {
          if(nextindex==capacity)
          {
              cout<<"stack full"<<endl;
              return;
          }
          else
          {
              data[nextindex]=element;
              nextindex++;
          }
      }

      int pop()
      {
          if(isEmpty())
          {
               cout<<"stack is empty"<<endl;
               return INT_MIN;
          }
          nextindex--;
          return data[nextindex];
      }
      int top()
      {
          if(isEmpty())
          {
               cout<<"stack is empty"<<endl;
               return INT_MIN;
          }
        return data[nextindex-1];

      }

};



class stackUsingarray {
private:
    int *data;
    int nextindex;
    int capacity;
public:
     stackUsingarray()
     {
         data=new int[4];
         capacity=4;
         nextindex=0;
     }

     int size()
     {
         return nextindex;
     }
      bool isEmpty()
      {
          return nextindex==0;
      }
      void push(int element)
      {
          if(nextindex==capacity)
          {
           int *newdata=new int[2*capacity];
           for(int i=0;i<capacity;i++)
           {
               newdata[i]=data[i];
           }
           delete[] data;
           data=newdata;
           capacity=2*capacity;
          }

              data[nextindex]=element;
              nextindex++;
          }


      int pop()
      {
          if(isEmpty())
          {
               cout<<"stack is empty"<<endl;
               return INT_MIN;
          }
          nextindex--;
          return data[nextindex];
      }
      int top()
      {
          if(isEmpty())
          {
               cout<<"stack is empty"<<endl;
               return INT_MIN;
          }
        return data[nextindex-1];

      }

};
*/


template<typename T>
class stackUsingarray {
private:
    T *data;
    int nextindex;
    int capacity;
public:
     stackUsingarray()
     {
         data=new T[4];
         capacity=4;
         nextindex=0;
     }

     int size()
     {
         return nextindex;
     }
      bool isEmpty()
      {
          return nextindex==0;
      }
      void push(T element)
      {
          if(nextindex==capacity)
          {
           T *newdata=new T[2*capacity];
           for(int i=0;i<capacity;i++)
           {
               newdata[i]=data[i];
           }
           delete[] data;
           data=newdata;
           capacity=2*capacity;
          }

              data[nextindex]=element;
              nextindex++;
          }


      T pop()
      {
          if(isEmpty())
          {
               cout<<"stack is empty"<<endl;
               return 0;
          }
          nextindex--;
          return data[nextindex];
      }
      T top()
      {
          if(isEmpty())
          {
               cout<<"stack is empty"<<endl;
               return 0;
          }
        return data[nextindex-1];

      }

};


int main()
{
    stackUsingarray<char>s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);


    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;

}
