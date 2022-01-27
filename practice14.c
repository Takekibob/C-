#include <stdio.h>
int main(void){
  int array1[] = {42,79,13};
  int array2[] = {42,79,13,24,78};
  int i;

  printf("array1[0]=%d\n", array1[0]);
  printf("array1[1]=%d\n", array1[1]);
  printf("array1[2]=%d\n", array1[2]);

  for(i=0;i<5;i++){
    printf("array2[%d]=%d\n",i,array2[i]);
  }

  // sizeof(array)でarrayのサイズを知ることができる
  //それをarray[0]で割ることによって配列の数を求めることができる。
  for(i=0;i<sizeof(array2)/sizeof(array2[0]);i++){
    printf("array2[%d]=%d\n",i,array2[i]);
  }
  return 0;
}