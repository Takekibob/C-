// stdio.hは説明書のような物でincludeすることで事前に処理されている。
#include <stdio.h>
// intは整数を表す。
// voidは情報がないことを表す。
// C言語においてmain関数が一番初めに動作する
// C言語はコンパイラでコンパイルする必要がある。
// 大文字と小文字をしっかりと区別させる。

int main (void){
  // \nや\tはエスケープシーケンスである
  printf("Intel\t: Pentium4\n");
	printf("AMD\t: Athlon64\n");
  // ""で囲まれた文字列を文字列リテラルという
  return 0;
}
