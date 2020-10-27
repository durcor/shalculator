#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	long double result = atof(argv[1]);
	for (int i = 2; i < argc; ++i)
		result = pow(result, atof(argv[i]));

	printf("%Lf\n", result);
	return 0;
}
