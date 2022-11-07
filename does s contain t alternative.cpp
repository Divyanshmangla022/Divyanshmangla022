#include<iostream>
using namespace std;
bool checksequenece(char large[] , char*small)
{
if(large[0]=='\0')

{
    if(small[0]=='\0')
    return true;
else
{
    return false;
}
}
bool smalloutput;
if(large[0]==small[0])
{
    smalloutput=checksequenece(large+1,small+1);

}
else
{
    smalloutput=checksequenece(large+1,small);

}
return smalloutput;



}

int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}
