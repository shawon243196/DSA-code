#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define max 10
class circularquee
{
    int frnt=-1;
    int rear=-1;
int arr[max];
int size=0;
public:
// void push(int val)
// {
//     size++;
//        if(frnt==rear+1)
//     {
//         cout<<"overflow"<<endl;
//         return;
//     }
//     if(frnt == 0 && rear == max-1)
//     {
//         cout<<"overflow"<<endl;
//         return;
//     }
 
//     if( frnt == rear && frnt==-1 )
//     {
//        frnt=0;
//        rear=0;
//        arr[rear]=val;
//        return;
//     }
//     if(rear==max-1 && arr[0]==0)
//     {
//         rear=0;
//     }
//     rear++;
//     arr[rear]=val;
// }

   void push(int val) {
        if ((rear + 1) % max == frnt) {
            cout << "Overflow" << endl;
            return;
        }

        if (frnt == -1) {
            frnt = rear = 0;
        } else {
            rear = (rear + 1) % max;
        }

        arr[rear] = val;
    }
    void pop() {
        if (frnt == -1) {
            cout << "Underflow" << endl;
            return;
        }

        if (frnt == rear) {
            frnt = rear = -1;
        } else {
            frnt = (frnt + 1) % max;
        }
    }



// void pop()
// {
//     size--;
//     if( frnt==-1)
//     {
//         cout<<"underflow"<<endl;
//         return;
//     }
//     if(frnt==rear)
//     {
//        frnt=-1;
//        rear=-1;
//        return;
//     }
//     if(frnt== max-1 && arr[0]==0)
//     {
//         arr[frnt]=0;
//         frnt=0;
//         return;
//     }
//     arr[frnt]=0;
//     frnt++;
// }
// void print()
// {
//     if(frnt==-1)
//     {
//         cout<<" quee is empty"<<endl;
//         return;
//     }
//     for(int i=frnt;i<=rear;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


    void print() {
        if (frnt == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        int i = frnt;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % max;
        }
        cout << endl;
    }

};

int main()
{
circularquee q;
q.push(10);
q.push(12);
q.push(32);

q.push(10);
q.push(12);

q.push(10);
q.push(12);
q.push(32);

q.push(32);

q.push(10);



q.pop();
q.pop();
q.pop();
q.push(500);
q.print();
}
