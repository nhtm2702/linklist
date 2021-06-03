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

    void addFirst(int value)
    {
        Node* newNode = new Node;
        newNode->value = value;
        newNode->next = head;
        head = newNode;
    }

    void print()
    {
        for (Node* p = head;p != NULL;p = p->next)
            cout << p->value << " ";
    }
};

int main()
{
    SLL* list = new SLL();
    list->addFirst(1);
    list->addFirst(2);
    list->addFirst(3);
    list->addFirst(4);
    list->print();
}
