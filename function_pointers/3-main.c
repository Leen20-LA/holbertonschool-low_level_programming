#include "3-calc.h"

/**
 * main - Entry point for the calculator
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or exit with specific codes on error
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*func)(int, int);

	/* القيد 1: التحقق من عدد المدخلات */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	/* القيد 2: التحقق من صحة العملية */
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* القيد 3: التحقق من القسمة على صفر */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(a, b);
	printf("%d\n", result);

	return (0);
}
