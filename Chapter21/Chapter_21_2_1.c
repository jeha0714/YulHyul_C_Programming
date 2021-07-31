#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    
    
    char array[100];
    int sumAll = 0;
    
    fgets(array, 100, stdin);
    
    
    for (int i = 0 ; i < strlen(array); i++) {
        
        if (array[i] >= 48 && array[i] <= 57) {
            
            sumAll += (array[i] - 48);
        }
    }
    
    
    printf("%d", sumAll);
    
    
    
    
    return 0;
}