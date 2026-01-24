#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<tgmath.h>
#define cubic(x) ((x)*(x)*(x))

int main(void){

  double a,b,c,d,p,q;
  double complex omega,x1,x2,x3,A,B;

  scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

  p= (-b*b+3*a*c) / (3*a*a);
  q= (2*cubic(b)-9*a*b*c+27*a*a*d) / (27*cubic(a));

  A= ( 3*sqrt(3)*q + csqrt(27*q*q+4*cubic(p)) ) / (6*sqrt(3));
  B= ( 3*sqrt(3)*q - csqrt(27*q*q+4*cubic(p)) ) / (6*sqrt(3));

  omega= (-1+csqrt(-3)) / 2;

  x1 = -b/(3*a) - cpow(A,1.0/3) - cpow(B,1.0/3);
  x2 = -b/(3*a) - omega*cpow(A,1.0/3) - omega*omega*cpow(B,1.0/3);
  x3 = -b/(3*a) - omega*omega*cpow(A,1.0/3) - omega*cpow(B,1.0/3);
  
  
  puts("解1");
  printf("x1=%f+%fi\n",creal(x1),cimag(x1));

  puts("解2");
  printf("x2=%f+%fi\n",creal(x2),cimag(x2));

  puts("解3");
  printf("x3=%f+%fi\n",creal(x3),cimag(x3));

  return 0;
}
