//Jasmine Al-Hassani z5258857
//19/06/2019

#include <stdio.h>

int main(void) {

    int number;
    int base = 3;

    printf("Enter number: ");
    scanf("%d", &number);

    while (base < number) {
        if (base % 3 == 0 || base % 5 == 0) {
            printf("%d\n", base);
        }

        base++;
    }

    return 0;
}
