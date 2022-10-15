#include<iostream>
#include<climits>
using namespace std;

void intersection(int arr1[],int arr2[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=INT_MIN;
                break;
            }

        }
    }
}



int main()
{
    int arr1[100];
    int arr2[100];
    int n,m;
    cin>>n;

  for(int i=0;i<n;i++){
    cin>>arr1[i];
  }
  cout<<endl;
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>arr2[i];
  }
  cout<<endl;
  cout<<"the intersection of the arrays are: "<<endl;
  intersection(arr1,arr2,n,m);



}
