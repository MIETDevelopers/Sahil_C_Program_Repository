// Simple C program to display "Arithmetic operations"
// Author:Sahil Manni
#include <stdio.h> // Pre process directive to include standard input output header file
// Start of main function body
// And execution of program also begin
int main()
{
   int a=40,b=20, add,sub,mul,div,mod; // Suppose two integer variables a and b with initial values
   add = a+b; // Addition of 40 and 20
   sub = a-b; // Subtract 20 from 30
   mul = a*b; // Multiplying both 30 and 20
   div = a/b; // Dividing 30 by 20
   mod = a%b; // Calculation the remainder
   printf("Addition of a, b is : %d\n", add); // printing the addition of a and b
   printf("Subtraction of a, b is : %d\n", sub); // printing the subtraction of b from a
   printf("Multiplication of a, b is : %d\n", mul); // printing the multiplication of two number
   printf("Division of a, b is : %d\n", div); //printing the value of a/b
   printf("Modulus of a, b is : %d\n", mod); // print the calculation of the remainder
}
