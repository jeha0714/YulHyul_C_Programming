#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void check_Size_File(FILE* fp) {

	int size = 0;
	FILE* fpp = fp;

	fseek(fpp, -1, SEEK_END);
	size = (ftell(fp) + 1);
	
	fseek(fp, 0, SEEK_SET);

	printf("%ld", size);
}



int main(void) {


	FILE* fp = fopen("hello.txt", "wb");

	fputs("123456789", fp);
	fputs("987654321", fp);
	fputs("135792468", fp);

	fclose(fp);

	FILE* fpp = fopen("hello.txt", "rb");

	check_Size_File(fpp);
	check_Size_File(fpp);
	check_Size_File(fpp);

	fclose(fpp);


	return 0;
}


