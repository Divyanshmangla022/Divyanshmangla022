#include<iostream>
using namespace std;
#include<vector>

int subset(int input[],int n,int output[][20])
{
    if(n==0)
    {
        output[0][0]=0;
        return 1;
    }
    int smalloutput=subset(input+1,n-1,output);
    for(int i=0;i<smalloutput;i++)
    {
        for(int j=0;j<n;j++)
        {
            output[i+smalloutput][j+1]=output[i][j];
        }
    }

    for(int i=0;i<smalloutput;i++)
    {
        output[i+smalloutput][0]=input[0];
    }
        return 2*smalloutput;
}

int main()
{
    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int output[1000][20]={0};
    int siz=subset(input,n,output);
    for(int i=0;i<siz;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }


}
