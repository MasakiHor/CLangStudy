//original

#include<stdio.h>

int main(void){
  int n,f,Fn,Ff,F1000;
  float F;

  puts("整数部と小数部を分けて入力してください");

  puts("符号と整数部：");
  scanf("%d",&n);

  puts("小数点以下部分:");
  scanf("%d",&f);

  Fn=1000*n*9/5+32000;
  Ff=10*f*9/5;

  F1000=Fn+Ff;
  F=F1000/1000.0;

  printf("%f\n",F);

  return 0;
}
