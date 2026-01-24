#include<stdio.h>

int main(void){
  unsigned int y;
  scanf("%u",&y);

  printf("y%%4=%u\n",y%4);
  printf("(y%%4==0 && y%%100!=0) = %d\n",y%4==0 && y%100!=0);
  printf("(y%%4==0 && y%%100!=0 || !(y%%400)) = %d\n",y%4==0 && y%100!=0 || !(y%400));
  printf("(y%%400) = %d\n",(y%400));
  printf("!(y%%400) = %d\n",!(y%400));
  
  if(y%4==0 && y%100!=0 || !(y%400)){
    puts("Leap year");
  }else{
    puts("Not Leap Year");
  }

  return 0;
}
    
