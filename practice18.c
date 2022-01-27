#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
  char str[] = "145";
  int suuti = atoi(str);
  printf("%d\n", suuti+1);
  char newstr[10];
  strcpy(newstr,"MARIO");
  printf("%s\n", newstr);
  return 0;
}