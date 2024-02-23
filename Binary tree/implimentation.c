#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct  node * left ;
    struct  node * right ;

};
struct node * createnode(int data){
    struct node * n ; // creating node pointer 
    n = (struct node*)malloc(sizeof(struct node)); // allocating memory in heap
    n->data = data;     
    n->left = NULL;
    n->right =NULL;
    return n ;
}
void preorderTraversal(struct node * root){
    if(root!=NULL){
        printf("%d " , root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
void postorderTraversal(struct node * root){
    if(root!=NULL){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d " , root->data);
    }
}
void inorderTraversal(struct node * root){
    if(root!=NULL){
        inorderTraversal(root->left);
        printf("%d " , root->data);
        inorderTraversal(root->right);
        
    }
}
int main(){
    struct node * p = createnode(4) ;
    struct node * p1 = createnode(1) ;
    struct node * p2 = createnode(6) ;
    struct node * p3 = createnode(5) ;
    struct node * p4 = createnode(2) ;
    // linking the two node 
    p->left = p1;
    p->right =p2;
    p1->left = p3;
    p1->right= p4;

    preorderTraversal(p);
    printf("\n");
    postorderTraversal(p);
    printf("\n");
    inorderTraversal(p);

    return  0 ;

}