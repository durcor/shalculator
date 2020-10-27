#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (argc < 2) {
		fprintf(stderr, "1 argument is required!\n");
		return 1;
	} else if (argc > 2) {
		fprintf(stderr, "Only 1 argument is allowed!\n");
		return 1;
	}

	long double product = 1;
	for (int i = atof(argv[1]); i != 0; --i)
		product = product * i;

	printf("%Lf\n", product);
	return 0;
}
