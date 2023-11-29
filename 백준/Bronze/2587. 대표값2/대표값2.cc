#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int tmp;
    int sum = 0;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum / 5 << "\n";
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i] < arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    cout << arr[2] << "\n";
    return 0;
}
