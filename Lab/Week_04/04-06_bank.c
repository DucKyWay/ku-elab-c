#include <stdio.h>
#include <stdlib.h>

int main() {

    char goal_in[100], today_in[100];
    float goal, money, total = 0;
    int day = 0;

    printf("Enter your goal amount: ");
    goal = atof( fgets(goal_in, 100, stdin) );
    while(total < goal) {
        printf("Enter money collected today: ");
        money = atof( fgets(today_in, 100, stdin) );
        total += money;
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", ++day, total, goal-total);
    }

    if(day == 1)    printf("Congratulations! You take %d day to reach your goal.\n", day);
    else            printf("Congratulations! You take %d days to reach your goal.\n", day);
    
    return 0;
}