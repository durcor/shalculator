#include <stdio.h>
#include <stdlib.h>

long double fib(int n, long double cur, long double pre)
{
	if (n == 1)
		return cur;
	else
		return fib(n - 1, cur + pre, cur);
}

int main(int argc, char** argv)
{
	if (argc != 2) {
		printf("1 argument is required!\n");
		return 1;
	}

	printf("%Lf\n", fib(atoi(argv[1]), 1, 0));
	return 0;
}
