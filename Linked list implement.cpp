#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* head = nullptr;

void insertFirst(int val) {
    Node* nn = new Node;
    nn->data = val;
    nn->link = head; 
    head = nn;       
}

void insert(int val) {
    if (head == nullptr) {
        head = new Node;
        head->data = val;
        head->link = nullptr;
    } else {
        Node* nn = new Node;
        nn->data = val;
        nn->link = nullptr;
        Node* p = head;
        while (p->link != nullptr) {
            p = p->link;
        }
        p->link = nn;
    }
}

void insertPos(int val, int pos) {
    if (pos == 1) {
        insertFirst(val);
        return;
    }
    Node* nn = new Node;
    nn->data = val;
    Node* p = head;
    for (int i = 1; i < pos - 1 && p != nullptr; i++) {
        p = p->link;
    }
    if (p == nullptr) {
        cout << "Position out of range!" << endl;
        delete nn;
        return;
    }
    nn->link = p->link;
    p->link = nn;
}

void deletPos(int pos) {
    if (head == nullptr) return;
    if (pos == 1) {
        Node* temp = head;
        head = head->link;
        delete temp;
        return;
    }
    Node* p = head;
    for (int i = 1; i < pos - 1 && p->link != nullptr; i++) {
        p = p->link;
    }
    if (p->link == nullptr) return; // invalid position
    Node* temp = p->link;
    p->link = temp->link;
    delete temp;
}

void display() {
    Node* p = head;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->link;
    }
    cout << endl;
}

int main() {
    insert(5);
    insertFirst(10);
    insertPos(200, 3);
    insert(15);
    insert(150);
    insert(5);
    insert(6);

    display(); 

    deletPos(2); 

    display(); 

    return 0;
}
