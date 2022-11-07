#include <iostream>
#include <string>

using namespace std;

int returnPermutations(string input,string output[])
{
    if(input[0]=='\0')
    {
        output[0]="";
        return 1;
    }
    string so[1000];


    int k=0;
   for(int i=0;i<input.size();i++)

{

    int counti=returnPermutations(input.substr(0,i)+input.substr(i+1),so);
    for(int j=0;j<counti;j++)
    {
        output[k]=input[i]+so[j];
    k++;
    }

}
return k;


}

int main(){
    string input;
    cin >> input;
    string output[10000];
    int counti= returnPermutations(input, output);
    for(int i = 0; i < counti && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
