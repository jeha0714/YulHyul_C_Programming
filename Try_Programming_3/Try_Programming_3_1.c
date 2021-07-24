#include <stdio.h>


int spin_Array(int (*array)[4]) {
    
    int help_Num;
    
    //[0][0], [0][3], [3][3], [3][0]
    help_Num =(*(array))[0];
    (*array)[0] = (*(array + 3))[0]; (*(array + 3))[0] = (*(array + 3))[3]; (*(array + 3))[3] = (*(array))[3]; (*(array))[3] = help_Num;
    
    //[0][1], [1][3], [3][2], [2][0]
    help_Num =(*(array))[1];
    (*(array))[1] = (*(array + 2))[0]; (*(array + 2))[0] = (*(array + 3))[2]; (*(array + 3))[2] = (*(array + 1))[3]; (*(array + 1))[3] = help_Num;
    
    //[0][2], [2][3], [3][1], [1][0]
    help_Num =(*(array))[2];
    (*(array))[2] = (*(array + 1))[0]; (*(array + 1))[0] = (*(array + 3))[1]; (*(array + 3))[1] = (*(array + 2))[3]; (*(array + 2))[3] = help_Num;
    
    //[1][1], [1][2], [2][2], [2][1]
    help_Num =(*(array + 1))[1];
    (*(array + 1))[1] = (*(array + 2))[1]; (*(array + 2))[1] = (*(array + 2))[2]; (*(array + 2))[2] = (*(array + 1))[2]; (*(array + 1))[2] = help_Num;
}


int main() {
    
    int array_Num[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    
    for (int i = 0 ; i < 4; i++) {
        
        for (int j = 0 ; j < 4 ; j++) {
            
            for (int k = 0 ; k < 4 ;k++) {
                
                printf("%d ", (*(array_Num + j))[k]);
            }
            
            printf("\n");
        }
        
        spin_Array(array_Num);
        printf("\n");
        
    }
    
    
    
    return 0;
}