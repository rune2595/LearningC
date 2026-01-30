// --------------------- File Inforation ---------------------
// File			: ConditionCheck.c
// Author		: Rune Dirk Willen
// Date			: 30-01-2026
// Description	: A simple program to check user input in C.
// -----------------------------------------------------------

// Include necessary headers and namespaces
#include <stdio.h>

// Main function
int main() {
	int num;
	printf("Enter an integer: ");
	scanf_s("%d", &num);

	if (num > 0 && num % 2 == 0) {
		printf("The number is positive and even.\n");
	}
	else if (num > 0 && num % 2 != 0) {
		printf("The number is positive and uneven.\n");
	}
	else if (num < 0 && num % 2 == 0) {
		printf("The number is negative and even.\n");
	}
	else {
		printf("The number is negative and uneven.\n");
	}

	return 0;
}