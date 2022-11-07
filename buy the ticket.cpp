#include <iostream>
#include <vector>
using namespace std;
#include<queue>

int buyTicket(int *arr, int n, int k) {
   priority_queue<int> pq;
   queue<int> q;
   for(int i=0;i<n;i++)
   {
       pq.push(arr[i]);
       q.push(arr[i]);
   }
   int counti=0;
   while(!q.empty())
   {
       if(q.front()<pq.top())
       {
           k=(k-1+n)%n;
           int temp=q.front();
           q.pop();
           q.push(temp);
       }
       else
       {
           if(k==0)
           {
               counti++;
               return counti;

           }
           else
           {
               pq.pop();
               q.pop();
               k=(k-1+n)%n;
               counti++;
           }
       }

   }
   return 0;


}
int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << buyTicket(arr, n, k);

    delete[] arr;
}
