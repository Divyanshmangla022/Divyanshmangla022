#include<iostream>
using namespace std;
#include<stack>
/*
template<typename T>
 class Node{
      public:
 T data;
 Node<T>* next;


  Node(T data){
  this->data=data;
  next=NULL;
  }
 };
template<typename T>
 class Stack{
 Node<T>*head;
 int size;

 public:
     Stack(){
         head=NULL;
         size=0;
     }
     int getSize(){
     return size;
     }

     bool isEmpty()
     {
         return head==NULL;

     }

     void push(T element)
     {
       Node<T>* newnode=new Node<T>(element);
      if(head==NULL)
      {
          head=newnode;
          size++;
         return ;
      }


          newnode->next=head;
          head=newnode;
          size++;



     }
     T pop()
 {   if(head==NULL)
     return 0;
     T ans=head->data;
     Node<T>*a=head;
     head=a->next;
  size--;
      delete a;
      return ans;


 }

 T top()
 {
     if(head==NULL)
         return 0;
     return head->data;
 }

 };
*/

int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);


    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;

}

/*
int main() {
    Stack st;

    int q;
    cin >> q;

    while (q--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout << st.pop() << "\n";
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.getSize() << "\n";
                break;
            default:
                cout << ((st.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}
*/
