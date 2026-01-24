#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<tgmath.h>

int main(void){
  double latitude,omega;
  double f; /*コリオリパラメータ*/
  const double pi = atan(1.0)*4;

  puts("知りたい地点の緯度を北緯を正として度数法で記入してださい。");
  scanf("%lf",&latitude);

  omega=366*2*pi/(365*24*60*60);

  printf("%f\n",2*omega*sin(latitude*pi/180));

  return 0;
} 
