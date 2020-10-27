#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (argc < 3) {
		fprintf(stderr, "A sum can only be found from at least 2 numbers.\n");
		return 1;
	}

	long double sum = 0;
	for (int i = 1; i < argc; ++i)
		sum += atof(argv[i]);

	printf("%Lf\n", sum);
	return 0;
}