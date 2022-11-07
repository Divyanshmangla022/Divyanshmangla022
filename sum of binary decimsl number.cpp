#include<iostream>
using namespace std;
int count_and_merge(int *arr , int l ,int m ,int r);
int inversions(int *arr ,int l,  int r)
{
    int res = 0;
    if(l<r)
    {
        int mid = l+(r-l)/2;
        res +=inversions(arr,l,mid);
        res += inversions(arr, mid+1 , r);
        res += count_and_merge(arr, l , mid , r);
    }
    return res;
}
int count_and_merge(int *arr , int l ,int m ,int r)
{
    int n1 = m-l+1;
    int n2 = r-m;
    int left[n1];
    int right[n2];
    for(int i = 0; i<n1; i++)
    {
        left[i] = arr[l+i];
    }
    for(int i = 0; i<n2; i++)
    {
        right[i] = arr[m+1+i];
    }
     int i = 0;
    int j = 0;
    int k = l; int res = 0;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            res += (n1-i);
        }
        k++;
    }
    while(i<n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    return res;

}
int main()
{
    int n ;
    cout<<"enter the size of array :";
    cin>>n;
    int *arr = new int[n];
    cout<<"enter the values in array :"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"the inversions in the given array is "<<inversions(arr, 0 , n-1);
    return 0;
}
