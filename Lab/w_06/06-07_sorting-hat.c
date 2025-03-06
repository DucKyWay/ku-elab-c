#include <stdio.h>
// อยากเป็น กริฟฟินดอร์
void removeTarget(int *array, int size, int target);

int main()
{
	int num, count, target, i;

	scanf("%d", &num);
	scanf("%d", &count);

	int numbers[num];
	int *numbersPtr = &numbers[0];

	// initialize array numbers from 1 to num by numbersPtr
	for (i = 1; numbersPtr < &numbers[num]; numbersPtr++, i++) {
		*numbersPtr = i;
	}

	// loop through count 
	for (i = 0; i < count; i++) {
		scanf("%d", &target);
		removeTarget(&numbers[0], num, target);
	}

	numbersPtr = &numbers[0];

	// print elements in numbers using numberPtr
	for (numbersPtr = &numbers[0]; numbersPtr < &numbers[num]; numbersPtr++) {
		printf("%d ", *numbersPtr);
	}
	puts("");
	return 0;
}

// remove target from array by pointer *array and append last position by 0
void removeTarget(int *array, int size, int target) {

    int i, found = 0;
    for (i = 0; i < size; i++) {
        if (*(array + i) == target) {
            found = 1;
        }
        if (found && i < size - 1) {
            *(array + i) = *(array + i + 1);
        }
    }
    if (found) {
        *(array + size - 1) = 0;
    }
}