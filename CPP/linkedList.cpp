
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next = nullptr;
};

Node *createNewNode(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    return newNode;
}

int size(Node *head)
{
    int count = 0;
    Node *current = head;
    while (current != nullptr)
    {
        count++;
        current = current->next;
    }

    return count;
}

Node *findLastNode(Node *head)
{
    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }

    return current;
}

void insertAtEnd(Node *head, int value)
{
    Node *newNode = createNewNode(value);
    if (head == nullptr)
    {
        return;
    }

    Node *lastNode = findLastNode(head);
    lastNode->next = newNode;
}

Node *insertAt(Node *head, int index, int value)
{
    Node *newNode = createNewNode(value);

    if (head == nullptr)
    {
        return newNode;
    }

    if (index <= 0)
    {
        newNode->next = head;
        return newNode;
    }

    int count = size(head);

    if (index >= count)
    {
        Node *lastNode = findLastNode(head);
        lastNode->next = newNode;
        return head;
    }

    Node *current = head;
    for (int i = 0; i < index; i++)
    {
        current = current->next;
    }

    if (current != nullptr)
    {
        newNode->next = current->next;
        current->next = newNode;
    }

    return head;
}

// linked traversal
void printAllElement(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// delete from beginning
// delete from end
// delete from specific index

int main()
{
    Node *head = createNewNode(10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    head = insertAt(head, 1, 25);
    head = insertAt(head, 0, 0);

    printAllElement(head);
}