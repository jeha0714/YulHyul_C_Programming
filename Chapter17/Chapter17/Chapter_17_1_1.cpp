#include <stdio.h>

void MaxAndMin(int **ptr1, int **ptr2, int arr[], int size) {

	int arrSize = size;

	*ptr1 = *ptr2 = &arr[0];

	for (int i = 0; i < arrSize; i++) {
		if (**ptr1 < arr[i])
			*ptr1 = &arr[i];

		if (**ptr2 > arr[i])
			*ptr2 = &arr[i];
	}


}

int main(void) {

	int* maxPtr;
	int* minPtr;
	int arr[5];

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	MaxAndMin(&maxPtr, &minPtr, arr, (sizeof(arr)/sizeof(int)));

	printf("%d %d", *maxPtr, *minPtr);


	return 0;
}
