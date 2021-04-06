// C program to perform the Euclidean distance between two points
// Author:Sahil Manni
#include <stdio.h> // pre process directive to include standard input output header file
#include<math.h> // pre process directive to include math header file
void two_dis(float x1, float y1, float x2, float y2) {
   float dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
   printf("Distance between 2 points are : %f", dis); // Print the distance between two points
   return 0;
}
// Start of main function body
int main() {
   float x1 = 4;
   float y1 = 9;
   float x2 = 5;
   float y2 = 10;
   two_dis(x1, y1, x2, y2);
   return 0;
}
