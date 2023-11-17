#include <iostream>
using namespace std;

int main(){
    while(1){
        int a, b;
        int c;
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        else if((a > b) && (a != b)){
            c = a % b;
            if(c == 0){
                cout << "multiple\n";
            }
            else{
                cout << "neither\n";
            }
        }
        else if((a < b) && (a != b)){
            c = b % a;
            if(c == 0){
                cout << "factor\n";
            }
            else{
                cout << "neither\n";
            }
        }
    }
    return 0;
}
