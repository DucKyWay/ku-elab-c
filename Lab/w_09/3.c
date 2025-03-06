#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point {
    double x;
    double y;
} Point;

int main() {
    int n;
    printf("Number of Points: ");
    scanf("%d", &n);

    Point *points = (Point *)malloc(sizeof(Point)*n);
    for(int i = 0; i < n; i++) {
        printf("P%d.X: ", i + 1);
        scanf("%lf", &points[i].x);
        printf("P%d.Y: ", i + 1);
        scanf("%lf", &points[i].y);
    }

    printf("Length:\n");
    for(int i = 0; i < n - 1; i++) {
        double dX = points[i+1].x - points[i].x;
        double dY = points[i+1].y - points[i].y;
        double res = sqrt(dX * dX + dY * dY);

        printf("Length from P%d(%.2f, %.2f) to P%d(%.2f, %.2f) is %.2f\n", 
            i+1, points[i].x, points[i].y, i+2, points[i+1].x, points[i+1].y, res);
    }

    free(points);
    return 0;
}