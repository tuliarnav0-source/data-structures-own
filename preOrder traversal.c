#include<stdio.h>
#include<malloc.h>
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
};
struct Node*createnode(int data){
    struct Node*n;
    n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preOrder(struct Node*root){
    if(root!=NULL){
    printf("%d",root->data);
    preOrder(root->left);
    preOrder(root->right);
    }
}
int main(){
    struct Node*p=createnode(1);
    struct Node*p1=createnode(2);
    struct Node*p2=createnode(3);
    struct Node*p3=createnode(4);
    struct Node*p4=createnode(5);
    
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
     
    preOrder(p);
    
    return 0;
}
