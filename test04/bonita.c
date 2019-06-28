
#include <stdio.h>


int main(void) {
    int x[100], i, j, t;

    printf("Enter numbers: ");

    int n;
    int over, end;
    int howMany;

    for (i = 0; i < 100; i++) {
      scanf("%d", &n);
      over += scanf("%d", &n);
      scanf("%d", &x[n]);

    }

    howMany = 101 + over;

    for (t = 0; t < howMany; t++) {
      printf("%d\n", x[t]);
    }





      end = howMany - 1;

    return 0;
}
