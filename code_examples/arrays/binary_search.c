//
// DS Handbook
// Binary Search
//

#include <stdio.h>

int main()
{
   int c, first, last, middle, n, search, array[100];

   printf("Enter number of elements: ");
   scanf("%d",&n);


   for (c = 0; c < n; c++){
      printf("Enter all %d integers in sorted order: ", n);
      scanf("%d",&array[c]);
   }
   
   printf("Enter value to find: ");
   scanf("%d", &search);

   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last) {
      
      if (array[middle] < search){
         first = middle + 1;
      }
      
      else if (array[middle] == search) {
         printf("element %d is found at location %d.\n", search, middle+1);
         break;
      }
      
      else{
         last = middle - 1;
      }
      
      middle = (first + last)/2;
   }
   
   if (first > last){
      printf("%d is not found in the array.\n", search);
   }
   
   return 0;
}
