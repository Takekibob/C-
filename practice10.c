#include <stdio.h>
// プロトタイプ宣言
int sum(int);
int total(void);

int main(void){
  int num;
  scanf("%d", &num);
  sum(num);
  total();
  return 0;
}

// voidは引数がないことを表す。
// 1から入力された数値までの和を求める関数
int sum(int max){
  printf("1~%dの合計は%dです。\n",max,(max+1)*max/2);
  return 0;
}

int total(void){
  printf("1=100の合計は%dです。", (1+100)*100/2);
  return 0;
}