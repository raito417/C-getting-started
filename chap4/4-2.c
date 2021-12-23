#include <stdio.h>

int main() {
    int i = 1025;
    int j = 820;
    /* i<jの順番にする */
    if(i>j) {
        int temp = j;
        j = i;
        i = temp;
    }

    int warareru = j;
    int waru = i;
    int amari = j % i;
    while(warareru % waru != 0) {
    amari = warareru % waru ;
    warareru = waru;
    waru = amari;
    }
    printf("%dと%dの最大公約数は%d\n",i ,j, amari);
}