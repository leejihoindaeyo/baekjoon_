#include <iostream>
#include <string>
using namespace std;

int main(){
    int *arr;
    int N,K;
    int tmp;
    cin >> N;
    arr = new int[N];
    cin >> K;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(arr[i] > arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    cout << arr[K-1] << "\n";
    return 0;
}
