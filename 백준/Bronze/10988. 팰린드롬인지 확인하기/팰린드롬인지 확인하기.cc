#include <iostream>
#include <string>

using namespace std;

int main(void){
    string str;
    cin >> str;
    
    int len = str.length();
    bool isPelindrome = true;
    for (int i = 0; i < len/2; i++){
        if(str[i] != str[len - i - 1]){
            isPelindrome = false;
            break;
        }
    }
    if (isPelindrome){
        cout << "1\n";
    }
    else{
        cout << "0\n";
    }
    return 0;
}
