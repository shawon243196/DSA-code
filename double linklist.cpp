#include<bits/stdc++.h>
using namespace std;

class linklist
{
struct Node
{
    int data;
    Node*prev;
    Node*next;
    Node(int data)
    {
        this->data=data;
        prev=0;
        next=0;
    }
    Node(int data,Node*pr,Node*n)
    {
        this->data=data;
        prev=pr;
        next=n;
    }
};
Node*head=nullptr;
void insertfrist(int val)
{   
    if(head==nullptr)
    {
        head=new Node(val);
        return;
    }
    Node*nn=new Node(val,0,head);
    head->prev=nn;
    head=nn;
}
void insertlast(int val)
{
    if(head == nullptr)
    {
       insertfrist(val);
        return;
    }
    Node* ptr = head;
    while(ptr->next != nullptr)
    {
        ptr = ptr->next;
    }
    Node* nn = new Node(val, ptr, nullptr);
    ptr->next = nn;
}

int size=0;
public:
void insert(int val,int pos)
{
    size++;
    if(pos==1)
    {
        insertfrist(val);
        return;
    }
    else if(pos==size)
    {
        insertlast(val);
        return;
    }
    Node*ptr=head;
    for(int i=0;i<pos-2;i++)
    {
        ptr=ptr->next;
    }
    Node*nn=new Node(val,ptr,ptr->next);
    if(ptr->next!=nullptr)
    {
        ptr->next->prev=nn;
    }
    ptr->next=nn;
}
void Del(int pos)
{
    if(head==nullptr||pos<1||pos>size)
    {
        cout<<"Delete not posible"<<endl;
        return;
    }
    if(pos==1)
    {
        Node*temp=head;
        head=head->next;
        if(head!=nullptr)
        {
            head->prev=nullptr;
        }
        delete temp;
        size--;
    }
    Node*ptr=head;
    for(int i=0;i<pos-1;i++)
    {
        ptr=ptr->next;
    }
    if(ptr->next!=nullptr)
    {
        ptr->next->prev=ptr->prev;

    }
    if(ptr->prev!=nullptr)
    {
        ptr->prev->next=ptr->next;
    }
    delete ptr;
    size--;
}
void display()
{
    Node*ptr=head;
    while(ptr!=0)
    {
       
        cout<<ptr->data<<"   ";
         ptr=ptr->next;
    }cout<<endl;
}
};

int  main()
{
linklist l1;
l1.insert(10,1);
l1.insert(20,2);
l1.insert(30,1);
l1.insert(50,2);
l1.insert(100,3);
l1.display();
l1.Del(2);
l1.display();
}
