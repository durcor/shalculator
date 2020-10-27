#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (argc < 3) {
		fprintf(stderr, "At least a dividend and a divisor is required.\n");
		return 1;
	}

	long double quotient = atof(argv[1]);
	for (int i = 2; i < argc; ++i)
		quotient /= atof(argv[i]);

	printf("%Lf\n", quotient);
	return 0;
}
