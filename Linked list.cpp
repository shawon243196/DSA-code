#include<iostream>
using namespace std;
struct Node
{
   int data;
   Node*link;
};
Node*head;
void insert(int val)
{
   if(head==0)
   {
      head=new Node;
      (*head).data=val;
      (*head).link=0;
   }
   else
   {
      Node*temp=new Node;
      (*temp).data=val;
      (*temp).link=0;
      Node*t=head;
      while((*t).link !=0)
      {
         t=(*t).link;
      }
      (*t).link=temp;

   }
}
void print()
{
   Node*t=head;
 do
   {
      cout<<(*t).data<<" ";
      t=(*t).link;
   }
     while((*t).link!=0);
     cout<<(*t).data<<endl;
}

int main()
{
int n,a;
cin>>n;
for(int i=0;i<n;i++)
{
   cin>>a;
   insert(a);
}
print();
  

    return 0;
}
