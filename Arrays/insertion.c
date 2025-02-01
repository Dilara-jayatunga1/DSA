//insertion at a specific position
#include <stdio.h>
int main()
{
    int a[50],size,num,pos;
    printf("enter size: ");
    scanf("%d",&size);
     printf(" size: %d",size);
     
     printf("\n Enter the elements");
     for (int i = 0; i<size;i++)
        {
            scanf("%d",&a[i]);
            
        }
        printf("elements:");
        for (int i=0;i<size;i++){
            printf("%d ",a[i]);
        }
        
        printf("enter the position you want to change");
        scanf("%d",&pos);
        
        printf("enter the number");
        scanf("%d",&num);
        
        for (int i = size-1; i>=pos-1;i-- ){
            a[i+1]= a[i];
        }

        //if you want to swap positions 
       // a[size]= a[pos-1];
        a[pos-1]= num;
        size++;
        
         printf("elements:");
        for (int i=0;i<size;i++){
            printf("%d ",a[i]);
        }
 
    return 0;
}


//insertion at the begining

// #include <stdio.h>
// int main()
// {
//     int a[50],size,num;
//     printf("enter size: ");
//     scanf("%d",&size);
//      printf(" size: %d",size);
     
//      printf("\n Enter the elements");
//      for (int i = 0; i<size;i++)
//         {
//             scanf("%d",&a[i]);
            
//         }
//         printf("elements:");
//         for (int i=0;i<size;i++){
//             printf("%d ",a[i]);
//         }
//         printf("enter the number");
//         scanf("%d",&num);
        
//         for (int i =size-1;i>=0;i--){
          
         
//           a[i+1]= a[i];
  
//         }
//         a[0]= num;
//         size++;
        
//          printf("elements:"); 
//         for (int i=0;i<size;i++){
//             printf("%d ",a[i]);
//         }
 
//     return 0;
// }
        

//  #include <stdio.h>
// int main()
// {
//     int a[50],size,num,pos;
//     printf("enter size: ");
//     scanf("%d",&size);
//      printf(" size: %d",size);
     
//      printf("\n Enter the elements");
//      for (int i = 0; i<size;i++)
//         {
//             scanf("%d",&a[i]);
            
//         }
//         printf("elements:");
//         for (int i=0;i<size;i++){
//             printf("%d ",a[i]);
//         }

//         printf("enter the number");
//         scanf("%d",&num);


        
//       //  a[size]= num;
//       //   size++;
        
//          printf("elements:");
//         for (int i=0;i<size;i++){
//             printf("%d ",a[i]);
//         }
 
//     return 0;
// }