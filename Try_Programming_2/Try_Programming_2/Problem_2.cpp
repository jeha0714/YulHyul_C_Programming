/*#include <stdio.h>

int main(void) {

	int num;
	int arr[100];

	printf("10���� ���� �Է�: ");
	scanf("%d", &num);

	int i = 0;
	while (1) {
		if (num % 2 == 0)
			arr[i] = 0;
		else
			arr[i] = 1;
		i++;
		num = num / 2;
		if (num == 0)
			break;
	}

	int k;


	int* ptr1 = arr;
	int* ptr2 = &arr[i-1];
	for (k = 0; k < (i / 2); k++) { //�Ųٷ� ������.
		int temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++; ptr2--;
	}

	for (k = 0; k < i; k++) { // ���.
		printf("%d", arr[k]);
	}

	return 0;
}*/