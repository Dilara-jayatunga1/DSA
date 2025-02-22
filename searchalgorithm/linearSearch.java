package searchalgorithm;

import java.util.Scanner;

public class linearSearch {

    public static void lineSearch(int arr[], int target){
        int i;
        int size = arr.length;
        for( i =0; i <size; i++){
            if(arr[i]== target ){
                System.out.println("Element found at index "+ i);
                break;
            } 
            }
            if(i == size){
                System.out.println("Element not found");
            } 
        }

        public static void lS_case_2(int arr[], int target){
            int i;
            boolean found = false;
            int size = arr.length;
            for( i =0; i <size; i++){
                if(arr[i]== target ){
                    System.out.println("Element found at index "+ i);
                    //found boolean is used to check if the element is found or not
                    found= true;
                    break;
                } 
                }
                if(found == false){
                    System.out.println("Element not found");
                }

            
        }

    public static void main(String[] args) {
     
        int arr []= {1,2,3,4,5};
        
        System.out.println("Enter the target value");
        Scanner sc = new Scanner(System.in);
        int  target = sc.nextInt();

        lineSearch(arr, target);
        lS_case_2(arr, target);
        
        sc.close();
      
        }
        

    
    }
	