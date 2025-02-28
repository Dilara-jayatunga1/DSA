#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int stack[MAX];
int top = -1;

void push (){
    int data;
    printf("Enter the data to be pushed\n");
    scanf("%d",&data);

    if(top == MAX-1){
        printf("Stack Overflow\n");
    }else{
        top++;
        stack[top]= data;
        printf("Data pushed successfully\n%d\n",data);
    }
    return;
}

int pop(){
    int data;
    if(top == -1){
        printf("Stack Underflow\n");
    }else{
        data = stack[top];
        top--;
        printf("Data popped successfully\n%d\n",data);
    }
    return data;
}

int main(){
    push();
    push();
    push();
    pop();
return 0;

}