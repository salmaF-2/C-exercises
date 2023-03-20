#include <stdio.h>

/*Write a C program to input radius of a circle
 from user and find diameter, circumference and area 
 of the circle. How to calculate diameter, circumference and area of 
a circle whose radius is given by user in C programming.
 Logic to find diameter, circumference and area of a circle in C.*/
 
void main(){
	// D => Diameter = 2R
	// C => circumference = 2*pi*R
	// A => area = pi*R*R
	// R => radius 

   float R, D, C, A;
   #define pi 3.14;
   
   printf("get radius R from user \n");
   scanf("%f", &R);
   
   D = R * 2;
   C =  D * pi ;
   A = R * R * pi;
   
   
   printf(" Diameter = %f \n",D);
   printf(" circumference = %f \n",C);
   printf(" area = %f \n",A);



}
