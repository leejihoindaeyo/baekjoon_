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
    vector<int> primes;
    int start, end;
    int sum = 0;

    cin >> start;
    cin >> end;

    // 범위가 바뀌었을 때 기존 벡터를 비우기
    primes.clear();

    // start와 end 중 작은 값부터 큰 값까지 소수를 찾음
    for (int i = min(start, end); i <= max(start, end); ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
            sum += i;
        }
    }

    if (!primes.empty()) {
        cout << sum << "\n";
        cout << primes[0] << "\n";
    } else {
        cout << -1 << "\n";
    }

    return 0;
}
