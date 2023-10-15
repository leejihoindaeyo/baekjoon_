#include <iostream>
#include <string>
using namespace std;

int main(void){
    int arr[9][9];
    int max_point1 = 0;
    int max_point2 = 0;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0];
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(arr[i][j] > max){
                max_point1 = i;
                max_point2 = j;
                max = arr[i][j];
            }
            
        }
    }
    cout << max << endl;
    cout << max_point1 + 1 << " " << max_point2 + 1 << endl;
    return 0;
}
