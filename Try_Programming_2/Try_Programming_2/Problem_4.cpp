/*#include <stdio.h>

int main(void) {

	char arr[100];

	printf("���ڿ� �Է�: ");
	scanf("%s", arr);

	int check = 0, i; //check�� ���ڿ��� ���� �� index�� �ǹ�.
	for (i = 0; ; i++) {
		if (arr[i] == '\0') {
			check = i-1;
			break;
		}
	}
	
	int start = 0, back = check;
	int code = 0;
	for (i = 0; i < (check / 2); i++) {
		if (arr[start] != arr[back]) {
			code = 1;
			break;
		}
			start++; back--;
	}

	if (code == 1)
		printf("ȸ���� �ƴմϴ�.");
	else
		printf("ȸ�� �Դϴ�.");

	return 0;
}*/