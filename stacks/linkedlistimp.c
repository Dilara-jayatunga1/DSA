#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}; 
struct node *top = NULL;
 int d;

void push(int d){
    struct node *newNode = NULL;
    newNode = (struct node*) malloc(sizeof(struct node));
    newNode-> data = d;
    newNode-> link = top;
    top = newNode;
    printf("Data pushed successfully\n%d\n",d);

}

int pop(){
    struct node *temp;
    temp = top; 
    if(top == NULL){
        printf("Stack Underflow\n");
        return 0;

    } else {
        int val = temp->data;
        top = top->link;
        free(temp);
       
        return val;
    }
}

void print (){
    struct node *temp;
    temp = top;
    while(temp != NULL){
        printf(" the elements : %d\n",temp->data);
        temp = temp->link;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    pop();
    print();
    return 0;
}
