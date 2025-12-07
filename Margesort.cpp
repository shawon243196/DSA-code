#include <bits/stdc++.h>
using namespace std;
int arr[10000];
int n;
void merge (int l,int m,int r)
{
    int a[1000],b[1000],p=0,q=0;
    for(int i=l;i<=m;i++,p++)
    {
        a[p]=arr[i];
    }
    for(int i=m+1;i<=r;i++,q++)
    {
        b[q]=arr[i];
    }
    a[p]=INT_MAX;
    b[q]=INT_MAX;
    for(int i=l,ia=0,ib=0;i<=r;i++)
    {
        if(a[ia]<=b[ib])
        {
            arr[i]=a[ia];
            ia++;
        }
        else
        {
            arr[i]=b[ib];
            ib++;
        }
    }

}
void ms(int i,int j)
{
    if(i>=j)return ;
   int m=(i+j)/2;
    ms(i,m);
    ms(m+1,j);
    merge(i,m,j);
}

void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ms(0,n-1);
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
