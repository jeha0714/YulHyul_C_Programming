#include <stdio.h>

#define sum_All(A, B, C) ((A) + (B) + (C))
#define multiple_All(A, B, C) ((A) * (B) * (C))
#define PI 3.14
#define AREA(R) ((R)*(R)*(PI))
#define MAX(A,B) A > B ? A : B


int main(void) {

	printf("3+4+5 = %d\n", sum_All(3,4,5));
	printf("3*4*5 = %d\n", multiple_All(3,4,5));
	printf("반지름이 3인 원의 넓이 = %f\n", AREA(3));
    printf("5과 4중 더 큰 수는 %d\n", MAX(5,4));
    
    
    
	return 0;
}