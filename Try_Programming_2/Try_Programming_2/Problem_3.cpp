/*#include <stdio.h>

int main(void) {

	int arr[10];
	int num;

	printf("총 10개의 숫자 입력 \n");

	int i;
	int start = 0, back = 9;
	for (i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &num);

		if (num % 2 == 1) {
			arr[start] = num;
			start++;
		}
		else {
			arr[back] = num;
			back--;
		}
	}

	printf("배열 요소의 출력 : ");

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}


	return 0;
}*/