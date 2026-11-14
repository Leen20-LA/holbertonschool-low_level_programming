#include <stdio.h>

/*
 * Calculator policy: all arithmetic uses double-precision floating point.
 * This ensures consistent behavior (division can produce decimals) while
 * %g keeps integer results clean by stripping trailing zeros.
 */

/**
 * main - Entry point for the simple calculator
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice = -1;
	int a, b;
	double result;

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
			break;

		if (choice == 0)
		{
			printf("Bye!\n");
		}
		else if (choice >= 1 && choice <= 4)
		{
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);

			if (choice == 1)
				result = a + b;
			else if (choice == 2)
				result = a - b;
			else if (choice == 3)
				result = a * b;
			else
			{
				if (b == 0)
				{
					printf("Error: division by zero\n");
					continue;
				}
				result = (double)a / b;
			}
			printf("Result: %g\n", result);
		}
		else
		{
			printf("Invalid choice\n");
		}
	}

	return (0);
}
