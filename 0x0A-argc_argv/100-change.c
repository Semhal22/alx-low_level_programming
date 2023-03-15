#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arrays of arguments
 *
 * Return: 0 if success
 * 1 if not successful
 */
int main(int argc, char **argv)
{
	int money, i, cents;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	cents = 0;

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && money >= 0; i++)
	{
		while (money >= coins[i])
		{
			cents++;
			money -= coins[i];
		}
	}
	printf("%d\n", cents);
	return (0);
}
