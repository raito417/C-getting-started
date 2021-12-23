#include <stdio.h>

int main() {
    int i = 1;
    while(i <= 9) {
        int j = 1;
        while(j <= 9) {
            printf("%d*%d=%d\n", i, j, i*j);
            j += 1;
        }
        i += 1;
    }
}