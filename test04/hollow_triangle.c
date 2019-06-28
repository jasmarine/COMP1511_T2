//Jasmine Al-Hassani z5258857
//28/06/2019

#include <stdio.h>

int main() {

    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int row, col;

    for (row = 1; row <= size; row++) {
        for (col = 1; col <= size; col++) {
            //Ensure only the first column, last row and equal points
            //are asteriks'
            if (row == size || col == 1 || row == col) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
    printf("\n");
    }
}
