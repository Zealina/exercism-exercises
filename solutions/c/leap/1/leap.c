#include "leap.h"
/**
 * leap_year - Check if a given year is a leap year
 * @year: The year
 *
 * Return: True if year is leap year, else false
 */
bool leap_year(int year) {
	if (year % 100 == 0)
		return (year % 400 == 0);
	return (year % 4 == 0);
}
