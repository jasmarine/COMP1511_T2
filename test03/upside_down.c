//Jasmine Al-Hassani z5258857
//20/06/2019 

#include <stdio.h>

int main() {

    double intOne, intTwo, intThree;

    printf("Please enter three numbers: ");
    scanf("%lf", &intOne);
    scanf("%lf", &intTwo);
    scanf("%lf", &intThree);

    if (intOne < intTwo && intTwo < intThree) {
        printf("up\n");
    }

    else if (intOne > intTwo && intTwo > intThree) {
        printf("down\n");
    }

    else {
        printf("neither\n");
    }

    return 0;
}
