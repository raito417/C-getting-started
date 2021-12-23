#include <stdio.h>

/*
映画「ダイハード 3」にも出てくる以下の問題を解くプログラムを作成してください。
3 リットルの容器 A と 5 リットルの容器 B があります。 この二つの容器を使って 1 リットルの水を計測しようと思います。 ただし、容器 A でしか水を汲めず、容器 B では水を全部捨てることしかできません。 どのように容器を操作すればよいか、手順を以下の例のように表示してください。
*/

/*大域変数を使ってみる*/
int a = 0;
int b = 0;

void init() {
    a = 0;
    b = 0;
}

int main() {
    init();
    int input;
    printf("3Lの容器Aと5Lの容器Bを使って1Lを計測してください。ただし、容器Aでしか水を汲めず、容器Bでは水を全部捨てることしかできません。\n操作方法：\n1:容器Aで水を汲む\n2:容器Bで水を捨てる\n3:容器AからBに水を移す\n4:容器Aから水を捨てる\n5:最初からやり直す\n");
    while(a != 1 && b != 1) {
        printf("操作を入力してください。\n");
        scanf("%d", &input);
        switch (input) {
        case 1:
            a = 3;
            printf("容器Aに水を入れました。");
            break;
        case 2:
            b = 0;
            printf("容器Bから水を捨てました。");
            break;
        case 3:
            if (b+a > 5) {
                a -= 5-b;
                b = 5;
            } else {
                b += a; 
                a = 0;
            }
            printf("容器Aから容器Bに水を移しました。");
            break;
        case 4:
            a = 0;
            printf("容器Aから水を捨てました。");
            break;
        case 5:
            init();
            printf("リセットしました");
            break;
        }
        printf("  A=%dL,B=%dL\n", a, b);
    }
    if (a == 1){
        printf("Aに1L入っています。\n");
    } else  if (b == 1){
        printf("Bに1L入っています。\n");
    }
    
}