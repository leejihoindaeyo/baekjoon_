#include <iostream>
#include <string>
using namespace std;

int main(void){
    string subject[20];
    double mark[20];
    string grade[20];
    double sum1;
    double sum2 = 0;
    double sum3 = 0;
    for (int i = 0; i < 20; i++){
        cin >> subject[i];
        cin >> mark[i];
        cin >> grade[i];
    }
    for(int i = 0; i < 20; i++){
        if(grade[i] == "A+"){
            sum1 = 4.5 * mark[i];
            sum2 += sum1;
            sum3 += mark[i];
        }
        else if(grade[i] == "A0"){
            sum1 = 4.0 * mark[i];
            sum2 += sum1;
            sum3 += mark[i];
        }
        else if(grade[i] == "B+"){
            sum1 = 3.5 * mark[i];
            sum2 += sum1;
            sum3 += mark[i];
        }
        else if(grade[i] == "B0"){
            sum1 = 3.0 * mark[i];
            sum2 += sum1;
            sum3 += mark[i];
        }
        else if(grade[i] == "C+"){
            sum1 = 2.5 * mark[i];
            sum2 += sum1;
            sum3 += mark[i];
        }
        else if(grade[i] == "C0"){
            sum1 = 2.0 * mark[i];
            sum2 += sum1;
            sum3 += mark[i];
        }
        else if(grade[i] == "D+"){
            sum1 = 1.5 * mark[i];
            sum2 += sum1;
            sum3 += mark[i];
        }
        else if(grade[i] == "D0"){
            sum1 = 1.0 * mark[i];
            sum2 += sum1;
            sum3 += mark[i];
        }
        else if(grade[i] == "F"){
            sum1 = 0;
            sum2 += sum1;
            sum3 += mark[i];
        }
    }
    cout << sum2/sum3 << endl;
    return 0;
}
