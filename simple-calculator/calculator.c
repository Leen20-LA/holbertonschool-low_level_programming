#include <stdio.h>

/**
 * main - Entry point for the simple calculator
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice = -1;
	int a, b, result;

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");

	while (choice != 0)
	{
		printf("Choice: ");
		if (scanf("%d", &choice) != 1)
		{
			break;
		}

		if (choice == 0)
		{
			printf("Bye!\n");
		}
		else if (choice == 1)
		{
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			result = a + b;
			printf("Result: %d\n", result);
		}
		else if (choice < 1 || choice > 4)
		{
			printf("Invalid choice\n");
		}
	}

	return (0);
}
