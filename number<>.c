/*Author para_sf*/
/* greater smaller number */
#include <stdio.h>

int main()
{
int number;
printf("Enter a number: \n");
scanf("%d", &number);

if (number<100)
    printf("Your number is smaller than 100");
else
    printf("Your number is greater than 100");
return 0;
}
