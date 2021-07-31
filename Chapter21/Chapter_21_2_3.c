#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int find_Space(char array[]) { //문자열 중 공백을 찾아주는 함수.
    
    for (int i = 0 ; i < strlen(array) ; i++) {
        
        if (array[i] == ' ') {return i;}
        
    }
    
    return 0;
}



void compare_Name(char array1[], char array2[], int array1_Empty_Space, int array2_Empty_Space) { //이름이 같은지 다른지 비교해주는 함수.
    
    char first_Name[100], second_Name[100];
    
    strncpy(first_Name, array1, array1_Empty_Space - 1);
    strncpy(second_Name, array2, array2_Empty_Space - 1);
    
    if (!strcmp(first_Name, second_Name)) {printf("둘의 성함이 같습니다.\n");}
    else {printf("둘의 성함이 다릅니다.\n");}
    
}



void compare_Age(char array1[], char array2[], int array1_Empty_Space, int array2_Empty_Space ) { //나이가 같은지 다른지 비교해주는 함수.
    
    int first_Age, second_Age;
    
    first_Age = atoi(&array1[array1_Empty_Space + 1]);
    second_Age = atoi(&array2[array2_Empty_Space + 1]);
    
    if (first_Age == second_Age) {printf("둘의 나이는 같습니다.\n");}
    else {printf("둘의 나이는 다릅니다.\n");}
    
    
}




int main() {
    
    
    char first_Source[110]; //첫번째 사람 정보 입력 배열
    char second_Source[110]; //두 번째 사람 정보 입력 배열.
    int first_Empty_Space, second_Empty_Space;
    
    fgets(first_Source, sizeof(first_Source), stdin);//first_Source에 이름 및 나이 공백을 기준으로 입력.
    fgets(second_Source, sizeof(second_Source), stdin);//second_Source에 이름 및 나이 공백을 기준으로 입력.
    
    
    first_Empty_Space = find_Space(first_Source); 
    second_Empty_Space = find_Space(second_Source);
    
    compare_Name(first_Source, second_Source, first_Empty_Space, second_Empty_Space);
    compare_Age(first_Source, second_Source, first_Empty_Space, second_Empty_Space);
    
    
    
    return 0;
}