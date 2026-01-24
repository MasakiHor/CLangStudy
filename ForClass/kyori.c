#include<stdio.h>
#include<math.h>

int main(void){
  
  double a,b,c,d,e,f,dist,distsq;

  puts("１点目の３次元座標を入力");

  scanf("%lf %lf %lf",&a,&b,&c);

  puts("２点目の３次元座標を入力");

  scanf("%lf %lf %lf",&d,&e,&f);

  distsq=(a-d)*(a-d)+(b-e)*(b-e)+(c-f)*(c-f);

  printf("２乗で%fです。\n",distsq);

  dist=sqrt(distsq);

  printf("２点間の距離は%fです。\n",dist);

  return 0;
}
