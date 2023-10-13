#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void){
    string str;
    getline(cin, str);
    int length = str.length();
    int cnt = 1;
    
    for(int i = 0; i < length; i++){
        if(str[i] == ' ')
            cnt++;
    }
    if (str[0] == ' ')
        cnt--;
    if(str[length - 1] == ' ')
        cnt--;
    cout << cnt << "\n";
    return 0;
}
