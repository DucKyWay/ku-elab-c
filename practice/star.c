#include <stdio.h>

int main() {
    int layer;
    scanf("%d", &layer);

    for(int i = 0; i < layer; i++) {
        for(int j = 0; j < (layer%2 == 0? layer/2: (layer/2)-1); j++) {
            printf("%d", j);
            if(layer % 2 == 0) {
                if(j == layer % 2) {
                    printf("-");
                } else {
                    printf("*");
                }
            } else {
                
            }
        }
        for(int j = (layer%2 == 0? layer/2 - 2: (layer/2)-1); j < layer; j++) {
            printf("%d", j);
            // if() {
                
            // }
        }
        printf("\n");
    }
    return 0;
}