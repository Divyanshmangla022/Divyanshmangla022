#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    v[3]=445;
    v[4]=33;
    v.push_back(40);
    v.push_back(50);
    cout<<v[3]<<endl;
     cout<<v[4]<<endl;

     cout<<v.at(2)<<endl;
}
