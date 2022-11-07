#include <iostream>
#include <algorithm>
#include<iterator>
using namespace std;
void intersection(int *arr1,int* arr2,int n,int m)
{
    int *arr3=new int[n+m];
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int i=0;
    int j=0;
    int k=0;
    while(i<n&&j<m)
    {
        if(arr1[i]==arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            j++;
            k++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<arr3[i]<<" ";
    }
    delete [] arr3;

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);

		delete[] input1;
		delete[] input2;

		cout << endl;
	}

	return 0;
}
