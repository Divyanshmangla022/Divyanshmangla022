#include <iostream>
using namespace std;
void rotate(int arr[],int x,int siz)
{
   int *arr1=new int[x];
   int *arr2=new int[siz];
   for(int i=0;i<x;i++)
   {
       arr1[i]=arr[i];
   }
   int k=0;
   for(int i=x;i<siz;i++)
   {
       arr2[k]=arr[i];
       k++;
   }
   for(int i=0;i<k;i++)
   {
       arr[i]=arr2[i];
   }
   int m=0;
   for(int i=k;i<siz;i++)
   {
       arr[i]=arr1[m];
       m++;
   }
delete[] arr1;
delete [] arr2;



}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int siz;
		cin >> siz;

		int *input = new int[siz];

		for (int i = 0; i < siz; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, siz);

		for (int i = 0; i < siz; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}
