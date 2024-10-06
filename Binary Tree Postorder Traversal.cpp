#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to perform postorder traversal
void postorderTraversal(TreeNode* root) {
    if (root == NULL) return;
    postorderTraversal(root->left);  // Traverse the left subtree
    postorderTraversal(root->right);  // Traverse the right subtree
    cout << root->val << " ";  // Process the root
}

int main() {
    // Creating a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Performing postorder traversal
    cout << "Postorder traversal of binary tree is: ";
    postorderTraversal(root);

    return 0;
}