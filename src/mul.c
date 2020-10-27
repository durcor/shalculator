#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (argc < 3) {
		fprintf(stderr, "A product can only be found with 2 or more numbers.\n");
		return 1;
	}

	long double product = atof(argv[1]);
	for (int i = 2; i < argc; ++i)
		product *= atof(argv[i]);

	printf("%Lf\n", product);
	return 0;
}
