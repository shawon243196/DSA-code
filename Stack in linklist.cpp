#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack
{
   struct Node
   {
    int data;
    Node*next;
   };
   Node*head=nullptr;
   int size=0;
   public:
   void push(int val)
   {
    size++;
    Node*nn=new Node;
    nn->data=val;
    nn->next=head;
    head=nn;

   }
   void pop()
   {
    if(head==nullptr)
    {
        cout<<"anderflow"<<endl;
        return;
    }
    Node*temp=head;
    head=head->next;
    delete temp;
   }
   void top()
   {
       cout<< head->data;
   }
   int SIZE()
   {
    return size;
   }
   void display()
   {
    Node*ptr=head;
    while(ptr!=nullptr)
    {
       
        cout<<ptr->data<<endl;
         ptr=ptr->next;
    }
   }
};

int main()
 {
    Stack s1,s2;
    s1.push(10);
    s1.push(20);
    s1.push(100);
   // s1.display();
   s1.top();
    s1.pop();
    
    cout<<endl;
   // s1.display();
   s1.top();


}
