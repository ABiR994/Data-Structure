#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int val) {
    if (!root) return new Node(val);
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

bool search(Node* root, int key) {
    if (!root) return false;
    if (root->data == key) return true;
    return key < root->data ? search(root->left, key) : search(root->right, key);
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;
    int values[] = {10, 5, 20, 3, 7, 15, 25};
    for (int val : values)
        root = insert(root, val);

    cout << "Inorder (Sorted): ";
    inorder(root);
    cout << "\nSearch 15: " << (search(root, 15) ? "Found" : "Not Found") << endl;
    cout << "Search 8: " << (search(root, 8) ? "Found" : "Not Found") << endl;
    return 0;
}

