/*Author: hoegel*/

/*main.c*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STR 50
#define MAX_FLIGHTS 12

typedef struct
{
	int id;
	int departure; //вылет в минутах от полуночи
	int arrival; //прибытие аналогично
	char direction[50];
	char aircraft_model[50];
	float distance;	
} AIRPLANE;

int main(void)
{
	return 0;
}
