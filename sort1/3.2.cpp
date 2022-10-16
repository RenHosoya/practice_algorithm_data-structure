//単純挿入ソート
#include <stdio.h>

//配列の要素を出力する関数
void trace (int A[], int N) {
    int i;
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// iは指定した要素の分だけループ
// jはこれからソートする要素の番号
void insertionSort(int A[], int N) {
    int j, i, tmp, count;
    for(i = 1; i < N; i++) {
        j = i;
        tmp = A[j];
        while (j > 0 && A[j-1] > tmp) {
            A[j] = A[j-1];
            j--;
            count++;
        }
        A[j] = tmp;
        trace(A,N);
    }
    printf("%d\n", count);
}

int main(void) {
    int N, i, j;
    int A[100];

    // 要素を作成
    scanf("%d", &N);
    for (i = 0; i < N; i++) scanf("%d", &A[i]);

    // 初期状態を表示
    trace(A,N);
    //挿入ソート
    insertionSort(A,N);

    return 0;
}