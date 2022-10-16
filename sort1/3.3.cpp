//バブルソート
#include <iostream>
using namespace std;

//配列の要素を出力する関数
void trace (int x[], int num) {
    int i;
    for (i = 0; i < num; i++) {
        if (i) cout << " ";
        cout << x[i];
    }
    cout << endl;
}

void bubbleSort(int y[], int num) {
    int i = 0;
    int flag = 1;
    int count = 0;

    while (flag) {
        flag = 0;
        for (int j = num - 1; j >= i + 1; j--) {
            if (y[j] < y[j-1]) {
                swap(y[j-1], y[j]);
                flag = 1;
                count++;
            }
        }
        ++i;
    }
    // ソート後のデータを出力
    trace(y,num);
    // 何回入れ替わったか
    cout << count << endl;
}

int main(void) {
    int num, i;
    int A[100];

    //データを作成
    cin >> num;
    for (i = 0; i < num; i++) {
        cin >> A[i];
    }

    //バブルソート
    bubbleSort(A,num);
    return 0;
}