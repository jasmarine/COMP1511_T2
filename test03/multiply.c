//Jasmine Al-Hassani z5258857
//20/06/2019

#include <stdio.h>

int main() {

    int intOne, intTwo;
    
    scanf("%d", &intOne);
    scanf("%d", &intTwo);
    
    int total;
    
    if (intOne < 0 && intTwo > 0) {
    
        total = (intOne * intTwo) * -1;
        printf("%d\n", total);
        
    }
    
    else if (intOne > 0 && intTwo < 0 ) {
        total = (intOne * intTwo) * -1;
        printf("%d\n", total);
    }
    
    else if (intOne == 0 || intTwo == 0) {
        printf("zero\n");
    
    }
    
    else {
    
        total = intOne * intTwo;
        printf("%d\n", total);
    
    }
    return 0;
}
