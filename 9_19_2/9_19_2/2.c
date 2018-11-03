#include <stdio.h>
int main()
{
	int i, n;
	for (i = 100; i<200; i++)
	{

		for (n = 2; n<i; n++)

		if (i%n == 0) break;
		if (n == i) printf("%d", i);
	}

	return 0;
}