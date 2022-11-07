#include<iostream>
using namespace std;
#define N 9
bool findemptylocation(int grid[N][N],int &row,int&col)
{
    for(int i=0;i<N;i++)
    {
     for(int j=0;j<N;j++)
     {
         if(grid[i][j]==0)
         {
             row=i;
             col=j;
             return true;
         }
     }
    }
    return false;


}
bool issafeinrow(int grid[N][N],int row,int num)
{
    for(int i=0;i<N;i++)
    {
        if(grid[row][i]==num)
            return false;
    }
    return true;


}

bool issafeincolumn(int grid[N][N],int col,int num)
{
     for(int i=0;i<N;i++)
    {
        if(grid[i][col]==num)
            return false;
    }
    return true;


}
bool issafeingrid(int grid[N][N],int row,int col,int num)
{
    int rowfactor=row-(row%3);
    int colfactor=col-(col%3);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(grid[i+rowfactor][j+colfactor]==num)
                return false;
        }
    }
    return true;
}
bool issafe(int grid[N][N],int row,int col,int num)
{
    if(issafeincolumn(grid,col,num)&&issafeinrow(grid,row,num)&&issafeingrid(grid,row,col,num))
        return true;
    else
        return false;
}

    bool sudokusolver(int grid[N][N])
    {
     int row;
    int col;
    if(!findemptylocation(grid,row,col))
        return true;

     for(int i=1;i<=9;i++)
     {
         if(issafe(grid,row,col,i))
         {
             grid[row][col]=i;
             if(sudokusolver(grid))
             {
                 return true;

             }
             grid[row][col]=0;

         }
    }
    return false;

    }






int main()
{
    int grid[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>grid[i][j];
        }
    }

    bool check=sudokusolver(grid);

    if(check)
    {


        for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    }


}
