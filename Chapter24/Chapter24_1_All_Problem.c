#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

	FILE* fp = fopen("mystory.txt", "wt");

	fputs("#이름: 윤성우 \n", fp);
	fputs("#주민번호: 900208-1012589 \n", fp);
	fputs("#전화번호: 010-1111-2222 \n", fp);

	fclose(fp);


	FILE* fpp = fopen("mystory.txt", "at");

	fputs("#즐겨먹는 음식: 짬뽕, 탕수육 \n", fpp);
	fputs("#취미: 축구 \n", fpp);

	fclose(fpp);


	

	FILE* fr = fopen("mystory.txt", "rt");


	for (int i = 0; i < 5; i++) {

		char array[200];

		fgets(array, sizeof(array), fr);

		printf(array);
	}


	fclose(fr);



	return 0;
}