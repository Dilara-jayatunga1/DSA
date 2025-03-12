#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* create(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    int x;
    printf("enter the data for the node\n");
    scanf("%d", &x);
    if(x==-1){
        return 0;
    }
    else{
        newnode ->data = x;
        printf("enter the left child of %d\n", x);
        newnode->left = create();
        printf("enter the right child of %d\n", x);
        newnode->right = create();
        return newnode;
    }
}


int main(){
    struct node *root;
    root= 0;
    root = create();

}