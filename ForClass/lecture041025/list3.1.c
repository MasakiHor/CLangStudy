//

#include<stdio.h>

int main(void){
  int n;
  float a,b,c;

  n=sizeof(float);
  printf("float型は%dバイト\n",n);

  a=0.1/3.0;
  a*=3.0;
  b=1000000.00001;
  b-=1000000;
  b*=1E7;
  c=1000000+1E-7;

  printf("a=%.8f\n",a);
  printf("b=%.8f\n",b);
  printf("c=%.8f\n",c);
  return 0;
}
  
