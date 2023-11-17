#include <iostream>
using namespace std;

int main(){
    int N, t_cent;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> t_cent;
        int quarter = t_cent/25;
        cout << quarter << " ";
        int dime  = (t_cent % 25) / 10;
        cout << dime << " ";
        int nickel = ((t_cent % 25) % 10) / 5;
        cout << nickel << " ";
        int penny = ((t_cent % 25) % 10) % 5;
        cout << penny << " ";
        cout << "\n";
    }
    return 0;
}
