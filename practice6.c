#include <stdio.h>
int main(void){
  // int score;
  // printf("点数を入力してください。");
  // scanf("%d", &score);
  // if(score>100){
  //   printf("入力が100よりも大きいので修正します。")
  //   score = 100;
  // }
  // printf("点数は%d点です。\n",score);
  // return 0;
  // int no;
  // scanf("%d", &no);
  // switch(no){
  //   case 1:
  //   printf("野比のび太です。\n");
  //   break;

  //   case 2:
  //   printf("源しずかです。\n");
  //   break;

  //   case 3:
  //   printf("剛田武です。\n");
  //   break;

  //   case 4:
  //   printf("骨川スネ夫です。\n");
  //   break;

  //   default:
  //   printf("そんな番号の人はいません。\n");
  //   break;

  // }
  // return 0;

  int i;
  // for文は定数回に制限される。

  for(i=0; i<10; i++){
    printf("%02d回目のメッセージです。\n",i+1);
    if((i+1)==3){
      break;
    }
  }
  return 0;
}