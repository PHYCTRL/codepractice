#include <stdio.h>

void printTriangle(int k) {
    int i, j;

    // k층의 삼각형 출력
    for (i = 1; i <= k; i++) {
        // 왼쪽으로 정렬하여 공백 출력
        for (j = 1; j <= k - i; j++)
            printf(" ");
        // 별과 공백 출력
        for (j = 1; j <= 2 * i - 1; j++)
            printf(j % 2 == 0 ? " " : "*");
        // 다음 행으로 이동하기 전 줄 바꿈
        printf("\n");
    }
}

int main() {
    int k;
    printf("삼각형의 층 수를 입력하세요: ");
    scanf("%d", &k);

    printTriangle(k);

    return 0;
}

