#include<stdio.h>
int main(){
	int n,num,i;
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
 printf("Largest number is: %d",bigger);
 return 0;
}