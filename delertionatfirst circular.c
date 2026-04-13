#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void linkedListTraversal(struct Node*head){
    struct Node*ptr=head;
    printf("Element:%d\n",ptr->data);
    ptr=ptr->next;
    while(ptr!=head){
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node*deleteFirst(struct Node*head){
   struct Node*ptr=head;
   struct Node*p=head->next;
   while(p->next!=head){
       p=p->next;
   }
   p->next=head->next;
   head=head->next;
   free(ptr);
   return head;
}

int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    
    head=(struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 68;
    fourth->next = head;

    printf("CircularLinkedlist before deletion:\n");
    linkedListTraversal(head);
    head=deleteFirst(head);
    printf("Circularlinkedlist after deletion:\n");
    linkedListTraversal(head);
    return 0;
}
