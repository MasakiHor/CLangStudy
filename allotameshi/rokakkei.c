//a,b,cの指定値からパネルの数を

#include<stdio.h>

int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);

  int r=2*(a+b+c)-6,vr=((a-1)*a/2)*6;
  
  printf("%d\n",a*r-vr);

  return 0;
}
