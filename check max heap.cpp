#include <iostream>
using namespace std;

bool isMaxHeap(int*arr,int n)
{



int parentIndex=0;
int leftIndex=2*parentIndex+1;
int rightIndex=2*parentIndex+2;

while(2*parentIndex+1<n)
{
     leftIndex=2*parentIndex+1;
rightIndex=2*parentIndex+2;
if(arr[parentIndex]<arr[leftIndex]||arr[parentIndex]<arr[rightIndex])
{
    return false;

}

parentIndex++;

}
return true;

}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}
