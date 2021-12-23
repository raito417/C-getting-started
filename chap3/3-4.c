#include <stdio.h>

int f(int n) {
    return n <= 1 ? n : f(n-2) + f(n-1);
}
int main() {
    printf("%d\n", f(10));
}