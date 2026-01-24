//変数の四則演算

#include<stdio.h>

int main(void){
  int a,b;
  scanf("%d %d",&a,&b);

  printf("%d+%d=%d\n",a,b,a+b);
  printf("%d-%d=%d\n",a,b,a-b);
  printf("%d*%d=%d\n",a,b,a*b);
  printf("%d/%d=%d余り%d\n",a,b,a/b,a%b);
  printf("%d/%d=%f\n",a,b,(float)a/b);
  printf("%dmod%d=%d\n",a,b,a%b);

  return 0;
}
