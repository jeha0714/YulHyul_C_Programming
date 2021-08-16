#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct
{
    char book_Name[50];
    char book_Illustrator[50];
    int book_Page;

}Book_Info;




int main(void) {

    Book_Info book[3];

    printf("도서 정보 입력\n");

    for (int i = 0; i < 3; i++) {
        printf("저자: ");
        scanf("%s", book[i].book_Name);
        getchar();

        printf("제목: ");
        fgets(book[i].book_Illustrator, 50, stdin);
        book[i].book_Illustrator[ strlen(book[i].book_Illustrator) - 1] = '\0';

        printf("페이지 수: ");
        scanf("%d", &book[i].book_Page);
    }


    printf("\n도서 정보 출력\n");

    for (int i = 0; i < 3; i++) {
        printf("book%d\n", i + 1);
        printf("저자: %s\n", book[i].book_Name);
        printf("제목: %s\n", book[i].book_Illustrator);
        printf("페이지 수: %d\n", book[i].book_Page);
    }


    return 0;
}