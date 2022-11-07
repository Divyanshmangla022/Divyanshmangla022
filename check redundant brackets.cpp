#include <iostream>
#include <string>
using namespace std;
#include<stack>

bool checkRedundantBrackets(string input)
{

 stack<char>s;
 int c;

 for(int i=0;i<input.size();i++)
 {
     if(input[i]=='(')
     {
         s.push(input[i]);
     }
     else if(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/'||input[i]=='%')
     {
         s.push(input[i]);
     }


     else if(input[i]==')')
     {
         if(s.top()=='(')
         {
             return true;
         }

         while(s.top()!='(')
         {
             s.pop();
         }
         s.pop();

     }


}
     return false;

}

/*
 int*c=new int[input.size()/2];
bool check=false;

 int k=-1;
  for(int i=0;i<input.size();i++)
  {


    if(input[i]=='(')
    {
        k++;
        s.push(input[i]);
        c[k]=0;




    }
    else if(input[i]!='('&&input[i]!=')')
    {
        s.push(input[i]);
        c[k]++;
    }

    else if(input[i]==')')
    {
          check=false;
        while(s.top()!='(')
        {
            if(s.top()=='+'||s.top()=='-'||s.top()=='*'||s.top()=='/'||s.top()=='%')
                {
                check=true;
                break;
                }
            s.pop();
                }
        while(s.top()!='(')
             {
            s.pop();
            }



        s.pop();


        if(c[k]==0)
        {
            return true;
        }


        k--;

    }
  }
  if(check)
    return false;
  else
    return true;

*/




int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}
