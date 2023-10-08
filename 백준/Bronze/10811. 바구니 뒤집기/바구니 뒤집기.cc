#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[100];

    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }

    int a, b;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        if (a < 1 || a > n || b < 1 || b > n) {
            cout << "잘못된 입력입니다." << endl;
            return 1;  // 비정상 종료
        }

        while (a < b) {
            swap(arr[a], arr[b]);
            a++;
            b--;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
    }
    cout << "\n";
    return 0;
}
