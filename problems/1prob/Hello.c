//Hello C World to shuturyokusuru progam
//originalはうまく作動したので、改変versionで、入力文字列を出力できるように。

#include<stdio.h>

int main(void){

  char * string;

  scanf("%s",&string);
  
  puts(string);

  return 0;
}

//うまくいかない。scanf関数で、%sはchar *型を想定するが、 stringはchar**型を想定するらしい。
