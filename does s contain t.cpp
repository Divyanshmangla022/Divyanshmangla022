#include<iostream>
using namespace std;
bool checksequenece(char large[] , char*small)
{
int i=0;
int j=0;
while(large[i]!='\0'&&small[j]!='\0')
{
    if(large[i]==small[j])
    {
        i++;
        j++;

    }
    else
    {
        i++;

    }
}
if(small[j]!='\0')
{
    return false;
}
else
{
    return true;
}


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
