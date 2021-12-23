#include <stdio.h>

int f(int n) {
    return n == 0 ? 0 : n + f(n-1);
}

int main() {
    printf("%d\n", f(10));
}