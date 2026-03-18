#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *last = NULL;

// Insert at beginning
void insert_begin(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    if (last == NULL) {
        last = newnode;
        last->next = last;
    } else {
        newnode->next = last->next;
        last->next = newnode;
    }
}

// Insert at end
void insert_end(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    if (last == NULL) {
        last = newnode;
        last->next = last;
    } else {
        newnode->next = last->next;
        last->next = newnode;
        last = newnode;
    }
}

// Delete from beginning
void delete_begin() {
    struct node *temp;

    if (last == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = last->next;

    if (last->next == last) {
        last = NULL;
    } else {
        last->next = temp->next;
    }

    free(temp);
}

// Delete from end
void delete_end() {
    struct node *temp, *prev;

    if (last == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = last->next;

    if (last->next == last) {
        free(last);
        last = NULL;
        return;
    }

    while (temp->next != last) {
        temp = temp->next;
    }

    prev = temp;
    prev->next = last->next;
    free(last);
    last = prev;
}

// Display list
void display() {
    struct node *temp;

    if (last == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = last->next;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);

    printf("(Back to start)\n");
}

// Main function
int main() {
    insert_begin(10);
    insert_begin(5);
    insert_end(20);
    insert_end(30);

    printf("Circular Linked List:\n");
    display();

    delete_begin();
    printf("After deleting from beginning:\n");
    display();

    delete_end();
    printf("After deleting from end:\n");
    display();

    return 0;
}