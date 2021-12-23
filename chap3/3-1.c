#include <stdio.h>

double toF(double cel) {
    return 9.0/5.0*cel + 32;
}

int main() {
    printf("%f\n", toF(10));
    printf("%f\n", toF(12.3));
    printf("%f\n", toF(24.3));
    }