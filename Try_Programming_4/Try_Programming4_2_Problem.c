#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char * book_Name[50];
    char book_Illustrator[50];
    int book_Page;

}Book_Info;



int main(void) {

    Book_Info * books[3] ;

    printf("도서 정보 입력\n");

    for (int i = 0; i < 3; i++) {

        books[i] = (Book_Info*)malloc(sizeof(Book_Info));

        printf("저자: ");
        scanf("%s", books[i]->book_Name);
        getchar();

        printf("제목: ");
        fgets(books[i]->book_Illustrator, 50, stdin);
        books[i]->book_Illustrator[strlen(books[i]->book_Illustrator) - 1] = '\0';

        printf("페이지 수: ");
        scanf("%d", &books[i]->book_Page);

    }


    printf("\n도서 정보 출력\n");

    for (int i = 0; i < 3; i++) {
        printf("book%d\n", i + 1);
        printf("저자: %s\n", books[i]->book_Name);
        printf("제목: %s\n", books[i]->book_Illustrator);
        printf("페이지 수: %d\n", books[i]->book_Page);
    }

    free(books[0]);
    free(books[1]);
    free(books[2]);


	return 0;
}