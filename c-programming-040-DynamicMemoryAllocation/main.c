#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char* str = NULL;

	// initial memory allocation
	str = (char *)malloc(15 * sizeof(char));
	strcpy(str, "tomek");
	printf("String = %s, address = %p\n", str, str);

	// reallocating memory
	str = (char *)realloc(str, 25 * sizeof(char));
	strcat(str, ".com");
	printf("String = %s, address = %p\n", str, str);

	free(str);

	return 0;
}