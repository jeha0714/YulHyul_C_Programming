#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int check_Strike(int main_array[], int player_array[]) { //스트라이크 횟수를 찾는 함수.
    
    int strike_Num = 0;
    
    for (int i = 0 ; i < 3 ;i++) {if (main_array[i] == player_array[i]) {strike_Num++;}}
    
    
    return strike_Num;
}



int check_Ball(int main_array[], int player_array[]) { // 볼 횟수를 찾는 함수.
    
    int ball_Num = 0;
    
    for (int i = 0 ; i < 3 ; i++) {
        
        if ((main_array[i] == player_array[0]) || (main_array[i] == player_array[1]) || (main_array[i] == player_array[2])) {
            ball_Num++;
        }
        
    }
    
        
    return ball_Num;
}




int main() {
    
    int computer_3Num[3];

    printf("Start Game!\n");

    srand((int)time(NULL)); //컴퓨터의 숫자 선택.
    for (int i = 0 ; i < 3 ; i++) {computer_3Num[i] = rand() % 10;}
    
    
    for (int i = 0 ; ; i++) {
        
        int player_3Num[3];
        int strike_Num = 0, ball_Num = 0;
        
        printf("3개의 숫자 선텍: ");
        scanf("%d %d %d", &player_3Num[0], &player_3Num[1], &player_3Num[2]); //player의 숫자 선택
        
        strike_Num = check_Strike(computer_3Num, player_3Num);
        ball_Num = check_Ball(computer_3Num, player_3Num);
        
        printf("%d번째 도전 결과: %dstrike, %dball!!\n", i, strike_Num, ball_Num - strike_Num );
        
        if (strike_Num == 3) {break;}
    }
    
    
    printf("\nGame Over!\n");
    
    
    
    return 0;
}