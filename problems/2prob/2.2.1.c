//入力された２つの自然数の和差積商を出力

#include<stdio.h>

int main(void){

  int a,b;

  scanf("%d %d",&a,&b);

  printf("和は%d\n",a+b);
  printf("差は%d\n",a-b);
  printf("積は%d\n",a*b);
  printf("商は%d\n",a/b);
  printf("剰余は%d\n",a%b);

  return 0;
}

  
