#include<stdio.h>
int main()
{
	char ch;
	printf("Enter Character\n");
	scanf("%c",&ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
	printf("\nCharacter is vowel");
}
else{
	printf("\nCharacter is Consonant");
}
 return 0;
}