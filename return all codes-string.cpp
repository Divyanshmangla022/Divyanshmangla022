#include <iostream>
using namespace std;



int getCodes(string input,string output[])
{
    if(input[0]=='\0')
    {
        output[0]=" ";
        return 1;
    }
    int first=input[0]-'0';
    char firchar=first+'a'-1;
    string so1[300];
    string so2[300];
    int size1=getCodes(input.substr(1),so1);
    int size2=0;
    int second=first*10+input[1]-'0';
     char sechar=second+'a'-1;
    if(input[1]!='\0')
    {
        if(second>=10&&second<=26)
        {

            size2=getCodes(input.substr(2),so2);
        }

    }
    int k=0;
    for(int i=0;i<size1;i++)
    {
        output[k]=firchar+so1[i];
        k++;
    }
    for(int i=0;i<size2;i++)
    {
        output[k]=sechar+so2[i];
        k++;
    }
    return k;







}

int main(){
    string input;
    cin >> input;

    string output[10000];
    int counti = getCodes(input, output);
    for(int i = 0;  i<counti&&i < 100000; i++)
        cout << output[i] << endl;
    return 0;
}
