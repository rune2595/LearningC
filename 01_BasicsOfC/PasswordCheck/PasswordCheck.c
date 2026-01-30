// --------------------- File Inforation ---------------------
// File			: PasswordCheck.c
// Author		: Rune Dirk Willen
// Date			: 30-01-2026
// Description	: A simple program to check password in C.
// -----------------------------------------------------------

// Include necessary headers and namespaces
#include <stdio.h>
#include <string.h>

// Main function
int main() {
	
	char password[] = "Cake123";
	int isTrue = 0;
	char input[100];

	while (isTrue == 0) {
		printf("Please type your password: ");
		scanf_s("%s", input, 100);

		if (strcmp(password, input) == 0) {
			isTrue = 1;
		}
		else {
			printf("Password is wrong! Try again.\n");
		}
	}

	return 0;
}