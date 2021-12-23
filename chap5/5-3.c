#include <stdio.h>

/*キーボードから摂氏温度を実数で入力して、華氏温度を表示するプログラムを作成し、実行結果を示してください。*/

int main() {
    float input = 0.0;
    float fah = 0.0;
    printf("実数を入力して、改行キーを押してください。\n");
    scanf("%f", &input);
    fah = (input-32.0) * (5.0/9.0);
    printf("摂氏%f度は、華氏%f度です。\n", input, fah);
    return 0;
}