#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (argc > 2) {
		fprintf(stderr, "Only one number can be squared at a time.\n");
		return 1;
	}

	long double num = atof(argv[1]);

	printf("%Lf\n", num * num);
	return 0;
}
