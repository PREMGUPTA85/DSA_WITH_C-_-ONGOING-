

// wap to convert decimal into binary using backtracking 
#include<iostream>
using namespace std;



int binaryconversion(int num){
    if(num > 0){
        binaryconversion(num / 2);
        cout << num % 2;
    }
}


int main(){
    int num;
    cin >> num;
    binaryconversion(num);
    return 0;
}


