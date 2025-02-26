#include   <stdio.h>
#include   <stdlib.h>
#include   <string.h>

int main(){
    int arr[] = {1,2,3,4,5};
    int data = 4;
    int size =sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if(data == arr[i]){
            printf("%d ",arr[i]);
        }
        
    }
}

//#include   <stdio.h>
// #include   <stdlib.h>
// #include   <string.h>

// int binary(int arr[],int data,int l,int r){
// while(l<=r){
//    int mid = (l+r)/2;
// if(data==arr[mid]){
// return mid;
// }else if(data<arr[mid]){
//  r=mid-1;
// }else{
//     l=mid+1;
// }

// }
// return -1;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int data = 5;
//     int size =sizeof(arr)/sizeof(arr[0]);
   
//     int l,r,mid;
//     l=0;
//     r=size-1;

//    int s= binary(arr,data,l,r);
//    printf("Element found at index %d\n",s);
//     return 0;
   

//  }      
