//Jasmine Al-Hassani z5258857 2019

//Program that asks user to enter 3 numbers
// and orders them from smallest to largest.

#include <stdio.h>

int main(void) {
    int intOne;
    int intTwo;
    int intThree;

    printf("Enter integer: ");
    scanf("%d", &intOne);

    printf("Enter integer: ");
    scanf("%d", &intTwo);

    printf("Enter integer: ");
    scanf("%d", &intThree);


    if (intOne <= intTwo && intOne <= intThree) {
        
        if (intTwo <= intThree) {
        
            printf("The integers in order are: %d %d %d\n", intOne, intTwo, intThree);
        
        }
        
        else if (intThree <= intTwo) {
            
            printf("The integers in order are: %d %d %d\n", intOne, intThree, intTwo);
        
        }
    
    }
    
    else if (intTwo <= intOne && intTwo <= intThree) {
        
        if (intOne <= intThree) {
            
            printf("The integers in order are: %d %d %d\n", intTwo, intOne, intThree);
        
        }
        
        else if (intThree <= intOne) {
        
            printf("The integers in order are: %d %d %d\n", intTwo, intThree, intOne);
        }
    
    }
    
    else if (intThree <= intOne && intThree <= intTwo) {
    
        if (intOne <= intTwo) {
            
            printf("The integers in order are: %d %d %d\n", intThree, intOne, intTwo);
        
        }
        
        else if (intTwo <= intOne) {
        
            printf("The integers in order are: %d %d %d\n", intThree, intTwo, intOne);
        
        }
    
    }

    return 0;
}
