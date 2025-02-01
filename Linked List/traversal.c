#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

void count_nodes(struct node *head) {
    int count = 0;
    struct node *ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->link;
    }
    printf("The number of nodes in the linked list is %d\n", count);
}

void print_list(struct node *head) {
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");
}
 
int main() {

struct node *head = NULL;
head = (struct node *)malloc(sizeof(struct node));

head -> data =45;
head ->link = NULL;

struct node *current = malloc (sizeof(struct node));
current-> data = 30;
current-> link= NULL;
head->link= current;

current = malloc(sizeof(struct node));
current -> data = 15;
current -> link = NULL;
head -> link -> link = current;

current = malloc(sizeof(struct node));
current -> data = 20;
current -> link = NULL;
head -> link -> link->link = current;

count_nodes(head);
print_list(head);

}
