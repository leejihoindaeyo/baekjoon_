#include <iostream>
using namespace std;

int main(void){
    int T;
    int v;
    int count = 0;
    cin >> T;
    
    int a[101];
    for(int i = 0; i < T; i++){
        cin >> a[i];
    }
    cin >> v;
    
    for(int i = 0; i < T; i++){
        if (a[i] == v){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
