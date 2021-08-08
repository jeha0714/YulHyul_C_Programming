#include <stdio.h>

//구조체
typedef struct point
{
    int xpos;
    int ypos;
}Point;

typedef struct rectangle 
{
    Point first_Spot;
    Point second_Spot;
    
}Rectangle;


//함수
void area_of_Rectangle(Rectangle Spots) {
    
    int width = Spots.first_Spot.xpos >= Spots.second_Spot.xpos ? Spots.first_Spot.xpos - Spots.second_Spot.xpos : Spots.second_Spot.xpos - Spots.first_Spot.xpos;
    
    int length = Spots.first_Spot.ypos >= Spots.second_Spot.ypos ? Spots.first_Spot.ypos - Spots.second_Spot.ypos : Spots.second_Spot.ypos - Spots.first_Spot.ypos;
    
    printf("넓이는 %d\n", width * length);
}

void fputs_four_Spots (Rectangle Spots) {
    
    printf("%d %d\n", Spots.first_Spot.xpos, Spots.first_Spot.ypos);
    printf("%d %d\n", Spots.first_Spot.xpos, Spots.second_Spot.ypos);
    printf("%d %d\n", Spots.second_Spot.xpos, Spots.first_Spot.ypos);
    printf("%d %d\n", Spots.second_Spot.xpos, Spots.second_Spot.ypos);
}



int main() {
    
    Rectangle spot;
    
    printf("[0,0]에서 [100,100] 사이의 첫번째 점의 좌표를 입력하세요 ");
    scanf("%d %d", &spot.first_Spot.xpos, &spot.first_Spot.ypos);
    
    printf("[0,0]에서 [100,100] 사이의 두번째 점의 좌표를 입력하세요 ");
    scanf("%d %d", &spot.second_Spot.xpos, &spot.second_Spot.ypos);
    
    
    area_of_Rectangle(spot);
    fputs_four_Spots(spot);
    
    
    
    return 0;
}