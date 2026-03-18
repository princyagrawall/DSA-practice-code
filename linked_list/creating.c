#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count(struct node *head){
        int count = 0;
        if (head == NULL){
            printf("linked list is empty");
        }
        struct node *ptr;
        ptr = head;
        while(ptr!= NULL){
            count++;
            ptr = ptr->link;
            
            }
        printf("%d",count);
        
    }

void print(struct node *head){
    if (head == NULL){
        printf("Linked list is empty");
    }
    struct node *ptr;
    ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 95;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 4;
    current -> link = NULL;
    head -> link -> link = current;

    
    count(head);
    printf("\n");
    print(head);



    return 0;
}