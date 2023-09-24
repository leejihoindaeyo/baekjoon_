#include <iostream>
using namespace std;

int main(void){
    int total;
    int total_price;
    int t;
    int sum = 0;
    cin >> total;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int price;
        int a;
        cin >> price;
        cin >> a;
        total_price = price * a;
        sum += total_price;
    }
    
    if(total == sum)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
