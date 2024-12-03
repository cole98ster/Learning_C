#include <stdio.h>
#include <math.h>

int main(void) {
   // Declaring variables where i is the amount of days in the first experiment and x is the amount in the second set
    int UserValue, i = 1, x = 1, days = 50;

    // Ask the user what the population is
    do {
        printf("What is the initial population?\n");
        scanf("%d", &UserValue);

        if (UserValue < 100 || UserValue > 500) {
            printf("The initial population given is incorrect\n");
            //tells the user that the value picked is not allowed and reruns the initial population question
        }
    } while (UserValue < 100 || UserValue > 500);
    //declaring variables
    float TotalPopulation = 0;
    float UserPopulation = (float)UserValue;

    // First experiment
    for (i = 1; i <= 50; i++) {
        if (i % 3 == 0) {
            UserPopulation = 0.5 * UserPopulation;
            // the population decreases by 50%
        } else {
            UserPopulation = 1.66 * UserPopulation;
            // the population increases by 66%
        }
        UserPopulation = round(UserPopulation);
        TotalPopulation += UserPopulation;  // Add to the total
    }
    //telling the user the population after 50 days.
    printf("The population after %d days is %.f\n",days, UserPopulation);

    // Second Experiment
    do {
        UserPopulation = 0.84 * UserPopulation;
        // the population decreases by 16%
        x++;
        UserPopulation = round(UserPopulation);
        TotalPopulation += UserPopulation;  // Add to total after rounding
    } while (UserPopulation > 100);

    i -= 1;

    printf("After %d days the population will return below 100\n", i + x);

    // Calculate average population over the entire experiment
    float AverageCells = TotalPopulation / (i + x); // Use total number of days for the average

    // Output final results
    printf("On average there were %.2f cells in the colony\n", AverageCells);

    return 0;
}
