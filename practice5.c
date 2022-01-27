#include <stdio.h>
int main(void){
  // int suuti = 10;
  // if(suuti){
  //   printf("%d\n", suuti);
  // }
  // return 0;
  int suuti;
  scanf("%d", &suuti);
  if(suuti == 10){
    printf("これは10です。\n");
  }
  else if(suuti>10){
    printf("これは10より大きいです。");
  }
  else if(suuti<10){
    printf("これは10より小さいです。");
  }
}
