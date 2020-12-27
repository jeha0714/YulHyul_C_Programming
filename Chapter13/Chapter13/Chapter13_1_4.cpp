/*#include <stdio.h>

int main(void) {

	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = arr, *ptr2 = &arr[5];
	int j;

	for (int i = 0; i < 3; i++) {
		j = *ptr1;
		arr[i] = *ptr2;
		arr[5 - i] = j;
		ptr1++; ptr2--;
	}



	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}*/