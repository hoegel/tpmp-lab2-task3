/*Author: hoegel*/

/*airplane.c*/
#include <stdio.h>
#include <string.h>
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
    printf("race %d: %02d:%02d -> %02d:%02d, direction: %s, aircraft: %s, distance: %.2f km\n",
           a->id, a->departure / 60, a->departure % 60, a->arrival / 60, a->arrival % 60, a->direction, a->aircraft_model, a->distance);
}

void minutes_to_time(int minutes, char *buffer) {
    int h = minutes / 60;
    int m = minutes % 60;
    sprintf(buffer, "%02d:%02d", h, m);
}

int flight_duration(const AIRPLANE *f) {
    int dur = f->arrival - f->departure;
    if (dur < 0) dur += 24 * 60;    //считаем разные сутки
    return dur;
}

void print_max_duration(const AIRPLANE flights[], int n) {
    if (n == 0) {
        printf("no races data\n");
        return;
    }
    int max_idx = 0;
    int max_dur = flight_duration(&flights[0]);
    for (int i = 1; i < n; ++i) {
        int dur = flight_duration(&flights[i]);
        if (dur > max_dur) {
            max_dur = dur;
            max_idx = i;
        }
    }
    printf("\nmaximum duration race:\n");
    print_flight(&flights[max_idx]);
    printf("duration: %d minutes (%02d:%02d)\n", max_dur, max_dur / 60, max_dur % 60);
}

void print_by_direction(const AIRPLANE flights[], int n, const char *direction) {
    int found = 0;
    printf("\nraces to '%s':\n", direction);
    for (int i = 0; i < n; ++i) {
        if (strcmp(flights[i].direction, direction) == 0) {
            print_flight(&flights[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("no such races\n");
    }
}

float average_distance(const AIRPLANE flights[], int n) {
    if (n == 0) return 0.0;
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += flights[i].distance;
    }
    return sum / n;
}

void count_by_model(const AIRPLANE flights[], int n) {
    if (n == 0) {
        printf("no data\n");
        return;
    }
    char models[MAX_FLIGHTS][MAX_STR];
    int counts[MAX_FLIGHTS] = {0};
    int unique_cnt = 0;

    for (int i = 0; i < n; i++) {
        const char *current = flights[i].aircraft_model;
        int found = -1;
        for (int j = 0; j < unique_cnt; j++) {
            if (strcmp(models[j], current) == 0) {
                found = j;
                break;
            }
        }
        if (found == -1) {
            strcpy(models[unique_cnt], current);
            counts[unique_cnt] = 1;
            unique_cnt++;
        } else {
            counts[found]++;
        }
    }

    printf("\nnumber of races for each destination:\n");
    for (int i = 0; i < unique_cnt; i++) {
        printf("%s: %d\n", models[i], counts[i]);
    }
}