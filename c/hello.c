#include <stdio.h> // standard inout and ouyput header
int main(){
  int i, j, sum = 0;

  printf("j까지 더하기 위해 j를 입력하세요. \n");
  scanf("%d", &j);

  for (i=0; i <= j; ++i) {
    sum = sum + i;
  }

  printf("1부터 %d 까지의 합 :  %d \n", j, sum);

  return 0;
}
