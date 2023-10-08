#include <iostream>
#include <string>
using namespace std;

int main(void){
    string str;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> str;
    
    for(int i = 0; i < alphabet.size(); i++){
        cout << (int)str.find(alphabet[i]) << ' ';
    }
    cout << "\n";
    return 0;
}
