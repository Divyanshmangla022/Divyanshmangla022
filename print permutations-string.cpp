#include <iostream>
#include <string>
using namespace std;
void printPermutations(string input,string output)
{
    if(input[0]=='\0')
    {
        cout<<output<<endl;
        return;
    }

    for(int i=0;i<input.size();i++)
    {
         string smalloutput=input.substr(0,i)+input.substr(i+1);

        printPermutations(smalloutput,input[i]+output);
    }

}

int main() {
    string input;
    cin >> input;
    string output;
    printPermutations(input,output);
    return 0;
}
