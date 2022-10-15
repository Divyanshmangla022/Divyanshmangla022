#include<iostream>
using namespace std;
int main(){
int i,j,n;
i=1;
cin>>n;
while(i<=n){
j=1;
while(j<=n-i){
cout<<" ";
j++;
}
j=1;
while(j<=i){
cout<<j;
j++;
}
j=i-1;
while(j>=1){
cout<<j;
j--;
}
cout<<endl;
i++;
}

}
