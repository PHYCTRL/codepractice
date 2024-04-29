#include <stdio.h>

int main() {
  int user_answer;

  printf("Guess Computer\'s Number! and Press Enter \n");

  for (;;) {
    scanf("%d", &user_answer);
    if (user_answer == 3) {
          printf("You Win! \n");
          break;
    }
    else {
     printf("You Lose... Try again \n");
    }
  }


  return 0;
}
