#include <iostream>
#include<math.h>
using namespace std;

    int subset(int input[],int n,int output[][100])
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

bool splitArray(int *arr, int n)
{
    int sum=0;
for(int i=0;i<n;i++)
{
    sum+=arr[i];
}
if(sum%2!=0)
{
    return false;
}
else
{


  int *arr1=new int[n];
  int *arr2=new int[n];
  int *arr3=new int[n];

  int k=0;
  int k3=0;
  int k2=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%5==0)
        {
            arr1[k]=arr[i];
            k++;
        }
        else if(arr[i]%3==0)
        {
            arr2[k2]=arr[i];
            k2++;
        }
        else
        {
            arr3[k3]=arr[i];
            k3++;

        }

    }

int sum1=0;
for(int i=0;i<k;i++)
{
    sum1+=arr1[i];
}
int sum2=0;
for(int i=0;i<k2;i++)
{
    sum2+=arr2[i];
}
int subsetarr[100][100];
int siz=subset(arr3,k3,subsetarr);
int *sum=new int[siz];
int sum3=0;
for(int i=0;i<k3;i++)
{
   sum3+=arr3[i];
}
int i=0;
for(;i<siz;i++)
{
    int add=0;
    for(int j=0;j<k3;j++)
    {
        add=add+subsetarr[i][j];
    }
    sum[i]=add;

}
delete [] arr1;
delete [] arr2;
delete [] arr3;



for(int j=0;j<siz;j++)
{
    if((sum[j]+sum1)==(sum2+sum3-sum[j]))
    {
        return true;
    }
    }
}

return false;







}




int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }


	return 0;

}
