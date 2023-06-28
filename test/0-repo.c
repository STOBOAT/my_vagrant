#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry point
  *Description: Prints out the number from user
  *Return: 0 Always
  */

int main(void)
{
	int age;

	printf("Enter your age:");
	scanf("%d", &age);
	if (age <= 60 && age >= 18)
	{
		printf("Welcome to the club!\n");
	}
	else
	{
		printf("You are too old for this\n");
	}
	return (0);
}
