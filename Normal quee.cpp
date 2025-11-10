#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define max 10

class quee
{
    int pront=0;
    int back=0;
    int arr[max];
    public:
void push(int val)
{
    arr[back]=val;
    back++;
}
void pop()
{
  pront++;
}
int top()
{
    cout<<arr[pront]<<endl;

}
void display()
{
    for(int i=pront;i<back;i++)
    {
        cout<<arr[i]<<endl;
    }
}
};

int main()
 {
  
quee q1;
q1.push(100);
q1.push(20);
q1.push(10);
q1.top();
//q1.display();
cout<<endl;
q1.pop();
//q1.display();
q1.top();
}
