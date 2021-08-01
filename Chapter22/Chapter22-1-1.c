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
    
    
    struct employee first;
    
    fgets(first.employee_Name, 10, stdin);
    buffer_Out();
    
    fgets(first.employee_Num, 15, stdin);
    buffer_Out();
    
    scanf("%d", &first.employee_Salaly);




    fputs(first.employee_Name, stdout);printf("\n");
    fputs(first.employee_Num, stdout);printf("\n");
    printf("%d\n", first.employee_Salaly);
    
    
    
    
    return 0;
}