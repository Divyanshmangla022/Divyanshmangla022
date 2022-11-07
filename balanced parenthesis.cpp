#include <iostream>
#include <string>
#include<stack>
using namespace std;

bool isBalanced(string input)
{
   stack<char>s;
   for(int i=0;i<input.size();i++)
   {
      if(input[i]=='(')
      {
          s.push(input[i]);
      }
      else if(input[i]==')')
      {
          if(s.empty())
          {
              return false;
          }
          s.pop();
      }
      else if(input[i]=='{')
        {

            s.push(input[i]);
        }
        else if(input[i]=='}')
        {
            if(s.empty())
          {
              return false;
          }
            s.pop();
        }
        else if(input[i]=='[')
        {


            s.push(input[i]);


            }
            else if(input[i]==']')
            {
                if(s.empty())
          {
              return false;
          }
                s.pop();
            }

   }

   if(s.empty())
   {
       return true;
   }
   else
   {
       return false;
   }
}

int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}
