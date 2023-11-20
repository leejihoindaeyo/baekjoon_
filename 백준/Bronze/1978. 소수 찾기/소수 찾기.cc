#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N;
    int *arr;
    int cnt = 0;
    cin >> N;
    
    arr = new int[N];
    
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < N; i++){
        bool isPrime = true;
        if(arr[i] == 1){
            continue;
        }
        for(int j = 2; j < arr[i]; j++){
            if((arr[i] % j) == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cnt += 1;
        }
    }
    
    cout << cnt << endl;
    delete [] arr;
    return 0;
}
