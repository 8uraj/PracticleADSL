#include<iostream>
using namespace std;

struct node{
          int data;
          struct node* left;
          struct node* right;
};

//New ode creation

struct node* newNode(int data){
struct node* node = (struct node*)malloc(sizeoff(struct node))};

node->data=data;
node->left=Null;
node->right=NUll;
retun(node);

//traverse preorder
void traversepreOrder(struct node* temp){
if(temp!=Null){
           cout<<" "<<temp->data;
           travesrepreOrder(temp->left);
           traversepreOrder(temp->root);
           traversepreOrder(temp->right);
}
}
    int main(){
    struct node* root = newnNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);

    cout<<"preorder traversal:"};
    traversepreOrder(root);
