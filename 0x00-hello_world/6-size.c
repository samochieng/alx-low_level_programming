#include <stdio.h>
/**
 * main - prints the sizes of various types
 * Description a C program that prints the size of various types
 * on the computer it is compiled and run on
 * Return: 0;
 */
int main(void)
{
printf("Size of a char:%lu\n byte(s)", sizeof(char));
printf("Size of an interger:%lu\n", sizeof(int));
printf("Size of a long interger:%lu\n", sizeof(long int));
printf("Size of a long,long interger:%lu\n", sizeof(long long int));
printf("Size of a float:%lu\n", sizeof(float));
return (0);
}
