#include <iostream>

using namespace std;

struct Node
{
    int value;
    Node* next;
};

struct SLL
{
    Node* head;
    SLL()
    {
        head = NULL;
    }

    Node* addFirst(int value)
    {
        Node* newNode = new Node;
        newNode->value = value;
        newNode->next = head;
        head = newNode;
        return head;
    }

    void print()
    {
        for (Node* p = head;p != NULL;p = p->next)
            cout << p->value << " ";
        cout << endl;
    }

    void printReverse(Node* p,int k)
    {
        if (k == 0) return;
        if (k == 1) cout << p->value << " ";
        else printReverse(p->next,k-1);
        if (k!=1) cout << p->value << " ";
    }
};

int main()
{
    SLL* list = new SLL();
    Node* head = list->addFirst(1);
    head = list->addFirst(2);
    head = list->addFirst(3);
    head = list->addFirst(4);
    list->print();
    list->printReverse(head,0);
}
