/*Author: hoegel*/

/*airplane.c*/
#include <stdio.h>
#include "airplane.h"

int input_flights(AIRPLANE flights[], int max_size)
{
	int n;
	printf("enter number of races (max number = %d)... ", max_size);
	scanf("%d", &n);
	if(n > max_size || n < 0)
	{
		printf("invalid input! number must be between 0 and %d!", max_size);
		return 1;
	}

	for(int i = 0; i < n; ++i)
	{
		printf("\n-- race number %d --\n", i + 1);
		printf("race id... ");
		scanf("%d", &flights[i].id);

		int h, m;
		printf("departure time (hours and minutes space devided)... ");
 		scanf("%d %d", &h, &m);
		flights[i].departure = h * 60 + m;

                printf("arrival time (hours and minutes space devided)... ");
                scanf("%d %d", &h, &m);
                flights[i].arrival = h * 60 + m;

		printf("direction... ");
		scanf("%49s", flights[i].direction);

                printf("aircraft model... ");
                scanf("%49s", flights[i].aircraft_model);

                printf("distance (km)... ");
                scanf("%f", &flights[i].distance);
	}
	return n;
}

void print_flight(const AIRPLANE *a) {
    printf("race %d: %d -> %d, direction: %s, aircraft: %s, distance: %.2f km\n",
           a->id, a->departure, a->arrival, a->direction, a->aircraft_model, a->distance);
}
