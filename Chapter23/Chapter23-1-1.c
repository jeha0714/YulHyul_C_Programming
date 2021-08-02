#include <stdio.h>


typedef struct point
{
    int xpos;
    int ypos;
    
}Point;


void SwapPoint (Point * ptr_pos1, Point * ptr_pos2) {
    
    int change_Num;
    
    //xpos먼저 swap
    change_Num = (ptr_pos1 -> xpos);
    (ptr_pos1 -> xpos) = (ptr_pos2 -> xpos); (ptr_pos2 -> xpos) = change_Num;
    
    //다음은 ypos swap
    change_Num = (ptr_pos1 -> ypos);
    (ptr_pos1 -> ypos) = (ptr_pos2 -> ypos); (ptr_pos2 -> ypos) = change_Num;
    
}




int main() {
    
    Point pos1 = {2,4};
    Point pos2 = {5,7};
    
    SwapPoint(&pos1, &pos2);
    
    printf("%d %d\n", pos1.xpos, pos1.ypos);
    printf("%d %d\n", pos2.xpos, pos2.ypos);
    
    
    return 0;
}