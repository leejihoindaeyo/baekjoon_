#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cin >> a;
    int res = 0;
    if(a <= 15){
        res = pow(2, a) + 1;
    }
    cout << res * res << endl;
    return 0;
}
