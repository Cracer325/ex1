/******************
Name: Ori Lewy
ID: 331646224
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main()
{

  // What bit
  printf("What bit:\n");
  printf("Please enter a number:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int x, posx;
  scanf("%d", &x);
  printf("Please enter a position:\n");
  scanf("%d", &posx);
  printf("The bit in position %d of number %d is: %d\n", posx, x, (x >> posx) & 1);

  // Set bit
  printf("\nSet bit:\n");

  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int y, posy;
  printf("Please enter a number:\n");
  scanf("%d", &y);
  printf("Please enter a position:\n");
  scanf("%d", &posy);
  printf("Number with bit %d set to 1: %d\n", posy, y | 1 << posy);
  printf("Number with bit %d set to 0: %d\n", posy, y & (~(1 << posy)));
  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int a, posa;
  printf("Please enter a number:\n");
  scanf("%d", &a);
  printf("Please enter a position:\n");
  scanf("%d", &posa);
  printf("Number with bit %d toggled: %d\n", posa, a ^ (1 << posa));
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int b;
  // Note: the number is odd if the LSB (first) is 0 and even if 1
  printf("Please enter a number:\n");
  scanf("%d", &b);
  printf("%d\n", (b ^ 1) & 1);
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int n1, n2;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &n1);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &n2);
  int sum = n1 + n2;
  printf("The sum in hexadecimal: %X\n", sum);
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", (sum >> 3) & 1, (sum >> 5) & 1, (sum >> 7) & 1, (sum >> 11) & 1);
  printf("Bye!\n");

  return 0;
}
