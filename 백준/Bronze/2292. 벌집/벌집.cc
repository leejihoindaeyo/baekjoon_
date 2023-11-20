#include <iostream>
using namespace std;

int main(){
    int cnt;
    int i = 0;
    cin >> cnt;
    
    int pass = 0;
    if(cnt == 1){
        cout << 1 << "\n";
    }
    else{
        for(int pass = 2; pass <= cnt; i++){
            pass += 6 * i;
        }
        cout << i << "\n";
    }
    return 0;
}
