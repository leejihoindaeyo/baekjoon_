#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    int three_bag = 0;
    int five_bag = 0;
    cin >> N;
    while(N >= 0){
        if(N % 5 == 0){
            int five_bag = N / 5;
            cout << five_bag + three_bag << endl;
            return 0;
        }
        N = N - 3;
        three_bag += 1;
    }
    cout << -1 << endl;
    
    return 0;
}
