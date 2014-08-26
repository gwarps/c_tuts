#include "func.h"

int * squareArray(int arr[], int size) {
   int result[size];
   int i = 0;
   for (int i = 0; i < size; i++) {
      result[i] = arr[i] * arr[i];
   }

   return arr;
}
