#include <iostream>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int arr[42] = {0, };
    int a;
    int count = 0;
    
    for(int i = 0; i < 10; i++){
        cin >> a;
        arr[a % 42] = 1;
    }
    for(int i = 0; i < 42; i++){
        count += arr[i];
    }
    cout << count << endl;
    return 0;
}
