#include <stdio.h>
#include <string.h>


struct employee {
    
  char employee_Name[10];
  char employee_Num[15];
  int employee_Salaly;
    
};


void buffer_Out() {
    
    while(getchar() != '\n');
    
}



int main() {
    
    
    struct employee array_People[3];
    
    for (int i = 0 ; i < 3 ; i++) {
        
        scanf("%s %s %d", array_People[i].employee_Name, array_People[i].employee_Num, &array_People[i].employee_Salaly);
    }
    
    
    for (int i = 0 ; i < 3 ; i++) {
        
        printf("%s %s %d\n", array_People[i].employee_Name, array_People[i].employee_Num, array_People[i].employee_Salaly);
    }
    
    
    
    return 0;
}