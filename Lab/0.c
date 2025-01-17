#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {

// -------write-code-here-------

        for(int j = 1, k = 0, c = 0; j < m && k < numPrisoners; j++, k++) {
            if(j == m) {
                killed[c++] = prisoners[k];
            }
        }

// -----------------------------
        
		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);

	}

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
	return 0;
}

void removeKilled(int *array, int size, int killedPrisoner) {
    // implement
    int pos = 0, j;
    for(j = 0; j < size; j++) {
        if(*array + j == killedPrisoner) {
            pos = j;
            break;
        }
    }
    for(; j < size - 1; j++) {
        array[j] = *array + j + 1;
    } array[size - 1] = '\0';
}