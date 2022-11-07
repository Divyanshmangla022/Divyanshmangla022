#include <iostream>

//#include"remove min.h"
using namespace std;

void heapSort(int* pq,int n)
{
    if(n==0||n==1)
        return;

    for(int i=1;i<n;i++)
    {
        int childIndex=i;


        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }

    }

    for(int i=n-1;i>=0;i--)
    {
         int ans=pq[0];
        pq[0]=pq[i];

        int parentIndex = 0;
        while (parentIndex<i)
        {
            int leftChildIndex = 2 * parentIndex + 1;
            int rightChildIndex = 2 * parentIndex + 2;
            int minIndex;
            if (leftChildIndex < i && rightChildIndex <i)
                minIndex = (pq[leftChildIndex] <= pq[rightChildIndex]) ? leftChildIndex : rightChildIndex;
            else if (leftChildIndex < i)
                minIndex = leftChildIndex;
            else
                break;
            if (pq[minIndex] < pq[parentIndex])
            {
                int temp = pq[minIndex];
                pq[minIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else
                break;
            parentIndex = minIndex;
        }

          pq[i]=ans;


    }

return ;


}


int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    }

    delete[] input;
}
