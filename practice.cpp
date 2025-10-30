
// 53.
/*
5
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
*/
#include<iostream>
using namespace std;


int main () {
    int n;
    cin >> n;
 for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 * n - i - 2; j++){
            cout << "*";
        }
