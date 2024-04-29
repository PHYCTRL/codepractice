import numpy as np
import time

def matrix_multiply(A, B):
    return np.dot(A, B)

def main():
    n = int(input("행렬의 크기(n): "))

    # 첫 번째 행렬 입력
    print("첫 번째 행렬 입력:")
    A = np.zeros((n, n), dtype=float)
    for i in range(n):
        for j in range(n):
            A[i, j] = float(input("A[{}][{}]: ".format(i, j)))

    # 두 번째 행렬 입력
    print("두 번째 행렬 입력:")
    B = np.zeros((n, n), dtype=float)
    for i in range(n):
        for j in range(n):
            B[i, j] = float(input("B[{}][{}]: ".format(i, j)))

    # 행렬 곱셈 수행
    start_time = time.time()
    C = matrix_multiply(A, B)
    end_time = time.time()
    elapsed_time = end_time - start_time

    # 결과 출력
    print("\n행렬 곱셈 결과:")
    print(C)

    # 실행에 걸린 시간 출력
    print("\n실행 시간: {:.6f} 초".format(elapsed_time))

if __name__ == "__main__":
    main()

