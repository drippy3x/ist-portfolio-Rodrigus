#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;

	printf("How old are you: ");
	scanf("%i", &age);
	printf("What is your gpa: ");
	scanf("%f", &gpa);
	printf("what is your grade number: ");
	scanf(" %c", &grade);

	printf("age: %i\n", age);
	printf("gpa: %f\n", gpa);
	printf("grade number: %c\n", grade);

	return 0;
}
