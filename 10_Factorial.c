// A simple C program to perform the Factorial number
// Author name:Sahil Manni
#include<stdio.h> // pre process directive to include standard input output header file
long int multiplyNumbers(int n); // Function to find factorial of a given number
int main() // Start of the main function body 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
} // End of the main function body
