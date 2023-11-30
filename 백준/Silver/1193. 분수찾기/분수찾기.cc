#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int i = 1;

    while (N > i)
    {
        N -= i;
        i++;
    }

    if (i % 2 == 0)
        cout << N << "/" << i - N + 1 << "\n";
    else
        cout << i - N + 1 << "/" << N << "\n";

    return 0;
}
