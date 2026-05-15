#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int value)
    {
        data = value;
        next = nullptr;
    }
};

void insertAtLast (node* &head, int value)
{
    node* newNode = new node(value);

    if(head==nullptr)
    {
        head=newNode;
        return;
    }

    node* temp = head;
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}


void deleteAtFirst(node* &head)
{
    if(head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }

    node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtLast(node* &head)
{
    if(head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    if(head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    node* temp = head;
    while(temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}


void deleteAtAnyPosition(node* &head, int position)
{
    if(position <= 0 || head == nullptr)
    {
        cout << "Invalid position" << endl;
        return;
    }

    if(position == 1)
    {
        deleteAtFirst(head);
        return;
    }

    node* temp = head;
    for(int i = 1; i < position - 1; i++)
    {
        if(temp->next == nullptr)
        {
            cout << "Position out of bounds" << endl;
            return;
        }
        temp = temp->next;
    }

    if(temp->next == nullptr)
    {
        cout << "Position out of bound" << endl;
        return;
    }

    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}


void display(node* head)
{
    node* temp = head;

    while(temp!=nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null " <<endl;
}

int main ()
{
    node* head = nullptr;

    insertAtLast(head, 15);
    insertAtLast(head, 25);
    insertAtLast(head, 35);
    insertAtLast(head, 45);

    cout << "Original List: ";
    display(head);
    cout<<endl;

    deleteAtFirst(head);
    cout << "After deleting first node: ";
    display(head);\
    cout<<endl;

    deleteAtLast(head);
    cout << "After deleting last node: ";
    display(head);
    cout<<endl;

    deleteAtAnyPosition(head, 2);
    cout << "After deleting at position 2: ";
    display(head);
}
