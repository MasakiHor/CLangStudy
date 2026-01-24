#include<stdio.h>
#include<math.h>
#define square(x) ((x)*(x))
#define cubic(x) ((x)*(x)*(x))

int main(void){

  double a0,a1,a2,a3,x1,x2,x3,x11,x12,x13;

  scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);

  puts("解1");

  x11=-a2/3*a3;
  x12=cbrt(-2*pow(a2,3)+9*a1*a3*a2-27*a0*pow(a3,3)+sqrt(4*pow(3*a1*a3-pow(a2,2),3)+pow(-2*pow(a2,3)+9*a1*a3*a2-27*a0*pow(a3,2),2)))/3*cbrt(2)*a3;
  x13=-cbrt(2)*(3*a1*a3-a2*a2)/3*a3*cbrt(-2*a2*a2*a2+9*a1*a3*a2-27*a0*a3*a3+sqrt(4*cubic(3*a1*a3-a2*a2)+square(-2*cubic(a2)+9*a1*a3*a2-27*a0*a3*a3)));
  x1=x11+x12+x13;

  printf("x1=%f\n",x1);

  return 0;
}

 
