#include <iostream>

using namespace std;

int main(void) {
    int f, s, t;
    cin >> f;
    cin >> s;
    cin >> t;

    // 주사위 번호가 1에서 6 사이의 값인지 확인
    if (f < 1 || f > 6 || s < 1 || s > 6 || t < 1 || t > 6) {
        cout << "주사위 번호는 1에서 6 사이의 값이어야 합니다." << endl;
        return 1; // 오류 코드를 반환하고 프로그램 종료
    }

    if ((f == s) && (s == t)) {
        cout << 10000 + (f * 1000) << endl;
    } else if ((f != s) && (s != t) && (t != f)) {
        int max_value = max(max(f, s), t);
        cout << max_value * 100 << endl;
    } else {
        if (f == s) {
            cout << 1000 + (f * 100) << endl;
        } else if (s == t) {
            cout << 1000 + (s * 100) << endl;
        } else if (t == f) {
            cout << 1000 + (t * 100) << endl;
        }
    }

    return 0;
}
 
