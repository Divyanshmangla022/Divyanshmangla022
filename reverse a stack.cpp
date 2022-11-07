#include <iostream>
#include <stack>
using namespace std;

 void reverseStack(stack<int>&input,stack<int>&extra)
 {
     if(input.empty())
     {
         return;
     }
     int temp=input.top();
     input.pop();

     reverseStack(input,extra);

      while(!input.empty())
      {
          extra.push(input.top());
          input.pop();
      }
      extra.push(temp);
      while(!extra.empty())
      {
          input.push(extra.top());
          extra.pop();

      }

      return ;









    /* while(!input.empty())
     {
        extra.push(input.top());
        input.pop();
     }
     stack<int>extra2;
     while(!extra.empty())
     {
         extra2.push(extra.top());
         extra.pop();
     }
     while(!extra2.empty())
     {
        input.push(extra2.top());
        extra2.pop();
     }
     return;
*/

 }

int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}
