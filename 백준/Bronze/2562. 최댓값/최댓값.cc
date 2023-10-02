#include <iostream>
using namespace std;

int main(){
    int a[9];
    int max_index;
    
    for(int i = 0; i < 9; i++){
        cin >> a[i];
    }
    
    int max = -1;
    for(int i = 0; i < 9; i++){
        if(a[i] > max){
            max = a[i];
            max_index = i+1;
        }
    }
    cout << max << endl;
    cout << max_index << endl;
    
    return 0;
}
