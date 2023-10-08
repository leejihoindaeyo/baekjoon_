#include <iostream>
#include <string>
using namespace std;

int main(void){
    string arr;
    int T;
    int sum = 0;
    cin >> T;
    cin >> arr;
    
    for(int i = 0; i < T; i++){
        sum += (int)arr[i] - 48;
    }
    cout << sum;
    return 0;
}
