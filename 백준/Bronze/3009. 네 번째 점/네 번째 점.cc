#include <iostream>
using namespace std;

int main(){
    int pointx[3];
    int pointy[3];
    
    for(int i = 0; i < 3; i++){
        cin >> pointx[i] >> pointy[i];
    }
    if (pointx[0] == pointx[1]){
        cout << pointx[2] << " ";
    }
    else if (pointx[0] == pointx[2]){
        cout << pointx[1] << " ";
    }
    else{
        cout << pointx[0] << " ";
    }
    
    if (pointy[0] == pointy[1]){
        cout << pointy[2];
    }
    else if (pointy[0] == pointy[2]){
        cout << pointy[1];
    }
    else{
        cout << pointy[0];
    }
    
    return 0;
    
}
