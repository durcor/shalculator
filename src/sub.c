#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (argc > 3) {
		fprintf(stderr, "A difference can only be calculated from 2 or more numbers!\n");
		return 1;
	}

	long double difference = atof(argv[1]);
	for (int i = 2; i < argc; ++i)
		difference -= atof(argv[i]);

	printf("%Lf\n",difference);
	return 0;
}
