#include<iostream>
using namespace std;
struct Node {
   int data;
   struct Node* left;
   struct Node* right;
};
struct Node* newNode(int data) {
   struct Node* node = new Node;
   node->data = data;
   node->left = NULL;
   node->right = NULL;
   return node;
}
void convertTreeToItsMirror(struct Node* node) {
   if (node == NULL) {
      return;
   }
   else {
      struct Node* temp;
      convertTreeToItsMirror(node->left);
      convertTreeToItsMirror(node->right);
      temp = node->left;
      node->left = node->right;
      node->right = temp;
   }
}
void printTree(struct Node* node) {
   if (node == NULL) {
      return;
   }
   printTree(node->left);
   cout << node->data << " ";
   printTree(node->right);
}
int main() {
   struct Node *root = newNode(3);
   root->left = newNode(4);
   root->right = newNode(6);
   root->left->left = newNode(7);
   root->left->right = newNode(8);
   root->right->right = newNode(9);
   root->right->left = newNode(11);
   cout << "Tree Is: ";
   printTree(root);
   cout << endl;
   convertTreeToItsMirror(root);
   cout << "Mirror of the Tree Is: ";
   printTree(root);
   cout << endl;
   return 0;
}
