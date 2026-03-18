#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;

};

void add_at_end(struct node *head, int data){
    struct node *temp =malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    struct node *ptr =malloc(sizeof(struct node));
    ptr = head;
    while(ptr->link != NULL){
        ptr = ptr->link ;
    }

    ptr->link = temp;

}

void add_at_beginning(struct node *head,int data){
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data= data;
    ptr->link =NULL;

    ptr->link = head;
    head = ptr;
    return head;

}


void print_list(struct node *head){
    if (head == NULL){
        printf("linked list is empty");
        }
    struct node *ptr =malloc(sizeof(struct node));
    ptr = head;
    while (ptr != NULL){
        printf("%d ",ptr->data);
        ptr= ptr->link;
    }
}

int main(){
    struct node *head= malloc(sizeof(struct node));
    head->data=48;
    head->link = NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=95;
    current->link= NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data=4;
    current->link=NULL;
    head->link->link = current;

    add_at_end(head,67);
    add_at_beginning(head,24);
    print_list(head);



}