//実視等級から絶対等級への変換

#include<stdio.h>
#include<math.h>

int main(void){
  double z,m,d;

  scanf("%lf",&m);
  scanf("%lf",&d);

  z=m+5-5*log10(d/3.26);

  printf("%f\n",z);

  return 0;
}
