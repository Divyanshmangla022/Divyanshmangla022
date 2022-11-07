#include <iostream>
#include <vector>
using namespace std;
#include<iterator>
#include<algorithm>
#include<unordered_map>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {

    int* temp=new int[n];
    pair<int,int> indexes;
    unordered_map<int,int> ourmap;


    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }
    sort(temp,temp+n);

    int maxi=0;
    for(int i=0;i<n-1;i++)
    {

        if(temp[i+1]!=1+temp[i])
        {
            ourmap[i-maxi]=maxi+1;
            maxi=0;

        }
        else
        {
            maxi++;
        }

    }
    if(maxi!=0)
    {
        ourmap[n-maxi-1]=maxi+1;
    }
    else
    {
        ourmap[n-1]=1;
    }
 int max=0;
 int st=0;
 int ed=0;
    unordered_map<int,int>::iterator it=ourmap.begin();//pair of key and values adddress

    while(it!=ourmap.end())
    {
        if(it->second>max)
        {
            max=it->second;
            st=it->first;
            ed=st+it->second-1;
        }
        else if(it->second==max)
        {
            int st1=0;
            int st2=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==temp[st])
                {
                    st1=i;

                }
                 if(arr[i]==temp[it->first])
                {
                    st2=i;

                }
            }
            if(st1>st2)
            {
            max=it->second;
            st=it->first;
            ed=st+it->second-1;

            }


        }
        it++;
    }

    ans.push_back(temp[st]);
    ans.push_back(temp[ed]);
    return ans;



}

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);

    for (auto i = ans.begin(); i != ans.end(); ++i)
        cout << *i << " ";

    delete[] arr;
}
