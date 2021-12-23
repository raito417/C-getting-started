#include <stdio.h>
#include <math.h>
    /*二次方程式の解の公式*/
int main() {
    double a = 1.0;
    double b = -1.0;
    double c = 1.0;
    if((b*b) - (4*a*c) >= 0) {
    double x1 = ((b*-1) + sqrt(b*b - (4*a*c))) / (2*a);
    double x2 = ((b*-1) - sqrt(b*b - (4*a*c))) / (2*a);
    printf("%fx^2+%fx+%f=0の解は、x=(%f,%f)です。\n", a, b, c, x1, x2);
    } else {
        printf("解が求められません。\n");
    }
    return 0;
}