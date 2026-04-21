//printing prime no from min to max
#include <stdio.h>

int isprime(int n);

int main() {
    int min, max, i;

    printf("Enter min and max: ");
    scanf("%d %d", &min, &max);

    for(i = min; i <= max; i++) {
        if(isprime(i)) {
            printf("%d\t", i);
        }
    }

    return 0;
}

int isprime(int n) {
    int j;

    if(n <= 1) return 0;

    for(j = 2; j * j <= n; j++) {
        if(n % j == 0)
            return 0;
    }

    return 1;
}
