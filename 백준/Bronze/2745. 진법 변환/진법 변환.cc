#include <iostream>
using namespace std;

int main(){
    string word;
    int form;
    int sum = 0;
    
    cin >> word >> form;
    
    for(int i = 0; i < word.size(); i++){
        if(word[i] >= '0' && word[i] <= '9'){
            sum = sum * form + (word[i] - 48);
        }
        else{
            sum = sum * form + (word[i] - 65 + 10);
        }
    }
    cout << sum << "\n";
    return 0;
    
}
