#include <stdio.h>
#include "airplane.h"

int main() {
    AIRPLANE flights[MAX_FLIGHTS] = {
        {101, 8 * 60 + 30, 10 * 60 + 45, "new york", "boeing 737", 450.0},
        {102, 9 * 60 + 0, 11 * 60 + 30, "los angeles", "airbus A320", 550.0},
        {103, 14 * 60 + 15, 16 * 60 + 20, "chicago", "boeing 737", 300.0},
        {104, 23 * 60 + 50, 1 * 60 + 30, "miami", "boeing 777", 800.0},
        {105, 7 * 60 + 45, 9 * 60 + 15, "new york", "bombardier", 200.0}
    };
    int count = 5;

    printf("=== DEMONSTRATION OF AIRPLANE FUNCTIONS ===\n\n");

    printf("all flights:\n");
    for (int i = 0; i < count; i++) {
        print_flight(&flights[i]);
    }

    printf("\n--- flight with maximum duration ---\n");
    print_max_duration(flights, count);

    printf("\n--- flights to new york ---\n");
    print_by_direction(flights, count, "new york");

    printf("\n--- average distance ---\n");
    float avg = average_distance(flights, count);
    printf("average distance: %.2f km\n", avg);

    printf("\n--- count by aircraft model ---\n");
    count_by_model(flights, count);

    return 0;
}
