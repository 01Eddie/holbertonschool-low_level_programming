#include <stdio.h>
int main()
{
	int integerType; 
	char charType;
	float floatType; 
	double doubleType;
	printf("Size of a char is: %ld\n", sizeof(charType)," byte(s)");
	printf("Size of an int is: %ld\n", sizeof(integerType)," byte(s)");
	printf("Size of a long int is: %ld\n", sizeof(doubleType)," byte(s)");
	printf("Size of a long long is: %ld\n", sizeof(doubleType)," byte(s)");
	puts("Size of a float is: %ld\n", sizeof(floatType), " byte(s)");
	return (0);
}
