#include <stdio.h>
/*「数当てゲーム」を作成してください。*/
int digit(int input, int keta) {
    int digit;
    switch(keta) {
        case 1000:
            digit = input /1000;
            break;
        case 100:
            digit = (input/100) % 10;
            break;
        case 10:
            digit = (input/10) % 10;
            break;
        case 1:
            digit = input % 10;
            break;
    }
    return digit;
}
int test(int input) {
    int d1000 = digit(input, 1000);
    int d100 = digit(input, 100);
    int d10 = digit(input, 10);
    int d1 = digit(input, 1);
    printf("1000: %d\n100: %d\n10: %d\n1: %d\n", d1000, d100, d10, d1);
    return 0;
}

int main() {
    int input;
    int goal = 4321;
    int hit = 0;
    int blow = 0;
    while(hit < 4) {
        hit = 0;
        blow = 0;
        printf("4桁の数を入力してください。各桁の数字は重複してはいけません。\n");
        scanf("%d", &input);

        for(int i=1; i <= 1000; i*=10) {
            int input_digit = digit(input, i);

            for(int j=1; j <= 1000; j*=10) {
                int goal_digit = digit(goal, j);

                if(goal_digit == input_digit && j == i) {
                    hit++;
                } else if (goal_digit == input_digit) {
                    blow++;
                }
            }
        }
        printf("hit: %d\nblow: %d\n", hit, blow);
    }
    printf("正解！\n");
    return 0;
}