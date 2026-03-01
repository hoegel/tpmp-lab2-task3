/*Author: hoegel*/

/*airplane.h*/
#ifndef AIRPLANE_H
#define AIRPLANE_H

#define MAX_FLIGHTS 12
#define MAX_STR 50

typedef struct {
	int id;
	int departure;          // минуты от полуночи
	int arrival;            // минуты от полуночи
	char direction[MAX_STR];
	char aircraft_model[MAX_STR];
	float distance;
} AIRPLANE;

int input_flights(AIRPLANE flight[], int max_size);
void print_max_duration(const AIRPLANE flights[], int n);
void print_by_direction(const AIRPLANE flights[], int n, const char *direction);
float average_distance(const AIRPLANE flights[], int n);
void count_by_model(const AIRPLANE flights[], int n);

void minutes_to_time(int minutes, char *buffer);
int flight_duration(const AIRPLANE *f);

void print_flight(const AIRPLANE *a);

#endif
