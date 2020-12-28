/*#include <stdio.h>

int main(void) {

	char arr[100];

	printf("문자열 입력: ");
	scanf("%s", arr);

	int check = 0, i; //check는 문자열의 문자 끝 index를 의미.
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
		printf("회문이 아닙니다.");
	else
		printf("회문 입니다.");

	return 0;
}*/