#include <stdio.h>
#include <string.h>

int main() {
    char fox[] = "The quick brown fox jumps over the lazy dog.";
    for (int i=0; i < strlen(fox); i++) {
        if (fox[i] == 'o') {
            printf("oはfox[%d]にあります。\n", i);
        }
    }
}