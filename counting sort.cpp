#include <bits/stdc++.h>
using namespace std;

void countingsort()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int freq[11]={};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(int i=0;i<=10;i++)
    if(freq[i])
    for(int j=0;j<freq[i];j++)
        cout<<i<<" ";
    
}


     int main()
         {
         countingsort();
            return 0;
}
