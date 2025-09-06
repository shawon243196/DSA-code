#include<iostream>
using namespace std;

int main()
{
 int arr[9]={11,23,35,47,56,67,72,83,98};
 int x=72;
 int l=0,r=8;
 int m;
 while(l<=r)
 {
   m=(l+r)/2;
if(arr[m]<x)
{
   l=m+1;
}
 if(arr[m]>x)
{
   r=m-1;
}
if(arr[m]==x)
{
   cout<<"pound INdex : "<<m+1<<endl;
   break;
}
 }

    return 0;
}
