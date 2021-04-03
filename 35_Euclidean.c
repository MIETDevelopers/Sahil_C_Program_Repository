#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, d,distance,E_distance;
	printf("Input A: ");
	scanf("%f", &a);
	printf("Input B: ");
	scanf("%f", &b);
	printf("Input C: ");
	scanf("%f", &c);
	printf("Input D: ");
	scanf("%f",&d);
	distance = ((c-a)*(c-a)+(d-b)*(d-b));
	E_distance=sqrt(distance);
	printf("Distance between the said points: %f",E_distance);
	printf("\n");
	return 0;
}