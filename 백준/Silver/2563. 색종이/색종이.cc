#include <iostream>
using namespace std;

int rect[100][100];
int main(){
    int n;
    cin >> n;
    int x, y;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        for(int i = y; i < y + 10; i++){
            for(int j = x; j < x + 10; j++){
                if(!rect[i][j]){
                    cnt++;
                    rect[i][j] = 1;
                }
                    
            }
        }
    }
    cout << cnt << "\n";
}
