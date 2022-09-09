#include <stdio.h>
/**
 * main-entry point
 * return- end if okay
*/
int main(void)
{
	int sizeof(char) = 1;
	int sizeof(int) = 4;
	int sizeof(longint) = 4;
	int sizeof(longlongint) = 8;
	int sizeof(float) = 4;
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)]n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %i byte(s)\n", sizeof(longlongint));
	printf("Size of a float: %i byte(s)\n", sizeof(float);
	return (0);
}
