#include <iostream>
#include<algorithm>
#include<iterator>
using namespace std;
int maximumProfit(int budget[], int n) {
    sort(budget,budget+n);
    int *arr=new int[n];
    int sum;
    for(int i=0;i<n;i++)
    {
    sum=budget[i]*(n-i);
    arr[i]=sum;
    }
    int maxi=arr[0];
    for(int i=1;i<n;i++)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
        }
    }

    delete [] arr;
    return maxi;


}
int main() {
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];

    cout << maximumProfit(input, n) << endl;

}
