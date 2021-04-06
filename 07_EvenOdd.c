// A simple C program  to perform number is even or odd
// Author:Sahil Manni
#include <stdio.h> // pre process directive to include standard input output header file
int main() // Start of the main function body
{
// Variable is to store the input number
    int num;
    printf("Enter an integer: "); // Enter any integer
    scanf("%d", &num); // Read the integer value
 //  true if num is perfectly divisible by 2  
    if(num % 2 == 0) 
        printf("%d is even.", num);
    else 
        printf("%d is odd.", num);
    return 0;
}
