#include <iostream>
using namespace std;

#include<unordered_map>
int getPairsWithDifferenceK(int *arr, int n, int k) {

unordered_map<int,int> ourmap;
int counti=0;



for(int i=0;i<n;i++)
{
    if(ourmap.count(arr[i])==0)
    {
        ourmap[arr[i]]=1;
        continue;
    }
    ourmap[arr[i]]+=1;
}

if(k==0)
{
    for(int i=0;i<n;i++)
    {
        if(ourmap.count(arr[i])>0)
        {
            counti+=(ourmap[arr[i]]*(ourmap[arr[i]]-1))/2;
            ourmap.erase(arr[i]);
        }

    }
    return counti;


}
for(int i=0;i<n;i++)
{
        if(ourmap.count(arr[i])>0&&ourmap.count(arr[i]+k)>0)
        {

        counti+=ourmap[arr[i]]*ourmap[arr[i]+k];
        ourmap.erase(arr[i]);

        }


}
return counti;




 }





int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k);

    delete[] input;
}
