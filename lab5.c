#include "lab5.h"

 int readPosNum()
 {
  int theNum;
  printf("please enter a positive integer: ");
  scanf("%d", &theNum);
  while (theNum < 1)
  {
   printf("Please enter the integer as a number greater than zero: ");
   scanf("%d", &theNum);
  }
  return theNum;
 }

 int menu()
 {
   int choice;
   printf("\nchoose one of the following:\n");
   printf("1. Enter a new number\n");
   printf("2. Print the number of odd digits, even digits and zeros in the integer\n");
   printf("3. Print the prime numbers between 2 and the integer (inclusive)\n");
   printf("4. Print the number in reverse order\n");
   printf("5. Quit the program\n");
   printf("You chose option ");
   scanf("%d.", &choice);
   printf("\n");

   return choice;
 }

 