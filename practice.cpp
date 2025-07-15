// wap to print wave of a matrix by using vector's.


#include<iostream>                // preprocessor directory and header file included for our code
#include<vector>                 // vector file must include for vector's
using namespace std;            //  for our input and output standard

void wavematrix(vector<vector<int>>v){
    int rs = v.size();
    int cs = v[0].size();

    //outer loop depends upon column
    for(int i = 0;i < cs ; i++){
        if((i & 1) == 0){
            // even columns
            for(int j = 0; j < rs; j++){
                cout << v[j][i] << " ";
            }
        }
        else{
            // odd columns
            for(int j = rs - 1; j >= 0; j--){
                cout << v[j][i] << " ";
            }
        }
    }
}

int main(){
    vector<vector<int>>v = { // vector declaration
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    wavematrix(v);   // function call
    return 0;
}