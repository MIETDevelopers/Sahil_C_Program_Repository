#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number\n ");
	scanf("%d",&a);
	if((a%2)==0)
	printf("Entered number is even");
	else
	printf("Entered number is odd");
	return 0;
}