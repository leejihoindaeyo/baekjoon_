#include <iostream>
using namespace std;

int main() {
    int height;
    cin >> height;

    for (int i = 0; i < height; i++) {
        // 공백 출력
        for (int j = 0; j < height - i - 1; j++) {
            cout << " ";
        }

        // 별 출력
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
