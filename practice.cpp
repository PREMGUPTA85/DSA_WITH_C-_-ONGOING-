// Miscellaneous concepts :-- Const keyword , initialization list & macros
#include<iostream>
using namespace std;

class abc{
    int x;
    int *y;
    const int z;

    public:
    // ctor : old style
    // abc(int _x, int _y, int _z = 0){
    //     x = _x;
    //     y = new int(_y);
    //     z = _z;
    // }

    // initialization list -->aur yha z initialise ho rha h  ek tarika h ctor likhne k   --> z ko const use kiya but isme run ho gya 
    // default argument always in right side  
    abc(int _x, int _y, int _z = 0) : x(_x) , y(new int(_y)), z(_z){
        cout << "In init list" << endl;
        *y = *y * 10;
    }

    int getX() const{
        return x;
    }
 
      void setX(int _val){
        x = _val;
    }
