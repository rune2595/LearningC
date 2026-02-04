// --------------------- File Inforation ---------------------
// File			: PasswordCheck_doWhile.c
// Author		: Rune Dirk Willen
// Date			: 04-02-2026
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

	// Do-while loops always runs once
	do {
		printf("Please type your password: ");
		scanf_s("%s", input, 100);
		if (strcmp(password, input) == 0) {
			printf("Password correct!\n");
			isTrue = 1;
		}
		else {
			printf("Password incorrect!\n");
		}
	} while (!isTrue);

	return 0;
}