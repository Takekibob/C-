#include <stdio.h>
int countfunc(void);
int countplus(int);
// グローバル変数の宣言
int count =0;


int main(void){
  int plus =0;
  countfunc();
  countfunc();
  countfunc();

  countplus(plus);
  countplus(plus);
  countplus(plus);
  return 0;
}

int countfunc(void){
  count ++;
  printf("%d\n",count);
  return count;
}

int countplus(int plus){
  plus++;
  printf("%d\n",plus);
  return plus;
}
