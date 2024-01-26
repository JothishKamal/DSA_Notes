/*
Thirukkural Program
Chapters = 133 (Each chapter contains 10 verses)
Verses = 1330 (Each verse contains 2 lines)
Lines = 2660
*/
#include <stdio.h>
int main(void){
  int line;
  scanf("%d", &line);

  if (line%20==0){
    printf("CHAPTER=%d\n",line/20);
  } else {
    printf("CHAPTER=%d\n",line/20+1);
  }

  if (line%2==0)
    printf("VERSE=%d\n",(line/2)%10 == 0 ? 10:(line/2)%10);
  else
    printf("VERSE=%d\n",(line/2)%10+1);
  
  if(line%2==0 && line!=0){
    printf("LINE=2");
  } else if (line!=0) {
    printf("LINE=1");
  } else {
    printf("Invalid Line.");
  }
}