//Jasmine Al-Hassani z5258857
//28/06/2019

#include <stdio.h>

int main(void) {

    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int row, col;

    for (row = 1; row <= size; row++) {
        for (col = 1; col <= size; col++) {
            if (row == size || col == 1)
              printf("*");
        }
    printf("\n");
    }
}
