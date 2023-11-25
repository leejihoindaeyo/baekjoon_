#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        cout << "Pairs for " << num << ": ";
        bool first = true;
        for (int j = 1; j < num / 2 + 1; j++) {
            if (num - j != j) {
                if (!first) {
                    cout << ", ";
                }
                cout << j << " " << num - j;
                first = false;
            }
        }
        cout << endl;
    }
    return 0;
}
