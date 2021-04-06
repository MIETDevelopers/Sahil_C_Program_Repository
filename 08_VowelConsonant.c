// A simple C program to perform the given alphabet is vowel or consonant
// Author:Sahil Manni
#include <stdio.h> // pre process directive to include strandard input output header file
int main() // Start of the main function body
{
    char ch;
    int lowercase_Vowel, uppercase_Vowel;
    printf("Please Enter an alphabet: \n"); // Print the character provide by the user
    scanf(" %c", &ch); // Read the character
   // to find the character is a lowercase vowel
    lowercase_Vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
   // to find the character is a uppercase vowel 
    uppercase_Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
  // to check character is alphabet or not
   if (lowercase_Vowel || uppercase_Vowel) {
    	printf("\n %c is a VOWEL.", ch);
	}
    else {
    	printf("\n %c is a CONSONANT.", ch);
	}
    return 0;
} // End of main function body
