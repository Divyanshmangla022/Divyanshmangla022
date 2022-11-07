#include <iostream>
#include<math.h>

using namespace std;
int findDuplicate(int input[], int n)
{
    int sum=0;
 for(int i=0;i<n;i++)

 {
     sum+=input[i];
 }
 return sum-((n-2)*(n-1)/2);
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}


