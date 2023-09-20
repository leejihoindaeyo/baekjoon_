#include <iostream>
using namespace std;

int main(void){
    int grade;
    cin >> grade;
    
    if (grade >= 90 && grade <= 100){
        cout << 'A';
    }
    else if (grade >= 80 && grade <= 89){
        cout << 'B';
    }
    else if (grade >= 70 && grade <= 79){
        cout << 'C';
    }
    else if (grade >= 60 && grade <= 69){
        cout << 'D';
    }
    else if (grade <= 59){
        cout << 'F';
    }
    
    return 0;
}
