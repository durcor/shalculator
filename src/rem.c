#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (argc < 3) {
		fprintf(stderr, "At least a dividend and a divisor is required.\n");
		return 1;
	}

	int remainder = atoi(argv[1]);
	for (int i = 2; i < argc; ++i)
		remainder %= atoi(argv[i]);

	printf("%i\n", remainder);
	return 0;
}
