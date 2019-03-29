
#include <stdio.h>

int main()

{

	int ch, i = 0;

	ch = getchar();

	if (ch == '}')

		printf("unmatched!");

	while (ch != EOF)

	{

		if (ch == '{')

			i++;

		if (ch == '}')

			i--;

		ch = getchar();

	}

	{

		if (i == 0)

			printf("matched!");

		else

			printf("unmatched!");



	}

	return 0;
}