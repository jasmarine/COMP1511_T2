//Jasmine Al-Hassani z5258857
//28/06/2019

#include <stdio.h>

int main() {


    int nOne, nTwo, nThree;


    printf("Enter integer: ");
    scanf("%d", &nOne);

    printf("Enter integer: ");
    scanf("%d", &nTwo);

    printf("Enter integer: ");
    scanf("%d", &nThree);

    int middleInt =
    //nOne is the middle number
    ((nTwo < nOne && nOne < nThree) * nOne) +
    ((nThree < nOne && nOne < nTwo) * nOne) +

    //nTwo is the middle number
    ((nOne < nTwo && nTwo < nThree) * nTwo) +
    ((nThree < nTwo && nTwo < nOne) * nTwo) +
    //nThree is the middle numbers
    ((nOne < nThree && nThree < nTwo) * nThree) +
    ((nTwo < nThree && nThree < nOne) * nThree) +
    //Only two are the same
    ((nTwo == nOne && nOne < nThree) * nOne) +
    ((nTwo == nOne && nThree < nOne) * nOne) +
    ((nThree == nOne && nOne < nTwo) * nOne) +
    ((nThree == nOne && nTwo < nOne) * nOne) +
    ((nThree == nTwo && nTwo < nOne) * nTwo) +
    ((nThree == nTwo && nOne < nTwo) * nTwo) +
    //They are all the same
    ((nOne == nTwo && nOne == nThree) * nOne);

    printf("Middle: %d\n", middleInt);

    return 0;
}
