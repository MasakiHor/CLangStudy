//

#include<stdio.h>

int main(void){
  int n,f,Fn,Ff;

  puts("整数部と小数部(2桁以内)を分けて入力してください。小数部がない（整数のみの）場合は小数部には0を入力してください。");

  puts("符号と整数部：");
  scanf("%d",&n);

  puts("小数部:");
  scanf("%2d",&f);

  n*=1000;
  n+=10*f;
  n*=9;
  n/=5;
  n+=32000;

  Fn=n/1000;
  Ff=n%1000;

  printf("%d.%d\n",Fn,Ff);

  return 0;
}
