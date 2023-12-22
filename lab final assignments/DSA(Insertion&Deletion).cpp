#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(0), right(0) {}
};

class BinarySearchTree {
private:
    Node* root;

public:
    BinarySearchTree() : root(0) {}

    Node* insert(Node* node, int value) {
        if (node == 0) {
            return new Node(value);
        }

        if (value < node->data) {
            node->left = insert(node->left, value);
        } else if (value > node->data) {
            node->right = insert(node->right, value);
        }

        return node;
    }

    Node* deleteNode(Node* root, int key) {
        if (root == 0) {
            return root;
        }

        if (key < root->data) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->data) {
            root->right = deleteNode(root->right, key);
        } else {
            if (root->left == 0) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == 0) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }

        return root;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current->left != 0) {
            current = current->left;
        }
        return current;
    }

    void insert(int value) {
        root = insert(root, value);
    }

    void remove(int key) {
        root = deleteNode(root, key);
    }

    void displayTree(Node* node) const {
        if (node != 0) {
            displayTree(node->left);
            std::cout << node->data << " ";
            displayTree(node->right);
        }
    }
    void displayOriginalTree() const {
        std::cout << "Original Binary Search Tree: ";
        displayTree(root);
        std::cout << std::endl;
    }

    void displayAfterInsertion() const {
        std::cout << "BST after insertion: ";
        displayTree(root);
        std::cout << std::endl;
    }

    void displayAfterDeletion() const {
        std::cout << "BST after deletion: ";
        displayTree(root);
        std::cout << std::endl;
    }
};

int main() {
    BinarySearchTree bst;

    // Example usage:
    bst.insert(25);
    bst.insert(35);
    bst.insert(77);
    bst.insert(66);
    bst.insert(44);

    // Display the original tree
    bst.displayOriginalTree();

    // User choice for insertion and deletion
    int choice;
    std::cout << "Enter 1 to insert, 2 to delete: ";
    std::cin >> choice;

    if (choice == 1) {
        int value;
        std::cout << "Enter value to insert: ";
        std::cin >> value;
        bst.insert(value);
        bst.displayAfterInsertion();
    } else if (choice == 2) {
        int key;
        std::cout << "Enter value to delete: ";
        std::cin >> key;
        bst.remove(key);
        bst.displayAfterDeletion();
    }

    return 0;
}

