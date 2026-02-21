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
