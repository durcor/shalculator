#include <stdio.h>
#include <stdlib.h>

float factorial(float n)
{
	float product = 1;
	for (int i = n; i != 0; --i)
		product = product * i;

	return product;
}

int main(int argc, char** argv)
{
	if (argc != 2) {
		printf("1 argument is required!\n");
		return 1;
	}

	printf("%f\n",factorial(atof(argv[1])));
	return 0;
}
