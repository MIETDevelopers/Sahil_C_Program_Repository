// A Simple C program to perform Maximum of n numbers
// Author:Sahil Manni
#include<stdio.h> // pre process directive to include standard input output header file
int main() // Start of the main function body
{
	int n,num,i; // 
	int bigger;
	printf("Enter the values of n: ");
	scanf("%d",&n);
	printf("Number %d: ",1);
	scanf("%d",&bigger);
	for(i=2;i<=n;i++) {
	printf("Number %d: ",i);
	scanf("%d",&num);
	if(bigger<num)
	bigger=num;
 }
 printf("Largest number is: %d",bigger); // print the largest number form the series
 return 0; // Return number
} // End of the main function body
