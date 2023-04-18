#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubbleSort.h"
#include "heapSort.h"
#define ARRAYLENGTH 20000

int main() {

	//Initalizing vairables and setting up both arrays
	clock_t startTime, endTime;
	int arr1[ARRAYLENGTH], arr2[ARRAYLENGTH], randomNum;
	for (int i = 0; i < ARRAYLENGTH; i++) {
		srand(time(0) + i);
		randomNum = (rand() % 100) + 1;
		arr1[i] = randomNum;
		arr2[i] = randomNum;
	}

	//Bubble sorting
	startTime = clock();
	bubbleSort(&arr1);
	endTime = clock();
	double bubbleSortTime = ((double)endTime - (double)startTime) / CLOCKS_PER_SEC;
	printf("Bubble Sort took: %2f seconds\n", bubbleSortTime);


	//Heap sorting
	startTime = clock();
	heapSort(&arr2, ARRAYLENGTH);
	endTime = clock();
	double heapSortTime = ((double)endTime - (double)startTime) / CLOCKS_PER_SEC;
	printf("Heap Sort took: %2f seconds", heapSortTime);
	return 0;
}