#include<stdio.h>

int main(void){
  int a,b;
  scanf("%d%d",&a,&b);
  printf("Sum :%d\n",a+b);
  printf("Dif :%d\n",a-b);
  printf("Prod :%d\n",a*b);

  printf("(b!=0)=%d\n",b!=0);

  if(b!=0){
    printf("Div :%d\n",a/b);
  }

  return 0;
}
