#include <stdio.h>

int main() {

    char c, range;
    char time[10];
    int i = 0, hr = 0, m = 0;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    while((c = getchar()) != '\n' && c != -1)
        time[i++] = c;
    time[i] = '\0';

    for(i = 0; time[i] != ':'; i++) // hr
        hr = hr * 10 + (time[i] - '0');
    for(int j = i + 1; time[j] != ' '; j++) // m
        m = m * 10 + (time[j] - '0');
    range = time[i + 4]; // range

    hr == 12 ? hr = 0: hr;
    printf("Equivalent 24-hour time: %02d:%02d", (range == 'p' || range == 'P') ? hr += 12 : hr, m);

    return 0;
}