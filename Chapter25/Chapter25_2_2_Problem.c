#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int* array_N = (int*)malloc(sizeof(int) * 5);
	int index_Location = 0, extend = 0;

	while (1) {

		scanf("%d", &array_N[index_Location]);
		if (array_N[index_Location] == -1) { break; }
		index_Location++;
        
        //printf("%d ", index_Location);

		if (index_Location == 5 && extend == 0) {

			extend = 1;
			array_N = (int *)realloc(array_N, sizeof(int) * (3 + index_Location) );

		}
		else if (extend == 1 && ((index_Location - 5) % 3) == 0) {
            
			array_N = (int *)realloc(array_N, sizeof(int) * (3 + index_Location) );
		}


	}


	for (int i = 0; i < index_Location; i++) {

		printf("%d\n", array_N[i]);
	}
	



	return 0;
}