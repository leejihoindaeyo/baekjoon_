#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int N;
    int count = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        bool alphabet[26] = {false,};
        alphabet[(int)(word[0]) - 97] = true;
        
        for (int j = 1; j < word.size(); j++) {
            if (word[j] == word[j - 1]) {
                continue;
            } else if (word[j] != word[j - 1] && alphabet[(int)(word[j]) - 97] == true) {
                count++;
                break;
            } else {
                alphabet[(int)(word[j]) - 97] = true;
            }
        }
    }
    
    cout << N - count << endl;
    return 0;
}
