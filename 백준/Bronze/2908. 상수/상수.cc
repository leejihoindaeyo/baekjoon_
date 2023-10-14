#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int SwapDigit(string str) {
    reverse(str.begin(), str.end());
    return stoi(str);
}

int main(void) {
    string str1, str2;
    cin >> str1;
    cin >> str2;

    int reversedStr1 = SwapDigit(str1); // 뒤집은 값을 저장
    int reversedStr2 = SwapDigit(str2); // 뒤집은 값을 저장

    if (reversedStr1 > reversedStr2) {
        cout << reversedStr1 << endl;
    } 
    else {
        cout << reversedStr2 << endl;
    }
    return 0;
}
