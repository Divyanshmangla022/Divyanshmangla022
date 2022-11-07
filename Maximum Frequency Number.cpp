#include <iostream>
using namespace std;
#include<unordered_map>

int highestFrequency(int* arr,int n)
{
    unordered_map<int,int> p;
    int maxi=0;
    int value=0;
    for(int i=n-1;i>=0;i--)
    {
     if(p.count(arr[i])==0)
     {p[arr[i]]=1;}
        else
        {
            p[arr[i]]+=1;
            if(maxi<=p[arr[i]])
            {
                maxi=p[arr[i]];
                value=i;
            }


        }

    }
    return arr[value];

}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}
