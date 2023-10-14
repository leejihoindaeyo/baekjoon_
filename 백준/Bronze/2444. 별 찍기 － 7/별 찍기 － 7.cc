#include <iostream>
using namespace std;

int main(void){
    int T;
    cin >> T;
    
    for(int i = 1; i <= T; i++){
        for(int j = T; j > i; j--){
            cout << " ";
        }
        for(int j = 0; j < 2*i-1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = 1; i <= T; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 2*i; j < 2*T-1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
