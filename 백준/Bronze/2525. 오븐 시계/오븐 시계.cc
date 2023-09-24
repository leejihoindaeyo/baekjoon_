#include <iostream>

using namespace std;

int main(void){
    int H, M;
    int add;
    
    cin >> H;
    cin >> M;
    
    cin >> add;
    
    int total_min = M + add;
    if (total_min >= 60){
        int final_hour = H + (total_min/60);
        if (final_hour >= 24){
            final_hour %= 24;
        }
        int final_min = total_min % 60;
        cout << final_hour << " " << final_min << endl;
    }
    else
        cout << H << " " << total_min << endl;
    
    return 0;
}
