#include <stdlib.h>
#include <stdbool.h>
#define ARRAYLENGTH 20000

//Swaps two elements in an array
void swap(int array[], int index) {
	int num = array[index];
	array[index] = array[index + 1];
	array[index + 1] = num;
}

void bubbleSort(int* array) {
	int iterationCount;
	int i;

	//Loop that goes until no more changes are made
	do {
		iterationCount = 0;
		for (i = 0; i < ARRAYLENGTH- 1; i++) {
			if (array[i] > array[i+1]) {
				swap(array, i);
				iterationCount++;
			}
		}
	} while (iterationCount != 0);
}