#include <stdio.h>

int main() {
   int arr[5][5] = {{1, 2, 3, 4, 5}, {4, 5, 6, 7, 8}, {7, 8, 9, 0, 1}};
   int i, j;
   
   printf("Diagonal elements of the array are: ");
   
   for(i=0; i<3; i++) {
      for(j=0; j<3; j++) {
         if(i == j) {
            printf("%d ", arr[i][j]);
         }
      }
   }
   
   return 0;
}

