//FXの取引を考える
#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 200000;

int main (void) {
    int R[MAX], n;

    //入力数とチャートの数字を入力
    cin >> n;
    for (int i = 0; i < n; i++) cin >> R[i];

    int maxv = -200000000;
    int minv = R[0];

    //MAXを計算
    for (int i = 1; i < n; i++) {
        maxv = max(maxv, R[i] - minv);
        minv = min(minv, R[i]);
    }

    cout << maxv << endl;

    return 0;
}
