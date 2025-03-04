#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int arr[MAX];
int top = -1;

void push (){
    int data;
    scanf("%d",&data);

    if(top==MAX-1){
        printf("Stack Overflow\n");

    }else{
        top++;
         arr[top]= data;
        printf("Data pushed successfully\n%d\n",data);
    }
}

    void print(){
        for(int i=0;i<=top;i++){
            printf("%d\n",arr[i]);
        }
    }

    int pop(){
        int data;
        if(top==-1){
            printf("Stack Underflow\n");
        } else 
        arr[top]= data;
        top--;
        printf("Data popped successfully\n%d\n",data);
        return data;
    }


int main(){
    push();
    push();
    push();
    pop();
    print();
    return 0;
}