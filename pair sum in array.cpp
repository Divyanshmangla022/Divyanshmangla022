#include <iostream>
#include <algorithm>

using namespace std;
int pairSum(int *input,int n,int x)
{
    sort(input,input+n);
    int st=0;
    int ed=n-1;
    int counti=0;
    while(st<ed)
    {
        if(input[st]+input[ed]<x)
        {
          st++;

        }
        else if(x<input[st]+input[ed])
        {
            ed--;
        }
        else{
          if(input[st]!=input[st+1]&&input[ed]!=input[ed-1])
         {
          counti++;
          st++;
          ed--;
         }
         else if(input[st]==input[st+1]&&input[ed]!=input[ed-1])
         {
           counti++;
           st++;
        }
        else if(input[st]!=input[st+1]&&input[ed]==input[ed-1])
        {
            counti++;
            ed--;
        }
        else
        {

          int temp1=input[st];
          int temp2=input[ed];
          int ci=0;
          int cj=0;
          int i=st;
          int j=ed;
          for(;input[i]==temp1;i++)
          {
              ci++;
          }
          for(;input[j]==temp2;j--)
          {
              cj++;
          }
          if(i<=j)
          {
           counti=counti+ci*cj;
          st=st+ci;
          ed=ed-cj;
          }
          else{
            int num=ed-st+1;
            counti=counti+num*(num-1)/2;
            return counti;

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
