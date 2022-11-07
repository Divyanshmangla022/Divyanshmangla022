#include <iostream>
using namespace std;
#include<unordered_map>
int pairSum(int *arr, int n) {

 unordered_map<int,int> p;


        for(int i=0;i<n;i++)
        {
            if(p.count(arr[i])>0)
            {
                p[arr[i]]+=1;
                continue;
            }
            p[arr[i]]=1;

        }
        int counti=0;
        for(int i=0;i<n;i++)
        {
           if(arr[i]<0)
           {
               if(p.count(-arr[i])>0)
               {

                   counti+=p[arr[i]]*p[-arr[i]];
                   p.erase(arr[i]);
                   p.erase(-arr[i]);

               }
           }



        }
        if(p.count(0)>0)
        {
            counti+=(p[0]*(p[0]-1))/2;
        }


        return counti;


}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}
