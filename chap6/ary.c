#include <stdio.h>

int main() {
    int ary[1000];
    for (int i = 0; i < 1000; i++)
    {
        ary[i] = i;
        printf("%d\n", ary[i]);
    }
    
}