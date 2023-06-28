#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - entry point
  *
  *Describe: a function that chooses
  *the number of kids to have with your partner
  *
  *Return: Always 0 (succes)
  */
int main(void)
{
	srand(time(NULL));

	char name[20];
	char partner[20];
	int numkids [] = {1, 2, 4, 6, 8, 10};
	int randomIndex = rand() % 6;
	int numofkids = numkids[randomIndex];


	printf("Enter your First Name: ");
	scanf("%s", name);

	printf("Enter your Partner's Name: ");
	scanf("%s", partner);

	printf("You would have %d kids by 40 years\n", numofkids);

	return (0);
}
