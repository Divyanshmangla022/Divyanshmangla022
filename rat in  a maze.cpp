#include<bits/stdc++.h>
using namespace std;

void prinfunction(int**output,int n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<output[i][j]<<" ";
            }
        }
        cout<<endl;
        return;

}
void ratinamaze(int**arr,int n,int**output,int row,int col)
{
    if(row==n-1&&col==n-1)
    {
        output[n-1][n-1]=1;
       prinfunction(output,n);
       output[n-1][n-1]=0;
        cout<<endl;
    }

    if(row>=n||row<0||col>=n||col<0||arr[row][col]==0||output[row][col]==1)
    {
        return;
    }

    output[row][col]=1;
    ratinamaze(arr,n,output,row-1,col);
    ratinamaze(arr,n,output,row+1,col);
    ratinamaze(arr,n,output,row,col-1);
    ratinamaze(arr,n,output,row,col+1);
    output[row][col]=0;

}













int main() {


	int n;
	cin>>n;
	int**arr=new int*[n];
	for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int**output=new int*[n];
	for(int i=0;i<n;i++)
    {
        output[i]=new int[n];
    }

    ratinamaze(arr,n,output,0,0);

}
