#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* buildTree(int preorder[], int& index, int n);
void inorder(Node* root, bool isRepresentation);
void preorder(Node* root, bool isRepresentation);
void postorder(Node* root, bool isRepresentation);


int main() {

    // Node* root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);

    int arr[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, -1, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = 0;
    Node* root = buildTree(arr, index, n);


    inorder(root, false);
    cout << "\n";
    inorder(root, true);
    cout << "\n";
    preorder(root, false);
    cout << "\n";
    preorder(root, true);
    cout << "\n";
    postorder(root, false);
    cout << "\n";
    postorder(root, true);
    return 0;
}

Node* buildTree(int preorder[], int& index, int n) {
    if (index >= n || preorder[index] == -1) {
        index++;
        return nullptr;
    }

    Node* root = new Node(preorder[index++]);
    root->left = buildTree(preorder, index, n);
    root->right = buildTree(preorder, index, n);

    return root;
}


void inorder(Node* root, bool isRepresentation) {
    if (root == nullptr) {
        if (isRepresentation) {
            cout << -1 << " ";
        }
        return;
    }

    inorder(root->left, isRepresentation);
    cout << root->data << " ";
    inorder(root->right, isRepresentation);
}

void preorder(Node* root) {
    if (root == nullptr) {
       
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root, bool isRepresentation) {
    if (root == nullptr) {
        if (isRepresentation) {
            cout << -1 << " ";
        }
        return;
    }

    postorder(root->left, isRepresentation);
    postorder(root->right, isRepresentation);
    cout << root->data << " ";
}



/*
                    1
                2       3
            4     5   6    7
        -1

*/