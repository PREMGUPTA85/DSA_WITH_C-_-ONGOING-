

// wap to convert decimal into binary using backtracking 
#include<iostream>
using namespace std;



int binaryconversion(int num){
    if(num > 0){
        binaryconversion(num / 2);
  
