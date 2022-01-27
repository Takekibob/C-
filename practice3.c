#include <stdio.h>
int main(void){
  int water, milk, water_num, milk_num, pay_money, charge;
  double tax;
  water = 198;
  milk =138;
  water_num = 1;
  milk_num = 2;
  tax = 0.05;
  pay_money = 1000;
  charge = pay_money - (int)( water * water_num + milk * milk_num )*( 1 + tax );
  printf("お釣りは%d円です。\n",charge);
}