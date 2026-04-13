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
struct Node*insertAtFirst(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head->next;
    ptr->data=data;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
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

    printf("CircularLinkedlist before insertion:\n");
    linkedListTraversal(head);
    head=insertAtFirst(head,4);
    printf("Circularlinkedlist after insertion:\n");
    linkedListTraversal(head);
    return 0;
}
