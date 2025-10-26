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

      int getY() const {
        return *y;
    }

     void setY(int _val){
        *y = _val;
    }

      int getZ() const { 
        return z;
    }
    friend void printABC(const abc &a);
};

// kisi object ko const banaya to whi function ko call krega jo const ho
void printABC(const abc &a){
    cout << a.getX() << " " << a.getY() << " " << a.getZ()  << endl;
}

int main(){
    abc b(1,2,3);
    printABC(b);
    return 0;
}


// int main2() {
//    initialisation can be done
//     const int x = 5;  // x is a constant
//     x = 10;            // but we can't re-assign a value
//     cout << x << endl;

//     2.const with pointer's
//     const int *a = new int(2);    // constant data , non-constant pointer
//     // or int const *a = new int(2);
//     cout << *a << endl;
//     // * a = 20;   can't change the content of pointer.
//     int b = 20;
//     a = &b;   // pointer itslef can be reassigned
//     cout << *a << endl;

