#include <stdio.h>

int main(void) {

    // int sum = 0;
    // int num;
    // scanf("%d", &num);
    // while (0 <= num) {
    //     sum = sum + num;
    //     scanf("%d", &num);
    // }

    // printf("sum %d\n", sum);

    int num;
    while (scanf("%d", &num) == 1) {
        if (num % 2 == 0) {
            printf("%d\n", num);
        }
    }

    return 0;
}