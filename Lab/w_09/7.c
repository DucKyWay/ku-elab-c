#include <stdio.h>

double findAverage(char *filename) {
    
    FILE *file = fopen(filename, "r");
    if(file == NULL) return 0;
    double sum = 0;
    int count = 0, score;

    while(fscanf(file, "%d", &score) == 1) {
        sum += score;
        count++;
    } fclose(file);

    if(count == 0) return 0;
    return sum / count;
}

int main() {

    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}
