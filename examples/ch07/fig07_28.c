// Fig. 7.28: fig07_28.c
// Demonstrating an array of pointers to functions.
#include <stdio.h>

// prototypes
double add(double first, double second);
double subtract(double first, double second);
double multiply(double first, double second);
double divide(double first, double second);

int main(void)
{
   // initialize array of 3 pointers to functions that each take an
   // int argument and return void                              
   double (*calc[4])(double, double) = {add, subtract, multiply, divide};    
   double v1 = 0;
   double v2 = 0;

   puts("Enter value 1");
   scanf("%lf", &v1);
   while ((getchar()) != '\n') {}

   puts("Enter value 2");
   scanf("%lf", &v2);
   while ((getchar()) != '\n') {}

   printf("%s",
       "Select and option\n"
       "1.Add\n"
       "2.Subtract\n"
       "3.Multiply\n"
       "4.Divide\n");

   size_t choice; // variable to hold user's choice
   scanf("%llu", &choice);

   // process user's choice
   while (choice < 1 || choice > 4 ) {

      printf("%s",
           "Select and option\n"
           "1.Add\n"
           "2.Subtract\n"
           "3.Multiply\n"
           "4.Divide\n");

      scanf("%llu", &choice);
   } 

   double answer = (calc[choice - 1])(v1, v2);
   printf("Answer is %f\n", answer);
   puts("Program execution completed.");
} 

double add(double first, double second)
{
   //printf("You entered %d so function1 was called\n\n", a);
    double answer;

    answer = first + second;

    return answer;
}

double subtract(double first, double second)
{
   //printf("You entered %d so function2 was called\n\n", b);
    double answer;

    answer = first - second;

    return answer;
}

double multiply(double first, double second)
{
   //printf("You entered %d so function3 was called\n\n", c);  
    double answer;

    answer = first * second;

    return answer;
}

double divide(double first, double second)
{
    //printf("You entered %d so function4 was called\n\n", c);  
    double answer;
    
    if (second != 0)
    {
        answer = first / second;
    }
    else
    {
        puts("ERROR Cannot divide by zero");
        answer = 0;
    }

    return answer;
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

