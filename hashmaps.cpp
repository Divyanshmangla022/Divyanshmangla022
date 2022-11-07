#include<iostream>
using namespace std;
#include<unordered_map>
#include<string>
int main()
{
    unordered_map<string,int> ourmap;
    //insert
    pair<string,int> q("abc",1);
    ourmap.insert(q);
    ourmap["def"]=2;
    cout<<ourmap.at("abc")<<endl;
    cout<<ourmap["def"]<<endl;
    cout<<ourmap.size()<<endl;
    cout<<ourmap["ghi"]<<endl;
    cout<<ourmap.size()<<endl;
     if(ourmap.count("ghi")>0)
    {cout<<"is present"<<endl;

    }
    else
        cout<<"not present"<<endl;

    ourmap.erase("ghi");
    cout<<ourmap.size()<<endl;

    if(ourmap.count("ghi")>0)
    {cout<<"is present"<<endl;

    }
    else
        cout<<"not present"<<endl;


}
