#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, amount, count = 0;
    int i, j;
    char *fake = NULL; 

    scanf("%d", &size);
    scanf("%d", &amount);
    char **chain = (char **)malloc(sizeof(char *) * amount);

    for (i = 0; i < amount; i++) {
        chain[i] = (char *)malloc(sizeof(char) * (size + 1));
        scanf("%s", chain[i]);
    }

    for (i = 0; i < amount - 1; i++) {
        count = 0;
        for (j = 0; j < size; j++) {
            if (chain[i][j] != chain[i + 1][j])
                count++;
        }
        if (count > 2) {
            if (fake) free(fake);
            fake = (char *)malloc(sizeof(char) * (size + 1));

            for (j = 0; j < size; j++)
                fake[j] = chain[i][j];
            fake[size] = '\0';
            break;
        }
    }

    if (fake) {
        printf("%s\n", fake);
        free(fake);
    } else printf("%s", chain[i]);
    for (i = 0; i < amount; i++)
        free(chain[i]);
    free(chain);
    return 0;
}
