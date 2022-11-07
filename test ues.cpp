#include<iostream>
#include<string>
using namespace std;
int main()
{

    string s;
    cin>>s;
    string goal;
    cin>>goal;
    string test;
    test=s+s;
    bool check=false;
    if(s.length()==goal.length())
    {
        int counti=0;

        for(int i=0;i<test.length();i++)
        {
          if(test[i]==goal[counti])
          {
              counti++;
          }
          else if(counti==goal.length())
          {


            check=true;
            break;
          }
          else
          {
            counti=0;
          }

    }
    }
    else
    {
        check=false;
    }
    if(check)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }


}
