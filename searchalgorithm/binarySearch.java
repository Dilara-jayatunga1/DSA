package searchalgorithm;

public class binarySearch {

       public static int Binary(int a[], int size, int target){
        int left, right, mid;
            left = 0;
            right = size-1;
         
            while(left<=right){
                mid = (left+right)/2;
               if(target<a[mid]){
                   right = mid-1;
            }
               else if(target>a[mid]){
                   left = mid+1;
               }
               else{
                   return mid;
               }
       
            }
            return -1;
        }
        public static void main(String[] args) {
                
        int a[]= {11,21,34,49,55,61,78,82,93,101};
        int target = 100;
        int size = a.length;

        int result = Binary(a, size, target);
        System.err.println("Element found at index "+ result);
        }
       
        
    }
    