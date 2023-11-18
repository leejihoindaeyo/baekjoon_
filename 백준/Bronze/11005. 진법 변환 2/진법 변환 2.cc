#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int N;
    cin >> N;
    
    string result = "";
    
    while (num != 0) {
        int mod = num % N;
        num /= N;
        
        if (mod >= 10) {
            result = (char)(mod + 55) + result;
        } else {
            result = to_string(mod) + result;
        }
    }
    
    cout << result << endl;
    
    return 0;
}
