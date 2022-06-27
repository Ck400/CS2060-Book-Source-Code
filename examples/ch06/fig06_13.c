// Fig. 6.13: fig06_13.c
// Passing arrays and individual array elements to functions.
#include <stdio.h>
#define SIZE 5
#define ROWS 3
#define COLUMNS 4

// function prototypes
void modifyArray(int b[], size_t size);
void modifyElement(int e);               
void printArray(const int b[], size_t rows);
void fill2DArray(int b[][COLUMNS], size_t rows);
void print2DArray(const int b[][COLUMNS], size_t rows);

// function main begins program execution
int main(void)
{
   int a[SIZE] = { 0, 1, 2, 3, 4 }; // initialize array a
   int b[ROWS][COLUMNS] = {0};

   puts("Demonstrate 2D Arrays");
   for (unsigned int i = 0; i < ROWS; ++i) {
       for (unsigned int j = 0; j < COLUMNS; ++j) {
           b[i][j] = i * j;
       }
   }

   fill2DArray(b, ROWS);
   print2DArray(b, ROWS);

   puts("Effects of passing entire array by reference:\n\nThe "
      "values of the original array are:");

   // output original array
   printArray(a, SIZE);

   puts(""); // outputs a newline

   modifyArray(a, SIZE); // pass array a to modifyArray by reference                         
   puts("The values of the modified array are:");

   printf("array = %p\n & a[0] = %p\n & a = %p\n", a, &a[0], &a);

   // output modified array
   printArray(a, SIZE);

   // output value of a[3]
   printf("\n\n\nEffects of passing array element "
      "by value:\n\nThe value of a[3] is %d\n", a[3]);
   
   modifyElement(a[3]); // pass array element a[3] by value

   // output value of a[3]
   printf("The value of a[3] is %d\n", a[3]);
}

// in function modifyArray, "b" points to the original array "a" 
// in memory                                                     
void modifyArray(int b[], size_t size)                               
{                                                                   
   // multiply each array element by 2                         
   for (size_t j = 0; j < size; ++j) {                                 
      b[j] *= 2; // actually modifies original array               
   }                                                 
} 

// in function modifyElement, "e" is a local copy of array element
// a[3] passed from main                                     
void modifyElement(int e)                                       
{                                                                 
   // multiply parameter by 2                                  
   printf("Value in modifyElement is %d\n", e *= 2);            
} 

void printArray(const int b[], size_t rows)
{
    for (size_t i = 0; i < rows; ++i) {
        printf("%3d", b[i]);
    }
    puts("");
}
                    
void fill2DArray(int b[][COLUMNS], size_t rows)
{
    for (unsigned int i = 0; i < rows; ++i) {
        for (unsigned int j = 0; j < COLUMNS; ++j) {
            printf("Enter value for location [%d] [%d]\n", i, j);
            scanf("%3d", &b[i][j]);
        }
    }
}
void print2DArray(const int b[][COLUMNS], size_t rows)
{
    for (unsigned int i = 0; i < rows; ++i) {
        for (unsigned int j = 0; j < COLUMNS; ++j) {
            printf("%3d", b[i][j]);
        }
        puts("");
    }
}




/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

