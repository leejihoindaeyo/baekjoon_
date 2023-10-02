#include <iostream>
using namespace std;

int main(){
    int N;
    int M;
    int arr[101] = {0, };
    int i, j, k;
    cin >> N >> M;
    for(int a = 0; a < M; a++){
        cin >> i >> j >> k;
        for(int b = i; b <= j; b++){
            arr[b] = k;
        }
    }
    for(int a = 1; a <= N; a++){
        cout << arr[a] << " ";
    }
    cout << "\n";
    return 0;
}
