#include<iostream>
using namespace std;

int main()
{
 int arr[7]={5,7,6,3,2,9};
 int x=2,val=100;
 int n=6;
 for(int i=n;i>x;i--)
 {
 arr[i]=arr[i-1];
 }
 arr[x]=val;
 for(int i=0;i<=n;i++)
 {
    cout<<arr[i]<<"  ";
 }
    return 0;
}
