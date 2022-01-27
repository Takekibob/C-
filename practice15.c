#include <stdio.h>
int main(void){
  int array[10] ={1,2,3,4,5,6,7,8,9,10};
  int i;

  for(i=0;i<sizeof(array)/sizeof(array[0]);i++){
    printf("array[%d]=%d\n", i,array[9-i]);
  }
}