#include <iostream>
#include <string>
using namespace std;

int main(void){
    string croatian[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    string str;
    int idx;
    cin >> str;
    
    for(int i = 0; i < 8; i++){
        while(1){
            idx = str.find(croatian[i]);
            if (idx == string::npos)
                break;
            str.replace(idx, croatian[i].length(), "1");
        }
    }
    cout << str.length() << endl;
    return 0;
}
