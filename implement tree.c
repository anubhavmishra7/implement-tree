#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};




struct node* insertLeft(struct node *root, int value) {
    root->left = cNode(v);
    return root->left;
}
struct node* insertRight(struct node *root, int value){
    root->right = c(value);
    return root->right;
}
struct node* createNode(value){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main(){
    struct node *root = c(1);
    insertLeft(root, 2);
    insertRight(root, 3);

    printf("The elements of tree are %d %d %d", root->data, root->left->data, root->right->data);
}
