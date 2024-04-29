#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 행렬 곱셈 함수
void matrixMultiply(int n, float A[][n], float B[][n], float C[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n;
    printf("행렬의 크기(n): ");
    scanf("%d", &n);

    float A[n][n], B[n][n], C[n][n];

    // 첫 번째 행렬 입력
    printf("첫 번째 행렬 입력:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    // 두 번째 행렬 입력
    printf("두 번째 행렬 입력:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    // 행렬 곱셈 수행
    clock_t start = clock(); // 시작 시간 기록
    matrixMultiply(n, A, B, C);
    clock_t end = clock(); // 종료 시간 기록
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC; // 실행 시간 계산

    // 결과 출력
    printf("\n행렬 곱셈 결과:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", C[i][j]); // 소수점 둘째 자리까지 출력
        }
        printf("\n");
    }

    // 실행에 걸린 시간 출력
    printf("\n실행 시간: %.6f 초\n", time_spent);

    return 0;
}

