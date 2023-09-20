#include <stdio.h>
#include <time.h>

/**
  * main - generates random valid passwords for the program 101-crackme.
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int a, b, c;
	int passwd[100];

	b = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		passwd[a] = rand() % 78;
		b += (passwd[a] + '0');
		putchar(passwd[a] + '0');
		if ((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b = b + c;
			putchar(c + '0');
			break;
		}
	}

	return (0);
}

