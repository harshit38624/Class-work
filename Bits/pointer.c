#include <stdio.h>
int main() {
	unsigned int a = 128;
	int *b = &a;
	char *c = &a;

	printf("%d\n", *b);
	printf("%d\n", *c);
}
