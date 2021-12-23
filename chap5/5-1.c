#include <stdio.h>
#include <math.h>
int main() {
    printf("以下のようにy = x^2/16のグラフを表示するプログラムを書いてください。 y の値は 0〜49 とします。\n");
    int x_max = sqrt(16*49);
    for(int y = 49; y >= 0; y--) {
        /*
        sqrt(16*49)-sqrt(16*x)~*sqrt(16*x)~|~sqrt(16*x)*\n
        */
        int x = sqrt(16*y);    
        for(int i = 0; i < x_max - x; i++) {
            printf(" ");
        }
        printf("*");
        for(int i = 0; i < x; i++) {
            printf(" ");
        }
        printf("|");
        for(int i = 0; i < x; i++) {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}