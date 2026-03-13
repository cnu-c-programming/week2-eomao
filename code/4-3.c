#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num < 2) {
        printf("false");
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("false");
            return 0;
        }
    }

    printf("true");
    return 0;
}
