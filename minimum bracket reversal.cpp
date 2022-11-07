#include <iostream>
#include <string>
#include<stack>
using namespace std;

int countBracketReversals(string input)
{
     if(input.size()%2!=0)
    return -1;
 stack<char>s;
 int c=0;
 int counti=0;
 for(int i=0;i<input.size();i++)
 {
     if(input[i]=='{')
     s.push(input[i]);
     else
     {
         if(s.empty())
         {
             c++;

         }
         else
         {
             s.pop();
          }
    }
     }

     if(c==0)
     {
        counti=s.size()/2;
        return counti;
     }
     else
     {
         if(s.size()%2==0)
         {
           counti=(s.size()/2)+(c/2);
           return counti;
         }
         else
         {
             int counti=((s.size()-1)/2)+((c-1)/2)+2;
             return counti;
         }

     }



 }
int main() {
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}
