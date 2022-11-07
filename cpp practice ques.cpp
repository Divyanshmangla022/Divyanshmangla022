#include<iostream>
#include<math.h>
using namespace std;


bool checkarmstrong(int n)
{
int k=0;
int m=n;
while(m!=0)
{
    m=m/10;
    k++;
}
m=n;
int j=0;
long int sum=0;

  while(m!=0)
  {
      j=m%10;
      sum=sum+pow(j,k);

      m=m/10;
   }
   if(sum==n)
    return true;
   else
    return false;


}
int main()
{
    int n;
    cin>>n;
  bool check=checkarmstrong(n);

  if(check)
    cout<<"true"<<endl;
  else
    cout<<"false"<<endl;
}
