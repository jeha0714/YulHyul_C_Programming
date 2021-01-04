#include <stdio.h>

int main(void) {

	int arr[5][5] = { {0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0} };
	int i, j;

	for (i = 0; i < 4; i++) {

		printf("국어, 영어, 수학, 국사 순으로 성적 입력: ");
		
		for (j = 0; j < 4; j++) {
			
			scanf("%d", &arr[i][j]);

		}

	}

	for (i = 0; i < 4; i++) {

		for (j = 0; j < 4; j++) {
			arr[4][i] += arr[j][i];
		}

	}

	for (i = 0; i < 5; i++) {

		for (j = 0; j < 4; j++) {
			arr[i][4] += arr[i][j];
		}

	}

	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5; j++) {

			printf("%d ", arr[i][j]);

		}
		printf("\n");

	}


	return 0;
}