#include <stdio.h>
int main(void){
  int value;
  // %d指定子を用いるとその部分が数値に置き換わる。
  // printf("%d円\n",100);
  // printf("%d円+",100);
	// printf("%d円=",200);
	// printf("%d円\n",300);
  // こっちの方が纏まって見やすいネ！
	// printf("%d円+%d円=%d円\n",100,200,300);
  // このように計算することもできるよ
	// printf("%d円\n",100+200);
  // 加算
  // printf("%d\n",10 + 3);
  // 引き算
	// printf("%d\n",10 - 3);
  // 掛け算
	// printf("%d\n",10 * 3);
  // 割り算（int型なので切り捨てになる）
	// printf("%d\n",10 / 3);
  // 余り
	// printf("%d\n",10 % 3);
  // 少し複雑な計算
  // printf("%d\n",(1 + 100) * 100 / 2);
  // 実数値を数字に変換する場合の、%f指定子
  // でも%演算士は使うことができない
  // printf("%f\n",10.0 + 3.0);
	// printf("%f\n",10.0 - 3.0);
	// printf("%f\n",10.0 * 3.0);
	// printf("%f\n",10.0 / 3.0);
  //
  // printf("%d÷%d=%d...%d\n",40, 13, 40/13, 40%13);

  value = 10;
  // +=演算子
	value += 30;
  printf("%d\n", value);

  // 変数の良い部分は変更する箇所が一箇所になるため運用性がある
  int left;
	int right;
	left = 10;
	right = 3;
	printf("%d\n",left + right);
	printf("%d\n",left - right);
	printf("%d\n",left * right);
	printf("%d\n",left / right);
	printf("%d\n",left % right);

  double left_double,right_double;
	left_double = 10;
	right_double = 3;
	printf("%f\n",left_double + right_double);
	printf("%f\n",left_double - right_double);
	printf("%f\n",left_double * right_double);
	printf("%f\n",left_double / right_double);

// キャスト変換
// 強制的に型を変換する機能
  printf("%d\n",(int)(1.05 * 360));

  int a = 10000,b = 500,c = 3;

  // 桁を5桁にすることで読みやすくする
	printf("Aは %05d です。\n",a);
	printf("Bは %05d です。\n",b);
	printf("Cは %05d です。\n",c);

  double pi = 3.14159;
	printf("%6.2f\n",pi);
	printf("123456\n");
	return 0;
}