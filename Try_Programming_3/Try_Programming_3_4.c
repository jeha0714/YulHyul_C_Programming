#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    
    int seed;
    srand((int)time(NULL));
    
 
    printf("주사위 1의 결과 %d\n", rand() % 6 + 1);
    printf("주사위 2의 결과 %d\n", rand() % 6 + 1);

    
    return 0;
}