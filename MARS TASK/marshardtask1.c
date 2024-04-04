#include <stdio.h>

#define N 4

int primeFactorsCount(int n) {
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            count++;
            n /= i;
        }
    }
    if (n > 1) {
        count++;
    }
    return count;
}

int main() {
    int consecutive = 0;
    int num = 2; // Starting from 2 as 1 doesn't have prime factors

    while (1) {
        if (primeFactorsCount(num) == N) {
            consecutive++;
            if (consecutive == N) {
                printf("The first of the four consecutive integers with four distinct prime factors each: %d\n", num - N + 1);
                break;
            }
        } else {
            consecutive = 0;
        }
        num++;
    }

    return 0;
}