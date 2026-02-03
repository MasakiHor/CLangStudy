#include<stdio.h>
int main(void){
  int siteim;//視程meter略してsitei(シテイ)m
  scanf("%d",&siteim);

  printf("%d\n",siteim);

  if(siteim>=0 && siteim<100){
    puts("VV=00 ※注意:-1<(入力値)<0の値を入力した場合も誤ってV=00と出力されます。");
  }else if(siteim>=100 && siteim<1000 && siteim%100==0){
    printf("VV=0%d\n",siteim/100);
  }else if(siteim>=1000 && siteim<=5000 && siteim%100==0){
    printf("VV=%d\n",siteim/100);
  }else if(siteim>=6000 && siteim<=30000 && siteim%1000==0){
    printf("VV=%d\n",(siteim/1000)+50);
  }else if(siteim>=35000 && siteim<=70000 && siteim%5000==0){
    printf("VV=%d\n",((siteim/1000-30)/5)+80);
  }else if(siteim>70000){
    puts("VV=89");
  }else{
    puts("入力値が適切ではありません。VVの値が整数にならないか、視程の入力値がVVの計算の対応範囲（定義域）に含まれていない可能性があります");
	 }
 return 0;
  }
