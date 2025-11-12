#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define max 10

class priorityquee
{
struct Node
{
    int pq;
    int data;
    Node*next;
    Node(int p,int v)
    {
        pq=p;
        data=v;
        next=nullptr;
    }

};
Node*head=nullptr;
int sz=0;
public:
void push(int p,int v)
{
    sz++;
    Node*nn=new Node(p,v);
    if(head==nullptr || head->pq <p)
    {
     nn->next=head;
     head=nn;
     return;
    }
   
        Node*ptr=head;
        while(ptr->next!=nullptr &&ptr->next->pq>=p)
        {
            ptr=ptr->next;
        }
        nn->next=ptr->next;
        ptr->next=nn;
}
void pop()
{

    if(head==nullptr)
    {
        cout<<"underflow"<<endl;
        return;
    }
    sz--;
    Node*temp=head;
    head=head->next;
    delete temp;
}
void size()
{
    cout<<sz<<endl;
}
void display()
{
    Node*ptr=head;
    while(ptr)
    {
        
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
};

int main()
 {
    priorityquee q;
    
    q.push(10,100);
    q.push(20,52);
    q.push(10,120);
    q.push(20,62);
  

    q.display();
   

    

}
