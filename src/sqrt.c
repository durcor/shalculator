#include <stdio.h>
#include <stdlib.h>

/*
 * Returns an approximation of the square root of a given number using Newton's Method.
 * @param num The number to find the approximate square root of.
 * @param epsilon The decimal to approximate to.
 * 		- optional
 * 			- defaults to 1e-7
 * @return The approximate square root represented as a double.
 */

/*
 * Prints the square root of an input number to standard output.
 * @param argc 2 (num) or 3 (num, epsilon)
 * @param **argv num [1] and epsilon [2]
 * @return 0 if success or 1 if exception
 */
int main(int argc, char **argv)
{
	long double num = atof(argv[1]);
	long double epsilon;
	// Define epsilon as 1e-7, which will be overwritten if ./sqrt is
	// passed a different epsilon.
	if (argc == 3)
		epsilon = atof(argv[2]);
	else
		epsilon = 1e-7;
	// sqrt(0) = 0 and sqrt(1) = 1.
	if (num == 0 || num == 1) return num;
	// The sqrt of a number must be somewhere between 1 and the number itself.
	long double last_guess = num;
	long double next_guess = 1;
	// Continue looping until the margin of error is
	// within the specified (or pre-defined) limit.
	while (abs((int)(last_guess - next_guess)) > epsilon) {
		last_guess = next_guess;
		// Each new guess is found by finding the average of the
		// current guess and the input number divided by the current guess.
		next_guess = (last_guess + num / last_guess) / 2;
	}
	// Once the margin of error has been achieved, the most
	// accurate approximation has been stored to next_guess.
	printf("%Lf\n", next_guess);
	return 0;
}
