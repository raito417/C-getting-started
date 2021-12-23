#include <stdio.h>

/*
Σ(1/n)の値を、n = 1...100 まで計算してください。 その際数値の比較がしやすいように、数値は左寄せで表示、小数点以下の桁数も違いがわかるように表示してください。
*/

int main() {
    double sum = 0;
    for (int n = 1; n <= 100; n++) {
        sum = sum + (1 / (double)n);
        printf("Σ1/%03d = %-12.20f\n", n, sum);
    }
    return 0;
}