// A Simple C program to show the number is prime or not
// Author:Sahil Manni
#include<stdio.h> // pre process directive to include standard input output header file
int main() // Start of the main function body
{
	int=2, Number, count = 0;
	printf("\n Enter any number to check for Prime \n"); // print the number which is given by the user to check the number is prime or not
	while(i <= Number-2) 
	{
		if(Number%i == 0)
    	{
    		count++; // Value increase after execute this statement
    		break;
    	}
    	i++;
	}
	// condition for prime or not prime number
	if(count == 0 && Number !=1 )
	{
		printf("\n %d is a Prime Number", Number); // print the number which is prime
	}
	else
	{
		printf("\n %d is not a Prime Number",Number); // print those number which are not prime
	}
return 0; // return number
} // End of the main function body
