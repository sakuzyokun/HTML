void Function() {
    int x = 100; // ローカル変数xはスタックに確保される。
    int y = 200; // ローカル変数yはスタックに確保される。

} // 関数の終了とともに変数 x, y はスタックから取り除かれる。
  // スタックはLIFO（後入れ先出し）形式のため y, x の順で取り除かれる。

int main() {
    Function();

    return 0;
}