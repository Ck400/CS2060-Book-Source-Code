// Fig. 2.1: fig02_01.c
// A first program in C 
#include <stdio.h>
#include "fig02_01.h"

int askUser(void);

// function main begins program execution 
int main( void )
{
	askUser();
	
	return 0;
} // end function main 

int askUser( void )
{
	int length = 1;
	int width = 1;
	int area = 1;
	int division = 1;

	// Ask user for length
	puts("Enter the length");
	scanf("%d", &length);

	//Ask user for width 
	puts("Enter the width");
	scanf("%d", &width);

	//Assign variables 
	area = length * width;
	division = length / width;

	//Print out statements to user
	printf("Length: %d Width: %d and Area is %d.\n", length, width, area);
	printf("Length divided by width is %d", division);

	return 0;
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
