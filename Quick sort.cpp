#include <bits/stdc++.h>
using namespace std;
int arr[10000];
int n;
int partition(int l,int r)
{
    int i=l-1;
    int pivot =arr[r];
    for(int j=l;j<r;j++)
        if(arr[j]<pivot)

        swap(arr[j],arr[++i]);

        swap(arr[i+1],arr[r]);
        return i+1;
    
}
void qs(int i,int j)
{
    if(i>=j)return;
    int pi=partition(i,j);
    qs(i,pi-1);
    qs(pi+1,j);
}

void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     qs(0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
     

}
     int main()
         {
        solve();
            return 0;
}
