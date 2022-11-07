#include<iostream>

using namespace std;

int summ(int* arr,int siz)
{
    int sum=0;
   for(int i=0;i<siz;i++)
   {
       sum+=arr[i];
   }

return sum;


}

int sum(int*arr,int siz)
{

    int temp1=summ(arr,siz);
    int temp=temp1;
    int arr1[siz]={0};
    int siz1=0;
    int j=0;
    int i=0;
    while(temp!=0)
    {
        j=temp%10;
        arr[i]=j;
        siz1++;
        i++;
        temp=temp/10;


    }
     if(siz1==1)
        return temp1;
     else
        sum(arr1,siz1);

        return 0;
    }



int main()
{
int i,l,*arr;
cin>>l;
arr=new int[l];
for(i=0;i<l;i++)
      {
      cin>>arr[i];
      }
cout<<sum(arr,l);
delete arr;
return 0;
}
