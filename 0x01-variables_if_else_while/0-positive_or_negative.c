#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main-assign a random number to the variable n each time it is excuted
 * if the no is greater than 0:is possitve,if the number is0: is zero
 * if the number is less than 0: is negative,followed by a new line
 * return:0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
