#include <iostream>
#include <algorithm>
using namespace std;
int pairSum(int *input,int n,int x)
{
    int counti=0;
    int i=0;
    int j=1;
    while(i<n&&j<n)

    {
        for(int j=i+1;j<n;j++)
       {

        if(x==input[i]+input[j])
            counti++;
        }
        i++;

}
return counti;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
