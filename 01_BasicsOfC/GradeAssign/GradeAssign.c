// --------------------- File Inforation ---------------------
// File			: GradeAssign.c
// Author		: Rune Dirk Willen
// Date			: 30-01-2026
// Description	: A simple prgram to assign grades from user
//				input in C.
// -----------------------------------------------------------

// Include necessary headers and namespaces
#include <stdio.h>

// Main function
int main() {

	char inputName[] = "Bob";
	int inputAge = 18;
	char inputGrade = 'B';
	double inputGPA = 3.7;
	
	printf("Student information:\n");
	printf("Name:\t %s \n", inputName);
	printf("Age:\t %d \n", inputAge);
	printf("Grade:\t %c \n", inputGrade);
	printf("GPA:\t %.1f \n", inputGPA);


	return 0;
}