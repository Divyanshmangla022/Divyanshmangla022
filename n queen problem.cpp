#include<bits/stdc++.h>
using namespace std;
#include<vector>

bool issafer(vector<vector<int>> output,int row,int col)
{
    int n=output.size();
    for(int i=row-1;i>=0;i--)
    {
        if(output[i][col]==1)
            return false;
    }
    for(int i=row+1;i<n;i++)
    {
        if(output[i][col]==1)
        {
            return false;
        }
    }
    for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--)
    {
        if(output[i][j]==1)
            return false;
    }
    for(int i=row+1, j=col+1;i<n&&j<n;i++,j++)
    {
        if(output[i][j]==1)
            return false;
    }
    for(int i=row+1,j=col-1;i<n&&j>=0;i++,j--)
    {
        if(output[i][j]==1)
            return false;
    }
    for(int i=row-1, j=col+1;i>=0&&j<n;i--,j++)
    {
        if(output[i][j]==1)
            return false;
    }
    return true;









}

void nqueen(vector<vector<int>> output,int row,int n)
{

    if(row==n)
    {
        int n=output.size();
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<output[i].size();j++)
           {
               cout<<output[i][j]<<" ";
           }
       }
    cout<<endl;
    }


    for(int i=0;i<n;i++)
    {
        if(issafer(output,row,i))
        {
            output[row][i]=1;
            nqueen(output,row+1,n);
            output[row][i]=0;


        }
    }
    return ;



}

int main(){

   int n;
   cin>>n;
   vector<vector<int>> output(n,vector<int>(n,0));


   nqueen(output,0,n);






    return 0;
}
