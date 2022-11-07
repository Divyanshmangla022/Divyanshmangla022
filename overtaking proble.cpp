#include<iostream>
using namespace std;
int overtake(int *arr,int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    if(arr[i]>arr[j])
    {
        sum++;

    }
}
return sum;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum=overtake(arr,n);
    cout<<sum<<endl;

}
