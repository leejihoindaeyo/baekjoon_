#include <iostream>
using namespace std;

int main(void){
    int T, b;
    int a[10000];
    
    cin >> T >> b;
    for(int i = 0; i < T; i++){
        cin >> a[i];
    }
    for(int j = 0; j < T; j++){
        if(a[j] < b)
            cout << a[j] << " ";
    }
    cout << "\n";
    return 0;
}
