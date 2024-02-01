#include <iostream>
#include <algorithm>
using namespace std;

int x[3];
int main(){
    cin >> x[0] >> x[1] >> x[2];
    sort(x, x+3);
    if (x[0] + x[1] > x[2]){
        cout << x[0] + x[1] + x[2] << "\n";
    }
    else{
        cout << (x[0] + x[1]) * 2 - 1 << "\n";
    }
    return 0;
}
