#include <iostream>
#include <string>
using namespace std;

int main(void){
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        for(int j = 0 ; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
