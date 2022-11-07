#include <iostream>
using namespace std;
void rotate(int arr[],int x,int siz)
{
    for(int i=0;i<x;i++)
    {
        int temp=arr[0];
        for(int j=0;j<siz-1;j++)
       {
          arr[j]=arr[j+1];
       }

        arr[siz-1]=temp;
    }



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
