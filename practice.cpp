// friend class
// frined keyword in cpp 
#include<iostream>
using namespace std;

// freind class is a class that can access private and protected members of another class in which it is declared as a friend.

class A{
    private: 
    int x;

public:
    A(int _x) : x(_x) {};

int getX() const {
        return x;
    }   

void setX(int val){
        x = val;
    }   


void print() const{
        cout << x << endl;
    }

// for accessing private members of class A in class B
    friend class B;

    friend void print(const A &a);
};

class B{
    public:
    void print(const A &a){
        // cout << a.getX() << endl;
        // cout << a.x << endl; // accessing private member of class A

        // better hoga 
        a.print();
    }
};

// void print(const A &a){
//     cout << a.x << endl; // accessing private member of class A
// }


int main() {
    A c(5);
    B b;
    c.print();
    b.print(c);
    //print(c);
    return 0;
}
