#include <stdio.h>

int main(){
  int i,j,k=0;

 printf("k층으로 삼각형을 만들자. \n");
 scanf("%d", &k);

 printf("결과 \n");

  for (i=0; i<k; i++) {
    for (j=1; j<=i; j++) {
      printf("%d ", j);
    }

   printf("%d\n ", j ); //층 바꿔줌
  }

  return 0;
}
