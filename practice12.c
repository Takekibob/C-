#include <stdio.h>
int sum(int);

int main(void){
  int max, value;
  scanf("%d", &max);
  value = sum(max);
  printf("%d\n", value);
  return 0;
}

int sum(int max){
  int sum;
  sum = (1+max)*(max)/2;
  return sum;
}