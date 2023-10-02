#include <iostream>
using namespace std;

int main(){
    int N;
    int M;
    int tmp = 0;
    int arr[101] = {0, };
    int a, b;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        arr[i] = i + 1;
    }
    for(int j = 0; j < M; j++){
        cin >> a >> b;
        tmp = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = tmp;
    }
    for(int k = 0; k < N; k++){
        cout << arr[k] << ' ';
    }
    cout << "\n";
}
