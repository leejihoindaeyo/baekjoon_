#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int DialTime(string str){
    int cnt = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 65 && str[i] <= 67){
            cnt += 3;
        }
        else if(str[i] >= 68 && str[i] <= 70){
            cnt += 4;
        }
        else if(str[i] >= 71 && str[i] <= 73){
            cnt += 5;
        }
        else if(str[i] >= 74 && str[i] <= 76){
            cnt += 6;
        }
        else if(str[i] >= 77 && str[i] <= 79){
            cnt += 7;
        }
        else if(str[i] >= 80 && str[i] <= 83){
            cnt += 8;
        }
        else if(str[i] >= 84 && str[i] <= 86){
            cnt += 9;
        }
        else if(str[i] >= 87 && str[i] <= 90){
            cnt += 10;
        }
    }
    return cnt;
}

int main(void){
    string str;
    cin >> str;
    int count = DialTime(str);
    cout << count << endl;
}
