#include <iostream>
using namespace std;
void printAllPossibleCodes(string input,string output)
{
    if(input[0]=='\0')
    {
     cout<<output<<endl;
     return;
    }
    int first=input[0]-'0';
    char firstchar=first+'a'-1;
    printAllPossibleCodes(input.substr(1),output+firstchar);
    int second=first*10+input[1]-'0';
    char sechar=second+'a'-1;
    if(input[1]!='\0')
    {
        if(second>=10&&second<=26)
            printAllPossibleCodes(input.substr(2),output+sechar);
    }


}

int main()
{
    string input;
    cin >> input;
    string output;

    printAllPossibleCodes(input,output);
    return 0;
}
