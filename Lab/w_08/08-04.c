#include <stdio.h>
#include <string.h>

typedef struct {
    char id[11];
    int mid;
    int final;
} Data;

char calculateGrade(char id[11], int mid, int final) {
    if(mid + final >= 80) return 'A';
    else if(mid + final >= 70) return 'B';
    else if(mid + final >= 60) return 'C';
    else if(mid + final >= 50) return 'D';
    else return 'F';
}

int main() {
    Data nisit[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter Student ID: ");
        scanf("%s", &nisit[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &nisit[i].mid);
        printf("Enter Student Final: ");
        scanf("%d", &nisit[i].final);
    }

    for(int i = 0; i < 5; i++) {
        printf("Student ID %s receives grade %c.\n", nisit[i].id, calculateGrade(nisit[i].id, nisit[i].mid, nisit[i].final));
    }
    return 0;
}