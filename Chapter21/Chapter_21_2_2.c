#include <stdio.h>
#include <string.h>


int main() {
    
    char str1[20];
    char str2[20];
    char str3[40];
    
    
    fgets(str1, 20, stdin);
    fgets(str2, 20, stdin);
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';
    
    for (int i = 0 ; i < strlen(str2); i++) {
        
        str2[i] = str2[i + 1];
    }


    strncat(str3, str1, (int)strlen(str1) - 1);
    strncat(str3, str2, (int)strlen(str2));
    
    
    fputs(str3, stdout);
    
    
    
    
    
    return 0;
}