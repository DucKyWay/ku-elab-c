#include <stdio.h>
#include <stdlib.h>

int main() {
    int stamp;
    float price;
    int discount = 0;
    char stamp_in[10];
    char price_in[10];
    
    stamp = atoi(fgets(stamp_in, sizeof(stamp_in), stdin));
    price = atof(fgets(price_in, sizeof(price_in), stdin));

    if(stamp <= 0) {      discount = 0; }
    else if(stamp >= 9) { discount = 40;    stamp -= 9; }
    else if(stamp >= 6) { discount = 30;    stamp -= 6; }
    else if(stamp >= 3) { discount = 20;    stamp -= 3; }
    else if(stamp >= 2) { discount = 15;    stamp -= 2; }
    else if(stamp >= 1) { discount = 10;    stamp -= 1; }

    printf("You get %d percents discount.\n", discount);
    printf("Total amount due is %.2f Baht.\n", price - (price * discount * 0.01));
    printf("And you have %d stickers left.", stamp);
    
    return 0;
}