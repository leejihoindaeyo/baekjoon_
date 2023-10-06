#include <iostream>
using namespace std;

int main(void) {
    int T;
    int max = 0;
    double sum = 0;
    double cnt[1001];
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> cnt[i];
        if(cnt[i] > max)
            max = cnt[i];
    }
    
    for(int i = 0; i < T; i++){
        cnt[i] = (cnt[i] / max) * 100;
        sum += cnt[i];
    }
    cout << (double)sum / T << endl;
    return 0;
}
