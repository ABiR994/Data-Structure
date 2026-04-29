#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void deleteEnd(Node* &head) {
    if (!head) return;

    if (!head->next) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }

    temp->prev->next = nullptr;
    delete temp;
}

void deleteBeginning(Node* &head) {
    if (!head) return;

    Node* temp = head;
    head = head->next;

    if (head) {
        head->prev = nullptr;
    }

    delete temp;
}


void deleteMiddle(Node* &head, int position) {
    if (!head) return;

    Node* temp = head;
    int index = 1;

    if (position == 1) {
        deleteBeginning(head);
        return;
    }

    while (temp && index < position) {
        temp = temp->next;
        index++;
    }

    if (!temp) return;

    if (temp->next) {
        temp->next->prev = temp->prev;
    }

    if (temp->prev) {
        temp->prev->next = temp->next;
    }

    delete temp;
}

void display(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " > ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    head = new Node{10, nullptr, nullptr};
    head->next = new Node{11, head, nullptr};
    head->next->next = new Node{12, head->next, nullptr};
    head->next->next->next = new Node{13, head->next->next, nullptr};

    display(head);

    deleteEnd(head);
    display(head);

    deleteBeginning(head);
    display(head);

    deleteMiddle(head, 2);
    display(head);

    return 0;
}
