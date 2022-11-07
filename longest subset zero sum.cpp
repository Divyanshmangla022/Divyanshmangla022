#include <iostream>
using namespace std;
#include<unordered_map>


int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {

  if(n==0)
    return 0;

int sum=0;
int maxi=0;
  unordered_map<int,int> summap;
  for(int i=0;i<n;i++)
  {

      sum+=arr[i];

      if(summap.count(sum)>0)
      {
          if(maxi<i-summap[sum])
          {
              maxi=i-summap[sum];//check for between array sum check
          }
          continue;

    }
      if(sum==0)
      {
          if(maxi<i+1)
          {
            maxi=i+1;// check if sum is 0 in the sum
          }

      }


      summap[sum]=i;

  }

    if(sum==0)
    {
        maxi=n;//check for the total sum is 0 or not
    }


  return maxi;



}

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << lengthOfLongestSubsetWithZeroSum(arr, size);

    delete[] arr;
}
