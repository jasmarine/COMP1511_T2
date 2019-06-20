//Jasmine Al-Hassani z5258857
// 19/06/2019

//Program that that reads a year and then 
//prints whether that year is a leap year.

#include <stdio.h>

int main(void) {

    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 4 != 0) {
        printf("%d is not a leap year.\n", year);
    }

    else if (year % 100 != 0) {
        printf("%d is a leap year.\n", year);
    }

    else if (year % 400 != 0) {
        printf("%d is not a leap year.\n", year);
    }
    else {
        printf("%d is a leap year.\n", year);
    }

    return 0;
}
