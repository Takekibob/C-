#include <stdio.h>
#include <string.h>
int main(void){
  char name[254],first_name[254], second_name[254];
  printf("苗字を入力してください。");
  scanf("%s", first_name);
  printf("名前を入力してください。");
  scanf("%s", second_name);
  sprintf(name,"%s %s", first_name,second_name);
  printf("私の名前は%sです。\n", name);

  return 0;
}