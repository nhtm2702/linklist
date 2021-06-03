#include <iostream>

using namespace std;

struct Node
{
    int value;
    Node* next;
};

struct SLinkedList
{
    Node* head;

    SLinkedList()
    {
        head = NULL;
    }

    void print() const
    {
        for (Node* p = head; p != NULL; p = p->next)
            cout << p ->value << " ";
        cout << endl;
    }

    Node* addFirst(int value)
    {
        Node* newNode = new Node;
        newNode -> value = value;
        newNode -> next = head;
        head = newNode;
        return head;
    }

    void insert(int value)
    {
        Node* newNode = new Node;
        newNode -> value = value;
        newNode -> next = NULL;
        Node* p = head;
        if (head == NULL) head = newNode;
        else
        {
            if (head->next == NULL)
            {
                if (head->value > value)
                {
                    newNode -> next = head;
                    head = newNode;
                }
                else head -> next = newNode;
            }
            else
            {
                if (head->value > head->next->value)
                {
                    while (p->next != NULL && p->next->value > value) p = p->next;
                    if (p == head)
                    {
                        if (head->value < value)
                        {
                            newNode -> next = head;
                            head = newNode;
                        }
                        else
                        {
                            newNode -> next = head -> next;
                            head -> next = newNode;
                        }
                    }
                    else
                    {
                        if (p->next != NULL)
                        {
                            newNode -> next = p->next;
                            p->next = newNode;
                        }else if (p->next == NULL) p->next = newNode;
                    }
                }
                else
                {
                    while (p->next != NULL && p->next->value < value) p = p->next;
                    if (p == head)
                    {
                        if (head->value > value)
                        {
                            newNode -> next = head;
                            head = newNode;
                        }
                        else
                        {
                            newNode -> next = head -> next;
                            head -> next = newNode;
                        }
                    }
                    else
                    {
                        if (p->next != NULL)
                        {
                            newNode -> next = p->next;
                            p->next = newNode;
                        }else if (p->next == NULL) p->next = newNode;
                    }
                }
            }
        }
    }
};

int main()
{
    SLinkedList* list = new SLinkedList();

    //Node* head = list->addFirst(0);
    //head = list->addFirst(3);
    //head = list->addFirst(4);
    //head = list->addFirst(6);
    list->insert(1);
    list->print();
    return 0;
}
