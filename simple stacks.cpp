
#include <iostream>
#include<bits/stdc++.h>
// #include<stack>
 using namespace std;
#define mxsz 10
class strack{
    public:
int arr[mxsz],toppos=-1;

void push(int val)
{//overflow
    if(toppos==mxsz-1)
    {
        cout<<"overflow"<<endl;
        return;
    }
    toppos++;
    arr[toppos]=val;
}
void pop()
{
    //delete arr[toppos];
    //underflow
    if(toppos==-1)
    {
        cout<<"underflow"<<endl;
        return;
    }
    toppos--;
    return;
    
}
int top()
{
    return arr[toppos];

}
int size()
{
    return toppos+1;
}
};
int main()
{
//    stack<int>st;
//    int x;
//    cin>>x;
//    for(int i=0;i<x;i++)
//    {
//    int n;cin>>n;
//    st.push(n);
//    }
//    cout<<st.size()<<endl;
//    cout<<st.top()<<endl;
//    st.pop();
//    cout<<st.top();

// stack<int>s1,s2;
// s1.push(10);
// s1.push(20);
// s1.push(30);
// s2=s1;
// while(s1.size()>0)//while(!s1.emptry())
// {
//     cout<<s1.top()<<" ";
//     s1.pop();
// }


// stack<string>st,st1;
// st.push("shawon");
// st.push("shahriar");
// st.push("sadman");
// st1=st;
// while(!st.empty())
// {
//     cout<<st.top()<< " ";
//     st.pop();
// }


strack s1,s2;
s1.push(10);
s1.push(20);
s1.push(25);

cout<<s1.top()<<endl;
cout<<s1.size()<<endl;
s1.pop();
cout<<s1.top()<<endl;
cout<<s1.size()<<endl;

s2.push(101);
s2.push(201);
s2.push(250);

cout<<s2.top()<<endl;
cout<<s2.size()<<endl;
s2.pop();
cout<<s2.top()<<endl;
cout<<s2.size()<<endl;
    return 0;
}
