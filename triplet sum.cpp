#include <iostream>
#include <algorithm>
using namespace std;
int tripletSum(int *arr,int n,int x)
{
    int counti=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((arr[i]+arr[j]+arr[k])==x)
                {
                    counti++;
                }
            }
        }
    }
    return counti;
}


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int siz;
		int x;
		cin >> siz;


		int *input = new int[siz];

		for (int i = 0; i < siz; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, siz, x) << endl;

		delete[] input;
	}

	return 0;
}
