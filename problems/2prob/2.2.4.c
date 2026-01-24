//体重と身長からBMIを算出するプログラム 浮動小数点数使用ver.
#include<stdio.h>
int main(void){
  double w,l;

  puts("体重（kg）を単位抜きで入力してください");
  scanf("%lf",&w);

  puts("身長（m）を単位抜きで入力してください");
  scanf("%lf",&l);

  printf("BMIは%.2f（小数第三以下は切り下げ）です\n",w/(l*l));

  return 0;
}
  
