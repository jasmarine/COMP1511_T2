//Jasmine Al-Hassani z5258857
//20/06/2019


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


    printf("The integers in order are: %d %d %d\n", (((intOne < intTwo) && 
    (intOne < intThree)) * intOne) +
    (((intTwo < intOne) && (intTwo < intThree)) * intTwo) +
    (((intThree < intOne) && (intThree < intTwo)) * intThree) + 
    (((intOne == intTwo) && (intOne < intThree))
    * intOne) + (((intOne == intThree) && (intOne < intTwo)) * intOne) +
    (((intOne == intTwo) && (intOne == intThree)) * intOne) +
    (((intTwo == intThree) && (intTwo < intOne)) * intTwo), (((intTwo < intOne)
     && (intOne < intThree)) * intOne) +
    (((intOne < intTwo) && (intTwo < intThree)) * intTwo) +
    (((intOne < intThree) && (intThree < intTwo)) * intThree) +
    (((intThree < intOne) && (intOne < intTwo)) * intOne) +
    (((intThree < intTwo) && (intTwo < intOne)) * intTwo) +
    (((intTwo < intThree) && (intThree < intOne)) * intThree) +
    (((intOne == intTwo) && (intOne < intThree || intThree < intOne)) * intOne) 
    +
    (((intOne == intThree) && (intOne < intTwo || intTwo < intOne)) * intOne) +
    (((intOne == intTwo) && (intOne == intThree)) * intOne) +
    (((intTwo == intThree) && (intTwo < intOne || intOne < intTwo)) * intTwo), 
    (((intTwo < intOne) && (intThree < intOne)) * intOne) +
    (((intOne < intTwo) && (intThree < intTwo)) * intTwo) +
    (((intOne < intThree) && (intTwo < intThree)) * intThree) +
    (((intOne == intTwo) && (intOne > intThree)) * intOne) +
    (((intOne == intThree) && (intOne > intTwo)) * intOne) +
    (((intTwo == intThree) && (intTwo > intOne)) * intTwo) +
    (((intOne == intTwo) && (intOne == intThree)) * intOne));

    return 0;

}
