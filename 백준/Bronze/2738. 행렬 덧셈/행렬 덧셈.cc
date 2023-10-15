#include <iostream>
#include <string>
using namespace std;

int main(void){
    int arr1[101][101];
    int arr2[101][101];
    int T1;
    int T2;
    cin >> T1;
    cin >> T2;
    for(int i = 0; i < T1; i++){
        for (int j = 0; j < T2; j++){
            cin >> arr1[i][j];
        }
    }
    for(int i = 0; i < T1; i++){
        for (int j = 0; j < T2; j++){
            cin >> arr2[i][j];
        }
    }
    for(int i = 0; i < T1; i++){
        for(int j = 0; j < T2; j++){
            cout << arr1[i][j]+arr2[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
