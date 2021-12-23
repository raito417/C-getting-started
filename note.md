# note

- リンクがうまく行かなくてエラーが出るとき：clang -lmをつける
- 明示的な型変換：(型名)変数名

int n
double d

d = d + (double)n

- 標準エラー出力

fptinf(stderr, "hogehoge");

fprintf(stderr, "a=%d\n", 3);

など