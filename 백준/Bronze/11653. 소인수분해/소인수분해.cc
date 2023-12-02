#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = 2; i <= N; ++i) {
        while (N % i == 0 && is_prime(i)) {
            cout << i << "\n";
            N = N / i;
        }
    }

    return 0;
}
