// --------------------- File Inforation ---------------------
// File			: PrintNonMultiples.c
// Author		: Rune Dirk Willen
// Date			: 04-02-2026
// Description	: A simple program to print numbers that are
//				not multiples of the user input in C.
// -----------------------------------------------------------

// Include necessary headers and namespaces
#include <stdio.h>

// Main function
int main() {

	int input;
	int ii;

	printf("Enter a number: ");
	scanf_s("%d", &input);
	printf("Enter the maximum range: ");
	scanf_s("%d", &ii);

	for (int i = 1; i <= ii; i++) {

		if (i % input == 0) {
			continue;
		}

		printf("%d\n", i);
	}
}