#include <iostream>
using namespace std;
#include<vector>
#include<iterator>
#include<algorithm>
#include<queue>

/*
    if(n==0)
        return;
    vector<int> A;
    int*arr2=new int[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        A.push_back(arr[i]);
        sort(A.begin(),A.end());
        if(A.size()%2!=0)
        {
            arr2[k]=A[A.size()/2];
            k++;
        }
    else
    {
        arr2[k]=(A[A.size()/2]+A[(A.size()/2)-1])/2;
        k++;
    }

    }
   for(int i=0;i<k;i++)
   {
       cout<<arr2[i]<<" ";
   }
    return ;
*/

#include <queue>
void findMedian(int *arr, int n)
{

    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            maxheap.push(arr[i]);
        }
        else
        {
            if(maxheap.top()>arr[i])
            {
                maxheap.push(arr[i]);
                if(maxheap.size()-minheap.size()>1)
                {
                    minheap.push(maxheap.top());
                    maxheap.pop();
                }
            }
            else
            {
                minheap.push(arr[i]);
                if(minheap.size()-maxheap.size()>1)
                {
                    maxheap.push(minheap.top());
                    minheap.pop();
                }
            }



        }
         if((i+1)%2==0)
            {
                cout<<(maxheap.top()+minheap.top())/2<<" ";
            }
            else
            {
                if(maxheap.size()>minheap.size())
                    cout<<maxheap.top()<<" ";
                else
                { cout<<minheap.top()<<" ";
                }
            }

    }


}


int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    findMedian(arr,n);

    delete[] arr;
}
