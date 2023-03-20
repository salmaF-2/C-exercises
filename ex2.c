#include <stdio.h>

/**
 * main - Entry point
 *  Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;
printf("Enter num1:");
scanf("%i", &num1);
printf("Enter num2:");
scanf("%i", &num2);
if (num1 > num2)
{
printf("Maximum = %i\n", num1);
}
if (num2 > num1)
{
printf("Maximum = %i\n", num2);
}
if (num1 == num2)
{
printf("numbers are equal\n");
}
return (0);
}
