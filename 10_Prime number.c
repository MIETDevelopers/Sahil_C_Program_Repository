#include<stdio.h>
int main()
{
	int=2, Number, count = 0;
	printf("\n Enter any number to check for Prime \n");
	while(i <= Number-2)
	{
		if(Number%i == 0)
    	{
    		count++;
    		break;
    	}
    	i++;
	}
	if(count == 0 && Number !=1 )
	{
		printf("\n %d is a Prime Number", Number);
	}
	else
	{
		printf("\n %d is not a Prime Number",Number);
	}
return 0;
}