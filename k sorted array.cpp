#include<iostream>
using namespace std;
#include<vector>
#include<queue>
void ksortedarray(int *arr,int n,int k)
{
    priority_queue<int> pq;

    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);

    }
    int j=0;
    for(int i=k;i<n;i++)
    {
        arr[j]=pq.top();
        pq.pop();
        j++;
        pq.push(arr[i]);

    }

    while(!pq.empty())
    {
        arr[j]=pq.top();
        pq.pop();
        j++;
    }



}

int main()
{
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    ksortedarray(arr,n,k);
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
}
