#include <stdio.h>
int main(void){
  int r;
  double s;
  do{
    printf("半径は？");
    scanf("%d", &r);
  }while(r<0);

  s = r*r*3.14;
  printf("半径%dの面積は%0.2fです\n",r,s);
}