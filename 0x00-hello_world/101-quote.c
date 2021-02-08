#include <stdio.h>
int main(void) {
	char x[] = "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(1,x,56);
	return 1;
}
