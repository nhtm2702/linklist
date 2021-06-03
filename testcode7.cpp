#include <iostream>

using namespace std;

struct Node
{
    const int value;
    Node* next;
    Node(int value);
};

class LinkedList {
    Node *head;
public:
    LinkedList();
    LinkedList(int a[], int n);
    void insertHead(int value);
    void print();
};

Node::Node(int value) : value(value),next(nullptr) {}
LinkedList::LinkedList() {head = NULL;}
LinkedList::LinkedList(int a[], int n)
{
    LinkedList* list = new LinkedList();
    head = new Node(a[0]);
    Node *p = head;
    for (int i=1;i<n;i++)
    {
        Node* temp = new Node(a[i]);
        p->next = temp;
        p = p->next;
    }
}

void LinkedList::insertHead(int value)
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void LinkedList::print()
{
    for (Node* p = head;p != NULL;p=p->next) cout << p->value << " ";
}


int main()
{
    int a[] = {4, 1, 5};
    LinkedList list(a, 3);
    list.print();
    return 0;
}
