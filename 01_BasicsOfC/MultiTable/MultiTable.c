// --------------------- File Inforation ---------------------
// File			: MultiTable.c
// Author		: Rune Dirk Willen
// Date			: 30-01-2026
// Description	: A simple program to print multiplication
//				tables based on user input in C.
// -----------------------------------------------------------

// Include necessary headers and namespaces
#include <stdio.h>

// Main function
int main() {

	int input;
	int ii = 1;

	printf("Enter a number to print its multiplication table: ");
	scanf_s("%d", &input);

	while (ii <= 10) {
		printf("%d * %d = %d\n", ii, input, ii * input);
		ii++;
	}

	return 0;
}