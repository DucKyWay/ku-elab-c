#include <stdio.h>

typedef struct coord
{
    /* data */
    int x, y;
} Coordinate;

struct rectangle {
    /* data */
    struct coord topleft;
    struct coord bottemright;
};


int main() {

    struct coord first, second;
    struct rectangle topleft, bottomright;

    struct rectangle mybox;

    first.x = 50;
    second.y = 100;


    mybox.topleft.x = 0; 
    mybox.topleft.y = 10; 
    mybox.bottemright.x = 100; 
    mybox.bottemright.y = 200 ;

    return 0;
}