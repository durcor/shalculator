#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	float difference = atof(argv[1]);
	for (int i = 2; i < argc; ++i)
		difference -= atof(argv[i]);
	printf("%f\n",difference);
	return 0;
}
