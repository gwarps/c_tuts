#include "func.h"

int main() {

   int i;
   //int *res = squareArray(bas, 5);
  
   printf("testing for array of size 1\n");
   int arr[1] = {1};
   int *res = squareArray(arr, 1);
   assert(1 == res[0]);
   printf("testing passed for array of size 1\n");

   printf("\n=====================================\n");
   
   printf("testing for array of big size \n");
   int arr1[6] = {1,2,3,9,5,4};
   int *res1 = squareArray(arr1, 6);
   assert(1 == res1[0]);
   assert(4 == res1[1]);
   assert(9 == res1[2]);
   assert(81 == res1[3]);
   assert(25 == res1[4]);
   assert(16 == res1[5]);
   printf("testing passed for array of even size \n");

   printf("\n=====================================\n");
   printf("\n");

   return 0;
}
