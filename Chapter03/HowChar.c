#include <stdio.h>

int main(void)
{
	char ch1 = 'A';
	char ch2 = 65;
	int ch3 = 'Z';
	int ch4 = 90;

	printf("%c %d \n", ch1, ch1); //A, 65
	printf("%c %d \n", ch2, ch2); //A, 65
	printf("%c %d \n", ch3, ch3); //Z, 90
	printf("%c %d \n", ch4, ch4); //Z, 90
	return 0;
}