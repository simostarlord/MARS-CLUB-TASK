// mars hard task 1 - ec23b1038 caitlin
#include <stdio.h>

#define N 4

int pfc(int n) {
    int c = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            c++;
            n /= i;
        }
    }
    if (n > 1) {
        c++;
    }
    return c;
}

int main() {
    int cc = 0;
    int num = 2; // Starting from 2 as 1 doesn't have prime factors

    while (1) {
        if (pfc(num) == N) {
            cc++;
            if (cc == N) {
                printf("The first of the four consecutive integers with four distinct prime factors each: %d\n", num - N + 1);
                break;
            }
        } else {
            cc = 0;
        }
        num++;
    }

    return 0;
}
