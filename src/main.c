/*Author: hoegel*/

/*main.c*/
#include <stdio.h>
#include <stdlib.h>
#include "airplane.h"

int main(void)
{
	AIRPLANE flights[MAX_FLIGHTS];
	int count = 0;

	count = input_flights(flights, MAX_FLIGHTS);
	printf("done, number = %d\n", count);

	printf("### RACES ###\n");
	for(int i = 0; i < count; ++i)
	{
		print_flight(&flights[i]);
	}
}
