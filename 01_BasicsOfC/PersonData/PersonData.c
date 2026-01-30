// --------------------- File Inforation ---------------------
// File			: PersonData.c
// Author		: Rune Dirk Willen
// Date			: 30-01-2026
// Description	: A simple prgram to assign person data from 
//				user input in C.
// -----------------------------------------------------------

// Include necessary headers and namespaces
#include <stdio.h>

// Main function
int main() {

	char inputName[20];
	int inputAge;
	char inputGender[20];
	float inputHeight;
	float inputWeight;

	printf("Please provide your personal information:\n");
	printf("Name\t\t: ");
	scanf_s("%s", inputName, 20);
	printf("Age\t\t: ");
	scanf_s("%d", &inputAge);
	printf("Gender (M or F)\t: ");
	scanf_s("%s", &inputGender, 20);
	printf("Height (in cm)\t: ");
	scanf_s("%f", &inputHeight);
	printf("Weight (in kg)\t: ");
	scanf_s("%f", &inputWeight);


	printf("\n\nYou have entered the following:\n");
	printf("Name\t: %s \n", inputName);
	printf("Age\t: %d \n", inputAge);
	printf("Gender\t: %s \n", inputGender);
	printf("Height\t: %.1f cm\n", inputHeight);
	printf("Weight\t: %.1f kg\n", inputWeight);

	return 0;
}