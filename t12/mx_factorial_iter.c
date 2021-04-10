#include <stdio.h>

int mx_factorial_iter(int n) {
    int a = 1;
    if ( n < 0) return 0;
    else if ( n == 0) return 1;
    else {
        for (int i = 1; i <= n; i++) {
            if ( 2147483647 / i < a) return 0;
            a *= i;
    }
    return a;
    }
}

/*
int main() {
    printf("%d", mx_factorial_iter(5));
}
*/


