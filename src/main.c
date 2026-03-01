#include <stdio.h>
#include "airplane.h"

int main() {
    AIRPLANE flights[MAX_FLIGHTS];
    int count = 0;
    int choice;
    char dir_input[MAX_STR];

    do {
        printf("\n### MENU ###\n");
        printf("1. enter races data\n");
        printf("2. find maximum duration race\n");
        printf("3. find races by distination\n");
        printf("4. count average distance\n");
        printf("5. print races count by aircraft model\n");
        printf("0. exit\n");
        printf("enter command number... ");
        scanf("%d", &choice);

        printf("\n");
        switch (choice) {
            case 1:
                count = input_flights(flights, MAX_FLIGHTS);
                printf("saved. number of races = %d\n", count);
                break;
            case 2:
                print_max_duration(flights, count);
                break;
            case 3:
                printf("enter distination to find...");
                scanf("%49s", dir_input);
                print_by_direction(flights, count, dir_input);
                break;
            case 4:
                if (count > 0) {
                    float avg = average_distance(flights, count);
                    printf("average distance: %.2f км\n", avg);
                } else {
                    printf("no data.\n");
                }
                break;
            case 5:
                count_by_model(flights, count);
                break;
            case 0:
                printf("exit.\n");
                break;
            default:
                printf("invalid command number.\n");
        }
    } while (choice != 0);

    return 0;
}