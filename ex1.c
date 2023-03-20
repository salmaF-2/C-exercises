#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
float r, D, c, A;
printf("Enter radius of circle: ");
scanf("%f", &r);
D = 2 * r;
c = 2 * M_PI * r;
A = M_PI * (r * r);
printf("Diameter of circle = %f units \n", D);
printf("Circumference of circle = %f units \n", c);
printf("Area of circle = %f sq. units ", A);
return (0);
}
