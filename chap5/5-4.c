#include <stdio.h>

/*走行距離 [km] とガソリンの消費量 [cc] を入力して燃費（ガソリン 1 リットルあたりの走行距離）を計算するプログラムを作ってください。*/

int main() {
    float kyori = 0.0;
    float shouhi = 0.0;
    float nenpi = 0.0;
    
    printf("走行距離[km]を入力してください\n");
    scanf("%f", &kyori);
    printf("ガソリンの消費量[cc]を入力してください\n");
    scanf("%f", &shouhi);

    nenpi = kyori / (shouhi/1000);
    printf("燃費は　%f　km/Lです。\n", nenpi);
}