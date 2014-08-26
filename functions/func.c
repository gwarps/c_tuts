#include "func.h"

int * squareArray(int arr[], int size) {
   int result[size];
   int i;
   for (i = 0; i < size; i++) {
      arr[i] = arr[i] * arr[i];
   }

   return arr;
}
