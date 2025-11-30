#include "difference_of_squares.h"
/**
 * sum_of_squares - Return the sum of squares of natural numbers
 * number: Stopping natural number
 *
 * Return: The sum of natural numbers
 */
unsigned int sum_of_squares(unsigned int number) {
	unsigned int result = number * (number + 1) * ((number << 1) + 1);

	return (result / 6);
}

/**
 * square_of_sum - Calculate the square of a sum from 1 to number
 * number: The stopping number
 *
 * Return: The square of the sum
 */
unsigned int square_of_sum(unsigned int number) {
	unsigned int result = (1 + number) * number;
	
	result = result >> 1;
	return (result * result);
}

/**
 * difference_of_squares - Calculate the difference between the sum of
 * 			squares and square of sums
 * number: The number to be used
 *
 * Return: The differnces of both sums
 */
unsigned int difference_of_squares(unsigned int number) {
	unsigned int sum_of_sqrs, sqr_of_sum;

	sum_of_sqrs = sum_of_squares(number);
	sqr_of_sum = square_of_sum(number);

	return (sqr_of_sum - sum_of_sqrs);
}

