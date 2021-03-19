#include<stdio.h>
int main()
{
	float width,length,Area;
	printf("\n Enter the width of a Rectangle : ");
	scanf("%f",&width);
	printf("\n Enter the length of a Rectangle : ");
	scanf("%f",&length);
	Area=length * width;
	printf("\n Area of Rectangle= %.2f",Area);
	return 0;
}