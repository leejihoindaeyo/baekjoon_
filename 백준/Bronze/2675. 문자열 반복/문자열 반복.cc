#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(void){
    int T1, T2;
    cin >> T1;
    
    string str;
    for(int i = 0; i < T1; i++){
        cin >> T2;
        cin >> str;
        for(int j = 0; j < str.size(); j++){
            for(int k = 0; k < T2; k++){
                cout << str[j];
            }
        }
        cout << "\n";
    }
    return 0;
}
