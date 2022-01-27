#include <stdio.h>
int main(void){
  // int data;
  // // int型の数値を入力させる
  // scanf("%d",&data);
  // printf("%d\n", data);

  // double data_double;
  // scanf("%lf",&data_double);
	// printf("%f\n",data_double);

  int  sum, max, min;
  printf("最大値と最小値を区切って入力してください。\n");
  scanf("%d,%d", &max,&min);
  sum = (max+min)*(max-min+1)/2;
  printf("%d~%dの合計は%dです。",min,max,sum);

  return 0;
}
