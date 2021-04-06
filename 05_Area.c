// A simple C program to perform area of circle,Rectangle,Triangle,Square
// Author:Sahil Manni
//pre process directive to include standard input output header file
#include <stdio.h>
 
int main() // start of main function body
{
 // declare variables
    int fig_code;
    float side, base, length, breadth, height, area, radius;
 
    printf("-------------------------\n"); // Print the new line
    printf(" 1 --> Circle\n"); // User enter 1 gives the area of circle
    printf(" 2 --> Rectangle\n"); // User enter 2 gives the area of rectangle
    printf(" 3 --> Triangle\n"); //User enter 3 gives the area of triangle
    printf(" 4 --> Square\n"); // User enter 4 gives the area of Square
    printf("-------------------------\n"); // print new line
    printf("Enter the Figure code\n"); // Ask user to enter the Figure Code
    scanf("%d", &fig_code); // Read the code
    switch(fig_code)
    {
    case 1:
        printf("Enter the radius\n"); // Ask the user to enter the radius 
        scanf("%f", &radius); // store the user into variable circle radius
        // Calculate and display Area
        area = 3.142 * radius * radius; 
        printf("Area of a circle = %f\n", area); 
        break;
    case 2:
        printf("Enter the breadth and length\n"); // Ask user to enter the length and breadth
        scanf("%f %f", &breadth, &length); // Store the user input into variable Rectangle length and breadth
        // Calculate and display area of Rectangle
        area = breadth * length;
        printf("Area of a Reactangle = %f\n", area);
        break;
    case 3:
        printf("Enter the base and height\n"); // Ask user to enter the base and height
        scanf("%f %f", &base, &height); // Store the user input variable Triangle_Base_Height
        // Calculate and display Area of Triangle
        area = 0.5 * base * height;
        printf("Area of a Triangle = %f\n", area);
        break;
    case 4:
        printf("Enter the side\n"); //Ask user to Enter the side of Square
        scanf("%f", &side); // Store the user input variable Square_Side
        // Calculate and display rthe area of square
        area = side * side;
        printf("Area of a Square=%f\n", area);
        break;
    default:
        printf("Error in figure code\n");
        break;
    }
}
