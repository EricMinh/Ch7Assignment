//7-1 convert uppercase to lowercase and visa versa.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char* argv[]) {
	int c;

	if (strcmp(argv[0], "lower") == 0) { while ((c = getchar()) != EOF) { putchar(tolower(c)); } }
	else { while ((c = getchar()) != EOF) { putchar(toupper(c)); } }

	return 0;
}