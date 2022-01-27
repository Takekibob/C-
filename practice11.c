#include <stdio.h>
int sum(int,int);
int main(void){
  int max, min;
  scanf("%d %d", &min, &max);
  sum(max,min);
  return 0;
}

int sum(int max, int min){
  printf("%d~%dの合計は%dです。\n",min,max,(max+min)*(max-min+1)/2);
  return 0;
}