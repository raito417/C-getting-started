#include <stdio.h>

int main() {
    int x = 7;
    printf("%d\n", x % 2 == 0 ? x*x : x*x*x);
}