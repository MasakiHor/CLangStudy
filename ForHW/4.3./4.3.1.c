#include<stdio.h>
#include<limits.h>

int main(void){

  long A,B;
  
  /*
  printf("int: %d ～ %d\n", INT_MIN, INT_MAX);
  printf("long: %ld ～ %ld\n", LONG_MIN, LONG_MAX);
  printf("long long: %lld ～ %lld\n", LLONG_MIN, LLONG_MAX);

					       
  printf("sizeof(int)=%ld\n",sizeof(int));
  printf("sizeof(long)=%ld\n",sizeof(long));
  printf("sizeof(long long)=%ld\n",sizeof(long long));
  
  printf("4/3=%d\n",4/3);
  printf("4/(-3)=%d\n",4/(-3));
  printf("(-4)/3=%d\n",(-4)/3);
  printf("(-4)/(-3)=%d\n",(-4)/(-3));
  */

  puts("-2^63以上2^63未満の数を2つ入力してください。1つ目の入力値を2つ目の入力値で割った際の商から、小数点以下を切り捨てた値を出力します。なお、2つ目の入力値には0を入力しないでください。");
  
  scanf("%ld %ld",&A,&B);

  if(A==-9223372036854775808LL && B==-1){
    puts("saying puts : 9223372036854775808");
  }else{
  printf("%ld\n",A/B);
  }
  /*
  // printf("2^63-1=%ld\n",9223372036854775807);
  */

  return 0;
}
