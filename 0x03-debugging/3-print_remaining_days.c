#include"main.h"

/**
 * print_remaining_days - prints how many days are lest in the year
 * @month: month in number format
 * @day: day of month
 * @year: year of reference
 */

void print_remaining_days(int month, int day, int year)

int (month (2), day (29), year (2000))
{
	if ((year % 100 == 0 && year % 400 == 0)n || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		ptintf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("nvalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
		}
	}
}
