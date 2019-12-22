#include <iostream>
#include <stdlib.h>

using namespace std;

void insertionSort(int arr[], int size) {
	int i, j, element;
	for (i = 1; i < size; i++) {
		element = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > element) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j + 1] = element;
			
	}
	printf("Sirali dizi: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n ");
}
int main() {
	int arr[10] = {3,6,4,9,0,2,1,7,8,5};
	int size = sizeof(arr) / 4;
	printf("Orijinal dizi: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n ");

	insertionSort(arr,size);
	

	return 0;
}
