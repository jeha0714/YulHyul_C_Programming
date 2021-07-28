#include <stdio.h>

int main() {
    
    int ch;
    
    while (1) {
        
        
        ch = getchar();
        
        if (ch < 65 || ch > 122) {break;}
        if (ch >= 65 && ch <= 90) {putchar(ch + 32);}
        if (ch >= 97 && ch <= 122) {putchar(ch - 32);}
        
    }
        
    
    return 0;
}