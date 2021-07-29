#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    
    int how_Many_Win = 0, how_Many_begin = 0;
    
    
    for (int i = 0; ;i++) {
        
        int choose_Num, computer_Num;
        srand((int)time(NULL)); //현재 시간을 이용해서 씨드 설정.
        char array_Player[10], array_Computer[10];
        
        
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &choose_Num);
        
        if (choose_Num == 1) {strcpy(array_Player, "바위");}
        else if (choose_Num == 2) {strcpy(array_Player, "가위");}
        else if (choose_Num == 3) {strcpy(array_Player, "보");}
        
        
        computer_Num = rand() % 3 + 1;
        
        if (computer_Num == 1) {strcpy(array_Computer, "바위");}
        else if (computer_Num == 2) {strcpy(array_Computer, "가위");}
        else if (computer_Num == 3) {strcpy(array_Computer, "보");}
        
        
        if (choose_Num == computer_Num) {
            
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n", array_Player, array_Computer);
            how_Many_begin++;
        }
        else if ((choose_Num == 1 && computer_Num == 2) || (choose_Num == 2 && computer_Num == 3) || (choose_Num == 3 && computer_Num == 1)) {
            
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다!\n", array_Player, array_Computer);
            how_Many_Win++;
        }
        else {
            
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n", array_Player, array_Computer);
            break;
        }
        
        
    }
    
    
    printf("\n게임의 결과 : %d승 %d무", how_Many_Win, how_Many_begin);
    
    
    return 0;
}