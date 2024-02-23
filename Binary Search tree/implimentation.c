#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *left, *right;
};

struct node* createnode(int k) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->value = k;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct node* insert(struct node* head, int k) {
    if (head == NULL) {
        return createnode(k);
    }
    if (k < head->value) {
        head->left = insert(head->left, k);
    }
    else if (k > head->value) {
        head->right = insert(head->right, k);
    }
    return head;
}

struct node* minValueNode(struct node* node) {
    struct node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

struct node* deleteNode(struct node* root, int k) {
    if (root == NULL) {
        return root;
    }
    if (k < root->value) {
        root->left = deleteNode(root->left, k);
    }
    else if (k > root->value) {
        root->right = deleteNode(root->right, k);
    }
    else {
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minValueNode(root->right);
        root->value = temp->value;
        root->right = deleteNode(root->right, temp->value);
    }
    return root;
}

void print(struct node* root) {
    if (root != NULL) {
        print(root->left);
        printf("%d ", root->value);
        print(root->right);
    }
}

int main() {
    struct node* root = NULL;

    root = insert(root, 4);
    insert(root, 1);
    insert(root, 6);
    insert(root, 5);
    insert(root, 2);

    printf("Original BST: ");
    print(root);

    printf("\nAfter deleting 2 : ");
    root = deleteNode(root, 2);
    print(root);

    return 0;
}
