#include <iostream>
#include <stdlib.h>

using namespace std;


void swap(int* k, int* m) {
	int temp = *k;
	*k = *m;
	*m = temp;
}

void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 1; j < size - i; j++) {
			if (arr[j - 1] > arr[j])
				swap(&arr[j - 1], &arr[j]);
		}
	}
	printf("Siralanmis dizi: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int arr[10] = { 3,6,4,9,0,2,1,7,8,5 };
	int size = sizeof(arr) / 4;
	printf("Orijinal dizi: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n ");

	bubbleSort(arr, size);


	return 0;
}
