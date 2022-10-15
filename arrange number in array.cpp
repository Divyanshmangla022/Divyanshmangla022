#include<iostream>
using namespace std;
void printarray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}

int main(){
int arr[100];
int m;
cin>>m;
int n;
for(int i=1;i<=m;i++){
 int n;
 cin>>n;
 int p;

 p=n/2;

 for(int i=0;i<n;i++ ){

    if(i<(n+1)/2){
        arr[i]=2*i+1;

    }
    else{

        arr[i]=2*p;
    p--;
    }
}
printarray(arr,n);
cout<<endl;

}

}
