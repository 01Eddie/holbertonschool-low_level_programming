#include <stdio.h>
#include <unistd.h>

int main(void) 
{
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, x, 59);
	return 1;
}
