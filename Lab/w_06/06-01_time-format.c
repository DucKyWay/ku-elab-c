#include <stdio.h>

int main() {

    char c, range;
    char time[10];
    int i = 0, hr = 0, m = 0;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c", &hr, &m, &range);

    hr == 12 ? hr = 0: hr;
    printf("Equivalent 24-hour time: %02d:%02d", (range == 'p' || range == 'P') ? hr += 12 : hr, m);

    return 0;
}