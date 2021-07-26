#include <stdio.h>

int main() {
    
    int N, num = 1; //N은 배열 크기, num은 입력될 숫자.
    int run_Twice = 1, handle = 2; //방향을 나타내는 변수로 2는 아래, 6은 오른쪽, 8은 위, 4는 왼쪽을 뜻함.
    int heng = 0, yul = 0; //heng은 행, yul은 열.
    scanf("%d", &N);
    int array_Snail[N][N];
    
    
    for (int i = 0 ; i < N; i++, num++, yul++) {
        
        array_Snail[0][yul] = num;
    }
    yul--;
    
    
    for (int i = N - 1; i > 0 ;) { //run을 두번씩 시행 한 후 i 감소.
    
        
        if(run_Twice == 1) {
            
            if (handle == 2) {
                
                for (int j = 0 ; j < i ; j++) {
                    heng++;
                    array_Snail[heng][yul] = num;
                    num++;
                    
                }
                handle = 4;
                
            }
            else if (handle == 4) {
                
                for (int j = 0 ; j < i ; j++) {
                    yul--;
                    array_Snail[heng][yul] = num;
                    num++;
                    
                }
                handle = 8;
                
            }
            else if (handle == 8) {
                
                for (int j = 0 ; j < i ; j++) {
                    heng--;
                    array_Snail[heng][yul] = num;
                    num++;
                    
                }
                handle = 6;
                
            }
            else if (handle == 6) {
                
                for (int j = 0 ; j < i ; j++) {
                    yul++;
                    array_Snail[heng][yul] = num;
                    num++;
                    
                }
                handle = 2;
                
            }
            
            run_Twice = 2;
        }
        else {// run_Twice = 2
            
            if (handle == 2) {
                
                for (int j = 0 ; j < i ; j++) {
                    heng++;
                    array_Snail[heng][yul] = num;
                    num++;
                    
                }
                handle = 4;
                
            }
            else if (handle == 4) {
                
                for (int j = 0 ; j < i ; j++) {
                    yul--;
                    array_Snail[heng][yul] = num;
                    num++;
                    
                }
                handle = 8;
                
            }
            else if (handle == 8) {
                
                for (int j = 0 ; j < i ; j++) {
                    heng--;
                    array_Snail[heng][yul] = num;
                    num++;
                    
                }
                handle = 6;
                
            }
            else if (handle == 6) {
                
                for (int j = 0 ; j < i ; j++) {
                    yul++;
                    array_Snail[heng][yul] = num;
                    num++;
                    
                }
                handle = 2;
                
            }
            
            run_Twice = 1; i--;
        }
        
    }
    
    
    for (int i = 0; i < N ; i++) {
        
        for (int j = 0 ; j < N; j++) {
            
            printf("%d ", array_Snail[i][j]);
        }
        
        printf("\n");
    }
    
    
    return 0;
}