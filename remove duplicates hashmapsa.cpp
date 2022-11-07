#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> removeduplicates(int* arr,int n)
{
    unordered_map<int,bool> seen;
    vector<int> output;
    for(int i=0;i<n;i++)
    {
        if(seen.count(arr[i])>0)
        {
            continue;
        }
        seen[arr[i]]=true;
        output.push_back(arr[i]);
    }
    return output;
}
int main()
{
    int arr[]={1,2,3,2,2,3,4,4,3,2,3,10,3,4,9,8,5};

    vector<int> output=removeduplicates(arr,17);
    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<endl;
    }
}
