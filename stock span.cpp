#include <iostream>
using namespace std;
#include<stack>
int * stockSpan(int input[],int n)
{
    int*output=new int[n];
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        s.push(input[i]);
    }


    while(!s.empty())
    {
        int c=1;
        int temp=s.top();
      for(int i=s.size()-2;i>=0;i++)
      {
          if(temp>input[i])
          {
            c++;
          }
          else{
            break;
          }
      }
      output[s.size()-1]=c;
      s.pop();

    }
    return output;


  /*int*output=new int[n] ;
  int k=0;
  for(int i=n-1;i>=0;i--)
  {
      int c=1;
      int temp=input[i];
      for(int j=i-1;j>=0;j--)
      {
          if(temp<=input[j])
          {
             break;
          }
          c++;


      }
      output[i]=c;
 }


  return output;
*/
}
int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}
