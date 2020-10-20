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

 void menu()
 {
   
 }