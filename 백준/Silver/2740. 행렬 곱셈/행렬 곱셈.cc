#include <iostream>
using namespace std;

int arr1[100][100] = {0, };
int arr2[100][100] = {0, };
int arr3[100][100] = {0, };

int main(){
    int a, b, d;
    cin >> a >> b;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> arr1[i][j];
        }
    }
    cin >> b >> d;
    for(int i = 0; i < b; i++){
        for(int j = 0; j < d; j++){
            cin >> arr2[i][j];
        }
    }
    
    for(int i = 0; i < a; i++){
        for(int j = 0; j < d; j++){
            for(int k = 0; k < b; k++){
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
