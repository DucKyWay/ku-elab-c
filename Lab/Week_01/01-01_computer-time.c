#include <stdio.h>

int main() {
    int computer_time;
    scanf("%d", &computer_time);

    // int computer_time = 785;
    int day = 0; 
    int hr = 0; 
    int min = 0;

    hr = computer_time / 60;
    min = computer_time % 60;
    if(hr >= 24) {
        day = hr / 24;
        hr = hr % 24;
    }
    
    printf("It is %d days %d hours and %d minutes.", day, hr, min);
    return 0;
}