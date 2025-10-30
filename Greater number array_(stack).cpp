#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> arr={6,8,0,1,3};


 vector<int>v(arr.size(),0); 
  stack<int>st;
 for(int i=arr.size()-1;i>=0;i--)
 {
    while(st.size()>0 && st.top()<=arr[i])
    {
        st.pop();
    }
    if(st.empty())
    {
        v[i]=-1;
    }
    else 
    {
    v[i]=st.top();
 }
 st.push(arr[i]);
}
for(int  val:v)
{
    cout<<val<<" ";
}
cout<<endl;
    return 0;
}
