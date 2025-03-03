#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *top = NULL;
void push(int n){
    struct node *newnode = NULL;
    newnode = (struct node *) malloc(sizeof(newnode));
    newnode->data = n;
    newnode->link = NULL;
    newnode->link = top;
    top = newnode;
}

void print(){
    struct node *temp;
    temp = top;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->link;
    }


}

int main(){

    push(10);
    push(20);
    print();

}
