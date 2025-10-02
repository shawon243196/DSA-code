#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node*next;
};
Node*head=nullptr;
void print()
{
Node*ptr=head;
while(ptr!=0)
{
    cout<<ptr->data<<" ";
    ptr=ptr->next;
}
}
void insertfr(int val)
{
    Node*nn=new Node;
    nn->data=val;
    nn->next=head;
    head=nn;
}
void insertlast(int val)
{
    Node*p=head;
    Node*nn=new Node;
    nn->data=val;
    nn->next=0;
    if(head==0)
    {
        head=nn;
        return;
    }
    while(p->next!=0)
    {
        p=p->next;
    }
    p->next=nn;
}
void insert(int val,int pos)
{
    if(pos==1)
    {
     insertfr(val);
     return;
    }

    Node*nn=new Node;
    nn->data=val;
    nn->next=nullptr;

    Node*p=head;
    for(int i=1;i<pos-1 && p!=nullptr;i++)
    {
        p=p->next;
    }
       if (p == nullptr)
        {
        delete nn;
        return;
    }
    nn->next=p->next;
    p->next=nn;
    }


void delet(int pos)
{
    if(head==nullptr)
    return;

    if(pos==1)
    {
      Node*temp=head;
      head=head->next;
      delete temp;
      return;
    }
    Node*ptr=head;
    Node*prv;
    for(int i=0;i<pos-1;i++)
    {
        prv=ptr;
        ptr=ptr->next;
    }
    if(ptr==nullptr)
    {
        return;
    }
    prv->next=ptr->next;
    delete ptr;
}
int main() 
{
  
// Node a,b,c,d;
// a.data=23;
// b.data=32;
// c.data=45;
// d.data=56;

// a.next=&b;
// b.next=&c;
// c.next=&d;
// d.next=0;

//head=&a;
insertfr(10);
insertfr(100);
insertfr(20);
insertfr(200);

print();
cout<<endl;
insertlast(212);
print();cout<<endl;
insert(51,2);
print();
cout<<endl;
delet(4);
print();

insert(20,1);
print();
cout<<endl;
insert(220,2);
print();
delet(1);
cout<<endl;
print();
    return 0;
}


