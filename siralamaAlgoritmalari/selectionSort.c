#include <iostream>
#include <stdlib.h>

using namespace std;

void selectionSort(int arr[], int size) {
	int i, j, minIndex;
	for (i = 0; i < size; i++) {
		minIndex = i;
		for (j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		int temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
	printf("Sirali dizi: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n ");
}

int main() {
	int arr[10] = { 3,6,4,9,0,2,1,7,8,5 };
	int size = sizeof(arr) / 4;
	printf("Orijinal dizi: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n ");

	selectionSort(arr, size);


	return 0;
}
