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

    void printLast(int k)
    {
        int n = 0;
        for (Node* p = head;p != NULL;p = p->next) n++;
        for (Node* p = head;p != NULL;p = p->next)
        {
            if (n <= k) cout << p->value << " ";
            n--;
        }
    }
};

int main()
{
    SLL* list = new SLL();
    list->addFirst(1);
    list->addFirst(2);
    list->addFirst(3);
    list->addFirst(4);
    list->printLast(3);
}
