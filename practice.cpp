#include<iostream>
using namespace std;

class info{
    public: 
    float area;
    float perimeter;
}

class circle{
    public:
    int radius;

    info calculate(){
        info ans = info();
        ans.area = 3.14 * radius * radius;
        ans.perimeter = 2 * 3.14 * radius;
        return ans;
    }
}

