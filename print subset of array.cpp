#include<iostream>
using namespace std;

void printsubsetofarray(int arr[],int n,int output[],int m)
{
    if(n==0)
    {
        for(int i=0;i<m;i++)
        cout<<output[i]<<" ";
        cout<<endl;
       return;
    }
int no[1000]={0};
for(int i=0;i<m;i++)
{
    no[i]=output[i];
}
no[m]=arr[0];

    printsubsetofarray(arr+1,n-1,no,m+1);


    printsubsetofarray(arr+1,n-1,output,m+1);


}
 int main()
 {
     int n;
     cin>>n;
     int arr[199];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int m=0;
     int output[100]={0};
     printsubsetofarray(arr,n,output,m);

 }
