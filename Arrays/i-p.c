#include<stdio.h>
#include<stdlib.h>

int main(){
    int size =5;
    int arr [10] = {1,2,3,4,5};
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);

    }
printf("\n");

    for (int i= size-1;i >=2;i--){
arr[i+1]= arr[i];

size++;
    } 
    arr[2]= 9;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    
}