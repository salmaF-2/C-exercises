#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
float x;
printf("Enter number:");
scanf("%f", &x);
switch (x > 0)
{
case 1:
printf("%f is positive\n", x);
break;
case 0:
switch (x < 0)
{
case 1:
printf("%f is negative\n", x);
break;
case 0:
printf("%f is zero\n", x);
break;
}
break;
}
return (0);
}
