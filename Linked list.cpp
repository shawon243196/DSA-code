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






#include<iostream>
using namespace std;
struct Node
{
   int data;
   Node* link;
};

Node* head = nullptr; // Initialize head to nullptr

void insert(int val)
{
   if (head == nullptr) // If list is empty
   {
      head = new Node;
      head->data = val;
      head->link = nullptr;
   }
   else // If list has at least one node
   {
      Node* ptr = head;
      while(ptr->link != nullptr) // Traverse to the last node
      {
         ptr = ptr->link;
      }
      Node* nn = new Node;
      nn->data = val;
      nn->link = nullptr;
      ptr->link = nn;
   }
}
void display()
{
   if (head == nullptr) // Check if list is empty
   {
      cout << "List is empty" << endl;
      return;
   }
   
   Node* ptr = head;
   while(ptr != nullptr) // Traverse until the end
   {
      cout << ptr->data << " ";
      ptr = ptr->link;
   }
   cout << endl;
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
display();
  

    return 0;
}
