#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
     i=2;

    if(n==2){
        cout<<n<<endl;
    }
    while(i<n) {
              bool prime=false;
        j=2;
        while(j<i){
            if(i%j==0){

     prime=true;
     break;

            }
            j++;
        }
        if(prime){}
        else{
                cout<<i<<endl;
        }

        i++;
    }
}
