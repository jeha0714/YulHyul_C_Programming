#include <stdio.h>

void DesSort(int arr[]) {

	int mainNum, subNum, lastIndex = 6;
	for (mainNum = 0; mainNum < 6; mainNum++) {
		
		for (subNum = 0; subNum <lastIndex ; subNum++) {
			if (arr[subNum] < arr[subNum + 1]) {
				int temp = arr[subNum];
				arr[subNum] = arr[subNum + 1];
				arr[subNum + 1] = temp;
			}
		}
		lastIndex--;

	}
}



int main(void) {

	int arr[7];

	int i;
	for (i = 0; i < 7; i++) {
		printf("ют╥б: ");
		scanf("%d", &arr[i]);
	}

	DesSort(arr);

	for (i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}