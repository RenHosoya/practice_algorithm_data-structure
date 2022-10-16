// 選択ソート
#include <iostream>
using namespace std;

void selectionSort(int x[], int N) {
    int min,cnt = 0;

    for (int i = 0; i < N; i++) {
        min = i;
        for (int j = i; j < N; j++) {
            // 最小値を更新する
            if (x[j] < x[min]) {
                min = j;
            }
        }
        // 交換
        if (x[i] > x[min]) {
            swap(x[i],x[min]);
            cnt++;
        }
    }

    // 出力
    for (int i = 0; i < N; i++) {
        if (i) cout << " ";
        cout << x[i];
    }
    cout << endl;
    cout << cnt << endl;
}

int main (void) {
    int A[100], N;
    // 入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    selectionSort(A,N);
    return 0;
}