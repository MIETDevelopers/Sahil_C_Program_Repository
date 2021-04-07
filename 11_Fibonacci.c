// A Simple C program to perform the Fibonacci sequence
// Author:Sahil Manni
#include<stdio.h> // pre process directive to include standard input output header file
int main() // Start of the main function body
{
	int i, n, t1 = 0,t2 = 1, nextTerm;
	printf("Enter the number of terms: "); // Enter the number for print the Fibonacci series
	scanf("%d", &n); // Read the number given by the user
	printf("Fibonacci Series: "); // Print the Fibonacci series
	for(i = 1; i <= n; ++i) {
		printf("%d, ", t1);
		// To Calculate the remaining terms
		nextTerm = t1 + t2; 
		t1 = t2;
		t2 = nextTerm; // Value of t1 and t2 changes as new term
	}
	return 0; // return number
} // End of the main function body
