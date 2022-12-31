#include <stdio.h>
int main ()
{
float c, F ;
printf("Enter a celsius :");
scanf("%f", &c);
F = (c * 1.8)+ 32 ;
printf("Fahrenheit %f \n", F);
return 0 ;
}