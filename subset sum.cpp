#include<iostream>
using namespace std;
#include<vector>
#include<math.h>
int subsetsum(int* arr,int n,int index,int k)
{
    if(index==n)
    {
        if(k==0)
        {
            return 1;

        }
        else
            return 0;
    }

    int counti=0;
    if(arr[0]<=k)
    {
        counti+=subsetsum(arr,n,index+1,k-arr[0]);
    }
    counti+=subsetsum(arr,n,index+1,k);


    return counti;





}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int *arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<subsetsum(arr,n,0,k)<<endl;

    }
}
