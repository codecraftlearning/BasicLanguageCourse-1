#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *insert(Node *root, int value)
{
    if (root == nullptr)
    {
        return new Node(value);
    }

    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }

    return root;
}

void inorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

bool searchBST(Node *root, int value)
{
    if (root == nullptr)
    {
        return false;
    }

    if (root->data == value)
    {
        return true;
    }

    if (value < root->data)
    {
        return searchBST(root->left, value);
    }
    else
    {
        return searchBST(root->right, value);
    }
}

Node* findMin(Node* root) {
    while(root && root->left != nullptr) {
        root = root->left;
    }

    return root;
}

Node* deleteNode(Node *root, int value)
{
    if (root == nullptr) {
        return root;
    }

    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {

        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        } else if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);

    }

    return root;
}

int main(int size, char *args[])
{
    Node *root = nullptr;
    int arr[] = {50, 30, 20, 40, 70, 60, 80, 75};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }

    cout << "Inorder traversal of the BST: ";
    inorder(root);

    cout << "\nPreorder traversal of the BST: ";
    preorder(root);
    cout << endl;

    if (searchBST(root, atoi(args[1])))
    {
        cout << "Number available in BST";
    }
    else
    {
        cout << "Not Found!!";
    }

    root = deleteNode(root, atoi(args[1]));

    cout << "\nPreorder traversal of the BST after deletion: ";
    preorder(root);
    cout << endl;

    return 0;
}

//            10
 //      8             14
 //   7    9       12      15