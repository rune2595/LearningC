// --------------------- File Inforation ---------------------
// File			: SumLoop.c
// Author		: Rune Dirk Willen
// Date			: 04-02-2026
// Description	: A simple program to print sum in C.
// -----------------------------------------------------------

// Include necessary headers and namespaces
#include <stdio.h>

// Main function
int main() {

	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++) {
		sum += i;
		printf("Current sum is: %d\n", sum);
	}

}