/*#include<iostream>
using namespace std;
#include<unordered_map>
#include<string>
int main()
{
    unordered_map<string,int> ourmap;
    //insert
    pair<string,int> q("abc",1);
    ourmap.insert(q);
    ourmap["def"]=3;
    ourmap["ghi"]=4;
    ourmap["jkl"]=5;
    ourmap["mno"]=6;
    ourmap["pqr"]=7;
    ourmap["stu"]=8;

    unordered_map<string,int>::iterator it=ourmap.begin();//pair of key and values adddress

    while(it!=ourmap.end())
    {
        cout<<"key: "<<it->first<<"  value:  "<<it->second<<endl;
        it++;
    }
}
*/
#include <iostream>
#include <string>
#include<unordered_map>
using namespace std;
string uniqueChar(string str) {
	unordered_map<char,int> ourmap;

	string output;
	int k=0;
	for(int i=0;i<str.size();i++)
    {
        if(ourmap.count(str[i])>0)
        {
            continue;
        }
        ourmap[str[i]]=1;
        output[k]=str[i];
        k++;

    }
    return output;
}

int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}
