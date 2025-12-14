
int main () {
    cout << "namaste duniya" << endl;
    return 0;
}

// 2.wap to access the variable by declaring it 
#include<iostream>
using namespace std;
int main () {
    int age = 19;
    cout << "Prem's age is: " << age << endl;
    return 0;
}

// 3.wap to store values in all data types variables (int,bool,char,float,double)
#include<iostream>
using namespace std;
int main () {
    int age = 12;
    float height = 8.4;
    double weight = 75.05;
    char alphabet = 'A';
    bool ismale = true;
    bool isboy = 1;
    bool isfemale = false;
    bool isgirl = 0;
    cout << age << endl;
    cout << height << endl;
    cout << weight << endl;
    cout << ismale << endl;
    cout << isboy << endl;
    cout << isfemale << endl;
    cout << isgirl << endl;
    cout << alphabet << endl;
    return 0;
} 

// 4.wap to inter_conversion of data - type
#include<iostream>
#include<iomanip> // iomanip header file used for manipulation/manipulating like decimal precision, output formats setting 
using namespace std;
int main () {
    int number = 12;
    float decimal = static_cast<float>(number);
    cout << fixed << setprecision(2) << "Decimal value of a number is: " << decimal << endl;
    return 0;
}

//5. wap to know about the type of data 
#include<iostream>
#include<typeinfo> // header file type info used for identifying the type of data
int main (){
    int age = 12;
    float decimal = 12.0;
    char name = 'A';
    std::cout<< "type of age is: " << typeid(age).name() << std::endl;
    std::cout<< "type of age is: " << typeid(decimal).name()<< std::endl;
    std::cout<< "type of age is: " << typeid(name).name() << std::endl;
    return 0;
}


//6. wap to take an input from the user and print that value by taking input from the user.
#include<iostream>
using namespace std;
int main () {
    int age;
    cout << "enter your age: " << endl;
    cin >> age; // for addressing in age(referring in age)
    cout << "your's age is: " << age << endl;
    return 0;
}

// 7.wap to inter conversion of data type by taking an input integer from the user 
#include <iostream>
#include<iomanip>
using namespace std;
int main () {
    int a;
    float decimal;

    cout << "Enter a integer number for conversion in float: " << endl;
    
    cin >> a;

    decimal = static_cast<float>(a);
    cout << fixed << setprecision(2) << "decimal value is: " << decimal << endl;
    return 0;
}

// 8. wap to enter the budget of user for buying the products.
#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "please enter the budget: " << endl;
    cin >> a;
    if (a > 100000) {
        cout << "yes u can proceed." << endl;
    }
    else if (100000 < a and a < 10000000)
    {
        cout << "Let's proceed more and more." << endl;
    }
    else {
        cout << "not having item's in this range." << endl;
    }
    return 0;
}

// 9.wap to enter the marks of user and then print its grade
#include <iostream>
using namespace std;
int main () {
    int marks;
    
    cout << "Enter your marks: "; // endl for getting an new line in our code so when we need for new line we use \n better or faster optimises than endl.
    cin >> marks ;// for addressing an input value to variable marks 
    if (marks > 90 || marks < 100) {
        cout << "Your grade is 'A'. ";
    }
    else if (marks > 80) {
        cout << "Your grade is 'B'. ";
    } 
    else if (marks > 70) {
        cout << "Your grade is 'C'. ";
    }
    else if (marks > 60) {
        cout << "Your grade is 'D'. ";
    }
    else {
        cout << "You failed.";
    }
    return 0;
}

// 10.wap by taking an switch statement.
#include <iostream>
using namespace std;
int main () {
    int Days;
    cout << "please enter date in between 7 feb & 14 feb: " ;
    cin >> Days;
    switch (Days){
        case 7: 
        cout << "Today is Rose day." <<endl;
        break;
        case 8: 
        cout << "Today is propose day." <<endl;
        break;
        case 9: 
        cout << "Today is chocolate day." <<endl;
        break;
        case 10: 
        cout << "Today is teddy day." <<endl;
        break;
        case 11: 
        cout << "Today is promise day." <<endl;
        break;
        case 12: 
        cout << "Today is hug day day." <<endl;
        break;
        case 13: 
        cout << "Today is kiss day day." <<endl;
        break;
        case 14: 
        cout << "Today is valentine day." <<endl;
        break;
        default: 
        cout << "Dynamic day's of feb are not in this date"<< endl;
        break;
    }
    return 0;
}

// 11.wap using ternary operator in C++
#include <iostream>
using namespace std;
int main () {
    int a,b;

    cout << "Enter two integers: " ;
    cin >> a >> b; // taking two integers in same line

    // using ternary operator 
    int result = a > b ? a: b;

    cout << "largest integers among these two is: " << result << endl;
    return 0;
}

// 12.wap in c++ by using continue keyword
#include<iostream> // header file included 
using namespace std;
// main function of code
int main () {
    for( int i = 1; i <= 10; i++) { 
        if (i == 2) {
            continue;// skip the current iteration
        }
        cout << i << "\n";
        if(i == 3){
            break; // exit from all the loops 
        }
    }
    return 0;
}


// 13.wap to print sum of two number's by using functions
#include <iostream>
using namespace std;
int sum(int a, int b);
int main() {
    int a, b;
    cout << "please enter the number's: " << endl;
    cin >> a >> b;
    int ans = sum(a,b); // fn jo value dega vo variable ans me store hogi
    cout << ans << endl;
    return 0;
}
int sum(int a,int b) {
    return a + b;
}

// 14.wap to print the multiplication of three number's by using functions
#include<iostream>
using namespace std;
int multhree(int a, int b, int c);
int main () {
    int a,b,c;
    cout << "please enter the number's seperated by space: " << endl;
    cin >> a >> b >> c;
    int ans = multhree(a,b,c);
    cout << "Multiplication of these three number's: " << ans << endl;
    return 0;
}
int multhree(int a, int b, int c) {
    return a * b * c;
}

// 15.wap to print counting from 1 to 100
#include<iostream>// header file <preprocessor directory>
using namespace std; 
int counting(){   // prototype declaration (function) // fn defination
    for (int i = 1; i <= 100; i++){
        cout << i << endl; // baki fn ko kya krna hai vo yha bataya jaega
    }
    cout << endl;
}
int main () {
    counting(); // fn call ( yha se only function ko bulaya jaega)
    return 0;
}

// 16.wap to calculate simple interest
#include <iostream>
using namespace std;
float simpleinterest(float principle,float rate,float time){
      return (principle * rate * time)/100;
}
int main () {
    float principle, rate , time;
    cout << "please enter the principle: ";
    cin >> principle;
    cout << "please enter the rate: ";
    cin >> rate;
    cout << "please enter the time: ";
    cin >> time;
    float final_result = simpleinterest(principle, rate, time) ;
    cout << final_result ;
}

//17. wap to print prime number's from 1 to 100 using functions.
#include<iostream>
using namespace std;

void primenumber(int n){
    if (n <= 1) {
        cout << "Number is not prime.";
    }
    bool isprime = true;
    for(int i = 2; i < n / 2; i++){
        if(n % i == 0){
                isprime = false;
                break;
        }
    }
    if (isprime) {
        cout << "Number is prime.";
    }
    else {
        cout << "Number is not prime.";
    }
}

int main () {
    int n;
    cout << "Please enter the number: ";
    cin >> n;
    primenumber(n);
}
// 18.wap to check whether a person is elligible for voting or not
#include <iostream>
using namespace std;
int voting(int age) {
    if (age >= 18){
        cout << "Elligible for voting." << endl;
    }
    else {
        cout << "not elligible for voting." << endl;
    }
    return 0;
}

int main () {
    int age;
    cout << "please enter the age: " << endl;
    cin >> age;
    voting(age);
    return 0;
}

// 19.wap for SIP(systematic investment plan for future)
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
float SIP(float monthly,float rate,float years){
    float final_rate = rate / 1200;
    int final_months = years * 12;
    return ( monthly * ((pow(1+final_rate,final_months)- 1)/final_rate) * (1 + final_rate) );
}
int main () {
    float monthly, rate, years;
    cout << "Please enter the monthly: " << endl;
    cin >> monthly;
    cout << "Please enter the rate: " << endl;
    cin >> rate;
    cout << "Please enter the years: " << endl;
    cin >> years;
    cout << fixed << setprecision(2) << SIP(monthly, rate, years);
    return 0;
}

//20.wap to convert decimal to binary conversion using fn 
#include <iostream>
using namespace std;
int binaryconversion(int num){
    if (num > 0) {
        binaryconversion(num / 2);
        cout << num % 2;
    }
}
int main () {
    int num;
    cout << "please enter the number: " << endl;
    cin >> num;
    binaryconversion(num);
}

// 21.wap to print factorial of a number using recursive function
#include<iostream>
using namespace std;
int factorial(int num){
    if (num == 0){
        return 1;
    }
    return num * factorial(num -1); // recursive call (fn break into smaller problems from complex problems)
}
int main () {
    int num;
    cin >> num;
    cout << factorial(num);
    return 0;
}

// 22.star pattern(square)
#include<iostream>
using namespace std;

int main () {
    int i;
    for (i = 1; i <= 4 ; i++){
        cout << endl << i; 
        for (int j = 1; j <= 4; j++){
            cout << "*";
        }
    }
}

//23.star pattern(right half pyramid)
#include<iostream>
using namespace std;
int main () {
    for (int i = 1; i <= 5; i++){
        cout << "\n" << i;
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
    }
}

// 24.hollow rectangle star pattern 
/*
* * * * *
*       *
*       *
* * * * *
*/
#include<iostream>
using namespace std;
int main() {
    int i,j;
    for (i = 1; i <= 1 ; i++) {
        cout << endl;
        for (j = 1 ; j <= 4; j++){
            if (j == 2){
                cout << "*       *"<< endl;
            }
            else if (j == 3){
                cout << "*       *"<< endl;
            }
            else {
                cout <<"* * * * *" << endl;
            }
        }
    }
}

// 25.wap to print hollow rectangle by entering an length and width of a rectangle
/*
Enter length
4
Enter width 
5
* * * * * 
*       *
*       *
* * * * *
*/
#include<iostream>
using namespace std;

int main() {
    int length, width;
    cout << "Enter length" << endl;
    cin >> length;

    cout << "Enter width " << endl;
    cin >> width;

    for(int i = 0; i < length; i++) {
        for(int j = 0; j < width; j++) {
            if(i == 0 || i == length - 1 || j == 0 || j == width - 1) {
                cout << "* ";
            } else {
                cout << "  "; // 2 spaces to match "* "
            }
        }
        cout << endl;
    }

    return 0;
}


// 26.hollow square pattern
/*
* * * * *
*       *
*       *
*       *
* * * * *
*/
#include<iostream>
using namespace std;
int main () {
    for (int r = 0; r <= 4; r++){
            if (r == 0 || r == 4) {
                cout << "* * * * *" << endl;
            }
            else {
                cout << "*       *" << endl;
            }
    }
}

// 27.wap to print hollow square pattern by taking an length of square.
/*Enter length of side of square
4
* * * * 
*     *
*     *
* * * *
*/
#include<iostream>
using namespace std;

int main() {
    //hollow square
    int n;
    cout << "Enter length of side of square" << endl;
    cin >> n;

    //outer -> rows
    for(int row=0; row<n; row++) {
        //inner -> cols
        for(int col=0; col<n; col++) {
            if(row == 0 || row == n-1 || col == 0 || col == n-1 ) 
                cout << "* ";
            else
                cout << "  ";
        }
        //ye main bhul jata hu
        cout << endl;
    }

    return 0;
}

// 28.wap to print reverse(inverted right half pyramid star pattern)
/*
* * * * *
* * * *
* * *
* *
*
*/
#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "please enter range: ";
    cin >> n;
    for (int r = 0; r <= n; r++){
        cout << endl;
        for (int c = 0; c < n - r; c++) {
            cout << "* " ;
        }
    }
}

// 29.wap to print inverted right half pyramid of number's.
/*
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n:\n";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i ; j++){
            cout << (j + 1) << " ";
        }
        cout << endl;
    }
    return 0;
}

//30.wap to print left align hollow pyramid.
/*
* * * * * 
*     *
*   *
* *
*
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    //inverted hollow half pyramid 
    for(int row=0; row<n; row++) {
        for(int col=0; col<n-row; col++) {
            if(row == 0 || col == 0 || col == n - row - 1 ) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        //ye main bhul jata hu
        cout << endl;
    }
} 

// 31.wap to which converts number from decimal to binary
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please enter the number: ";
    cin >> num;

    int ans = 0, place = 1;

    while (num > 0) {
        int rem = num % 2;
        ans = rem * place + ans;
        num /= 2;
        place *= 10;
    }

    cout << "Binary form: " << ans << endl;
    return 0;
}


// 32.WAP TO which converts number from binary to decimal, octal, hexadecimal 
// for decimal == base *= 2
// for octal == base *= 8
//for hexadecimal --> base *= 16
#include<iostream>
using namespace std;

int main() {
    int num, decimal = 0, base = 1;
    cout << "Please enter the number: ";
    cin >> num;
    while(num > 0){
        int lastdigit = num % 10;
        decimal += lastdigit * base;
        base *= 2;
        num /= 10;
    }
    cout << "It's decimal number is: " << decimal;
    return 0;
}

/*
33.
Pattern
N = 4
1
21
321
4321
*/
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
       int p = i;
        for(j=1;j<=i;j++){
          cout<<p;
          p--;
        }
        cout<<endl;
        
    }
}

/* 34.Full pyramid
5
    * 
   * *
  * * *
 * * * *
* * * * *
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        // Print leading spaces
        for(int k = 1; k <= n - i; k++) {
            cout << " ";
        }
        // Print stars with a space
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}

//35.Inverted pyramid
/*
5 
* * * * * 
 * * * *
  * * *
   * *
    *
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
        for(int k = 1; k <= n - i + 1; k++) {
            cout << " ";
        }
    }
    return 0;
}

//36.
/*
5
    * 
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        // Print leading spaces
        for(int k = 1; k <= n - i; k++) {
            cout << " ";
        }
        // Print stars with a space
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
        for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
        for(int k = 1; k <= n - i + 1; k++) {
            cout << " ";
        }
    }
    return 0;
}
// 37.Full hollow pyramid.
/*
5 
    *
   * *
  *   *
 *     *
* * * * *
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        // Print leading spaces
        for(int j = 1; j < n - i; j++) {
            cout << " ";
        }
        // Print stars with a space
        for(int j = 0; j <= i; j++) {
            if(j == 0 || i == n - 1 || j == i){
            cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}

/*
5
* * * * * 
 *     *
  *   *
   * *
    *
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            if(i == n || j == 1 || j == i){
            cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << "\n";
        for(int k = 1; k <= n - i + 1; k++) {
            cout << " ";
        }
    }
    return 0;
}

/*
5
* * * * * 
 *     *
  *   *
   * *
    *
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    for(int i = 0; i < n - 1; i++){
        //Spaces
        for(int j = 0; j <= i; j++){
            cout << " ";
        }
        for(int j = 1; j < n; j++){
            if(j == 1 || j == n - i - 1)
            cout << "* ";
            else 
            cout << "  ";
        }
        cout << "\n";
        
    }
} 

//39.
/*5
    * 
   * *
  *   *
 *     *
*       *
* * * * *
 *     *
  *   *
   * *
    *
*/

// hollow diamond
#include<iostream>
using namespace std;

int main () {
    int n, i, j;
    cin >> n;
    for(i = 0; i < n; i++){
        for(j = 1; j < n - i; j++){
            cout << " "; 
        }
            for(j = 0; j <=i;j++){
            if(j == 0 || j == i ){
                cout << "* ";
            }
            else {
                cout << "  ";
            } 
        }
    cout << "\n";
    }
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            if(i == n || j == 1 || j == i){
            cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << "\n";
        for(int k = 1; k <= n - i + 1; k++) {
            cout << " ";
        }
    }
    return 0;
}

/*
5
     * 
    * *
   *   *
  *     *
 *       *
* * * * * *
 *       *
  *     *
   *   *
    * *
     *
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Top half including full star line
    for(int i = 0; i <= n; i++){
        // I. Spaces
        for(int j = 0; j < n - i; j++){
            cout << " ";
        }
        // II. Stars and spaces
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i || i == n){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Bottom half
    for(int i = 0; i < n; i++){
        // I. Spaces
        for(int j = 0; j < i + 1; j++){
            cout << " ";
        }
        // II. Stars and spaces
        for(int j = 0; j < n - i; j++){
            if(j == 0 || j == n - i - 1){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
// 40.
/*
5
***** *****
****   ****
***     ***
**       **
*         *
*         *
**       **
***     ***
****   ****
***** *****
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n  ; i++){
        //I.Stars
        for(int j = 0; j < n - i; j++){
            cout<< "*";
        }
        //II.Spaces
        for(int j = 0; j < 2* i + 1; j++){
            cout<< " ";
        }
        //III. stars
        for(int j = 0; j < n - i; j++){
            cout<< "*";
        }
    cout << "\n";
    }
    for(int i = 0; i < n; i++){
        //I.Stars
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
    //II. Spaces
        for(int j = 1; j < (2 *(n - i)) ; j++){
            cout << " ";
        }
        ///III.Stars
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}  

// 41.
/*
5
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 * i + 1; j++){
            if(j % 2 == 0)
                cout << i + 1;
            
            else 
                cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < 2 * (n  - i) - 3; j++){
            if(j % 2 == 0){
                cout << n - i - 1;
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

// 41.
/*
5
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1
*/

#include<iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (2 * i) + 1; j++){
        if(j & 1){
            cout << "*";
        }
        else {
            cout << i + 1;
        }
    }
    cout << endl;
    }
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < (2 * i) - 1; j++){
            if(j & 1){
                cout << "*";
            }
            else {
                cout << i;
            }
        }
        cout << endl;
    }
    return 0;
}

// 42.
/*
5
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA 
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char ch = 'A' - 1;
        for(int j = 0; j <= i; j++){
            ch++;
            cout << ch;
        }
        // when we doesn't know how many times we need iteration so in that case we use while loop
        while(ch > 'A'){
            ch--;
            cout << ch;
        }
        cout << "\n";
    }
    return 0;
}
//43.
// wap to calculate a to the power b with functions and standard library functions for math
#include<iostream>
#include<math.h>
using namespace std;

void power(int x, int y){
    cout << pow(x, y);
}
int main(){
    int a, b;
    cin >> a >> b;
    power(a, b);
    return 0;
}
//44.
// wap to calculate a to the power b with functions 
#include<iostream>
using namespace std;

void power(int x, int y){
    int ans = 1;
    for(int i = 0; i < y; i++){
        ans = ans * x;
    }
    cout << ans;
}
int main(){
    int a, b;
    cin >> a >> b;
    power(a, b);
    return 0;
}

// 45.wap to check whether the number is prime or not

#include<iostream>
using namespace std;

void prime(int n){
    int i;
    for(i = 2 ; i < n ; i++){
        if(n % i == 0){
            break;
        }
    }
    if(n == i){
        cout << "prime number";
        }
    else {
        cout << "not a prime number";
        }
}
int main () {
    int n;
    cin >> n;
    prime(n);
    return 0;
}


// 46.wap to print even number from start & end two integers entered by user
#include<iostream>
using namespace std;

void evennumber(int start, int end){
    for(int i = start; i <= end; i++){
        if(!(i & 1)){
            cout << i;
            cout << endl;
        }
    }
}

int main () {
    int s, e;
    cin >> s >> e;
    evennumber(s, e);
    return 0;
}

// stacks example 
/*
✅ So Yes:
✔️ Jab recursion hota hai
✔️ Aur function baar-baar call ho raha hota hai
✔️ Toh har call ek stack me store hota hai
✔️ Aur return hone pe wahi stack unwind hota hai

Isi ko "call stack" bolte hain.
*/
#include<iostream>
using namespace std;

void bin(int n) {
    if(n > 1){
         bin(n / 2);
    }
    cout << n % 2 << endl;
}


int main() {
    int n;
    cin >> n;
    bin(n);
    return 0;
}

// 47.wap to swap of two number's by using exor.
#include<iostream>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    cout << x << "\n" << y << endl;
    return 0;
}

#include<iostream>
using namespace std;

//48.
/*
Pattern for N = 4
4444
333
22
1
*/

int main(){
  int i,j,n;
    cin>>n;
    int k = n;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            cout<<k;
        }
        k--;
        cout<<endl;
    }
}
// or
int main(){
    int n = 4;
    int print = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            cout << print;
        }
        print--;
        cout << endl;
    }
}
//49.
/*
1 
1 2
1   3 
1     4
1 2 3 4 5
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
        if(j == 0|| j == i || i == n - 1){
            cout << j + 1 <<" ";
        }
        else {
            cout << "  ";
        }
    }
    cout << "\n";
    }
    
}

// 50.
/*
5
1 2 3 4 5 
2     5
3   5
4 5
5
*/
#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j <= n ;j++){
        if(j == i + 1|| i == 0 || j == n) {
            cout << j <<" ";
        }
        else {
            cout << "  ";
        }
    }
    cout << "\n";
}
return 0;
}

// 51.
/*
5
        1 
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1        
1 2 3 4 5 4 3 2 1
*/
#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i-1; j++){
            cout << "  ";
        }  
        int k = 0;
        for(int j = 0; j <= i; j++){
            k++;
            cout << k << " ";
        }

        while (k > 1){
            k = k - 1;
            cout << k << " ";
        }
        cout << endl;
    }
    
}
//52. Solid Half Diamond
/*
5
* 
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/
#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

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
        for(int j = 0; j <=i ; j++){
            cout << i + 1;
            cout << "*" ;
        }
        for(int j = 0; j < 2 * n - i - 3; j++){
            cout << "*";
        }
        cout << endl;
    }
}

/*
5
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
*/
int main() {
    int n = 5;
    int print = 1;
    for(int i = 0; i < n; i++){
        // stars
        for(int j = 0; j < (2 * (n - 1)) - i; j++){
            cout << "*";
        }

        for(int j = 0; j < (2 * i) + 1; j++){
            if(j % 2 == 0){
                cout << print;
            }
            else {
                cout << "*";
            }
        }
        print++;
        // stars
        for(int j = 0; j < (2 * (n - 1)) - i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
}
// // #include<iostream>
// // using namespace std;

int main () {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 * n - i - 2; j++){
            cout << "*";
        }
        for(int j = 0; j <=i ; j++){
            cout << i + 1;
            cout << "*" ;
        }
        for(int j = 0; j < 2 * n - i - 3; j++){
            cout << "*";
        }
        cout << endl;
    }
} 
// 54.
/*
4
1
2*3
4*5*6
7*8*9*10      
7*8*9*10      
4*5*6
2*3
1
*/
#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int c = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << c ;
            c++;
            if(j < i){
                cout <<"*";
            }
        }
        cout << "\n";
    }
    int start = c - n;
    for(int i = 0; i < n; i++){
        int k = start;
        for(int j = 0; j < n - i; j++){
            cout << k;
            k++;
            if(j < n-i-1){
                cout <<"*";
            }
        }
        start = start - (n - i - 1);
        cout << endl;
    }
    return 0;
}

int main(){
    int n = 4;
    int print = 1;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < 2 * i + 1; j++){
            if(j % 2 ==0){
            cout << print;
            print++;
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
    int ctr = 0;
    int index;
    print = (print - n);
    for(int i = 0; i < n; i++){
    // print = print - (n - i );
    // print k index store
    index = print;
    int ctr = 0;
        for(int j = 0; j < (2 * (n - i )- 1); j++){
            if(j % 2 == 0){
                cout << print;
                print++;
                ctr++;
            }
            else {
                cout << "*";
            }
        }
    print = index - ctr + 1;
        cout << endl;
    }
    return 0;
}
// 55.
/*
7
*
*1*
*121*
*12321*       
*121*
*1*
*
*/
#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int i = 0 ; i <= n/2; i++){
        int k = 0;
        for(int j = 0; j <= i; j++){
            if(j == 0) {
                cout << "*";
            }
            else {
                k++;
                cout << k;
            }
        }
        while (k > 1){
            k--;
             cout << k;
        }
        if(i > 0){
        cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i <  n/2; i++){
        int k = 0;
        for(int j = 0; j < (n/2) - i; j++){
            if(j == 0){
                cout << "*";
            }
            else{
                k++;
                cout << k;
            }
        }
        while (k > 1){
            k--;
             cout << k;
        }
        if(i != n / 2 - 1){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// 56. Floyd's triangle pattern
/*
4
1
23
456
78910
*/

#include<iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int k = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
        cout << k;
        k++;
        }
    cout << endl; 
    }
}


//57.Pascal's Triangle
/*
5
1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int c = 1;
        for(int j = 0; j <= i; j++){
            cout << c << " ";
            c = c * ((i + 1) - (j + 1))/(j + 1);
        }
        cout << endl;
    } 
    return 0;
}
//58.Butterfly pattern
/*
5
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
*/
#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        for(int j = 0; j < 2*((n - i) - 1); j++){
            cout <<" ";
        }
        for(int j = 0; j <=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }
        for(int j = 0; j < 2 * i; j++){
            cout << " ";
       }
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// 59.wap to convert km to miles using functions
#include<iostream>
using namespace std;

float kmtomiles(int n){
    float miles = n * 0.621371;
    return miles;
}
int main () {
    int n; 
    cout << "Enter km: ";
    cin >> n;
    cout << kmtomiles(n);
    return 0;
}

// 60.wap to reverse of a number
#include<iostream>
using namespace std;

void reverse(int n){
    while(n > 0){
        int rem = n % 10;
        cout << rem;
        n = n / 10;
    }
}
int main () {
    int n;
    cin >> n;
    reverse(n);
    return 0;
}

// 61.wap to print area of circle 
#include<iostream>
#include<iomanip>
using namespace std;

void areaofcircle(int r){
    cout << fixed << setprecision(2) << 3.14 * r * r;
}

int main (){
    int r;
    cout << "Enter radius: ";
    cin >> r;
    areaofcircle(r);
    return 0;
}

//62.find the factorial 
#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int main () {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}

// 63.wap to check whether a number is prime or not.
#include<iostream>
using namespace std;

void primenumber(int n){
    int i;
    for(i = 2; i < n; i++){
        if(n % i == 0){
            break;
        }
    }
    if(n == i) {
        cout << "Prime number.";
        }
    else{
        cout << "Not a prime number.";
        }
}

int main () {
    int n;
    cin >> n;
    primenumber(n);
    return 0;
}

// 64.wap to print prime number's from 1 to n.
/*
5
2 3 5 
*/
#include<iostream>
using namespace std;

bool checkprime(int n){
    int i = 2;
    for(i = 2; i < n; i++){
        if(n % i == 0){ 
            return false;
        }
    }
    return true;
}

int main () {
    int n;
    cin >> n;

    for(int i = 2; i <= n; i++){
    int isprime = checkprime(i);
    if (isprime){
        cout << i << " ";
    }
}
    return 0;
}

// 65.wap to set(set 1 ) the kth bit of a number
/*
10
2
14
*/
#include<iostream>
using namespace std;

int setbit(int n, int k){
    return n | (1 << k);
}
int main () {
    int n, k;
    cin >> n >> k;
    cout << setbit(n, k);
    return 0;
}

// 66.wap to convert celsius to fahrenheit and kelvin
#include<iostream>
using namespace std;

void conversion(int n){
    cout << "It's kelvin conversion is: " << n + 273.15 << endl;
    cout << "It's Fahrenheit is: " << n * (9/5) + 32;
}

int main () {
    int n;
    cin >> n;
    conversion(n);
    return 0;
}

// 67.wap to count set(1) bits in a number
#include<iostream>
using namespace std;

void countsetbit(int n){
    int ctr = 0;
    while(n > 0){
        int rem = n % 2;
        if(rem == 1){
            ctr++;
        }
        n /= 2;
    }
    cout << ctr ;
}

int main () {
    int n;
    cout << "Please enter number: ";
    cin >> n;
    countsetbit(n);
    return 0;
}


// 67.wap to count set(1) bits in a number
#include<iostream>
using namespace std;

void countsetbit(int n){
    int ctr = 0;
    while(n > 0){
        int bit = n & 1;
        {
            if(bit == 1){
                ctr++;
            }
            n = n >> 1;
        }
    }
    cout << ctr;
}

int main () {
    int n;
    cin >> n;
    countsetbit(n);
    return 0;
}

// 68. wap for make digits by entering an number
#include<iostream>
using namespace std;

void makedigit(int n){ 
    int num = 0;
    for(int i = 0; i < n; i++){
        int p;
        cout << "Enter Digit: " ;
        cin >> p;
        num =  num * 10 + p;
        cout << "Number created so far: ";
        cout << num << endl;
    }
}
int main () {
    int n;
    cout << "please enter the no. of digits: ";
    cin >> n;
    makedigit(n);
    return 0;
}

// 69.fill an array
#include<iostream>
using namespace std;

// fill an array 
int main () {
    int arr[4];
    fill(arr, arr + 4, 23); // fill with 23
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " ";
    return 0;
}

//index[arr]
#include<iostream>
using namespace std;

int main () {
    int arr[5]; // array declaration

    // array input 
    for(int index = 0; index < 5; index++){
        cout << "please enter the number for index: " << index << endl;
        cin >> arr[index];
    }
    // array output
    for(int index = 0; index < 5; index++){
        cout << index[arr] << " ";
    }
    return 0;
}

// Araays with functions
#include<iostream>
using namespace std;

void check(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << i[arr] << "  ";
    }
}
int main (){
    int arr[] = {10,20,30,40,50};
    check(arr, 5);
    return 0;
}

// Araays with functions
//100  200  300  400  500
#include<iostream>
using namespace std;

void check(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << i[arr] * 10<< "  ";
    }
}
int main (){
    int arr[] = {10,20,30,40,50};
    check(arr, 5);
    return 0;
}

//70. linear search method 
#include<iostream>
using namespace std;

//prototype declaration function name and it's three input parameters
bool checktarget(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
            if(target == arr[i]){
                return 1;
            }
    }
    return 0;
}

int main () {
    int arr[100]; // how array declares with size

    int size;
    cout << "Please enter the number of elements: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        cout << "Enter the element at index: " << i << endl;
        cin >> arr[i];
    }

    int target;
    cout << "Please enter the element for found: ";
    cin >> target;

    cout << checktarget(arr, size, target) << endl;
    
    return 0;                  
}

// 71.max element find out from arrays 
#include<iostream>
using namespace std;

//prototype declaration function name and it's 2 input parameters
int checktarget(int arr[], int size){
        int max_ans = INT8_MIN;
    for(int i = 0; i < size; i++){
            if(arr[i] > max_ans){
                max_ans = arr[i];
            }
    }
    return max_ans;
}

int main () {
    int arr[100]; // how array declares with size

    int size;
    cout << "Please enter the number of elements: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        cout << "Enter the element at index: " << i << endl;
        cin >> arr[i];
    }

    cout << "Maximum element is: " << checktarget(arr, size) << endl;
    
    return 0;                  
}

//Another method for this 

//max element find out from arrays 
#include<iostream>
using namespace std;

//prototype declaration function name and it's input parameters
int checktarget(int arr[], int size){
        int max_ans = INT8_MIN;
    for(int i = 0; i < size; i++){
            if(arr[i] > max_ans){
                max_ans = max(max_ans, arr[i]);
            }
    }
    return max_ans;
}

int main () {
    int arr[100]; // how array declares with size

    int size;
    cout << "Please enter the number of elements: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        cout << "Enter the element at index: " << i << endl;
        cin >> arr[i];
    }

    cout << "Maximum element is: " << checktarget(arr, size) << endl;
    
    return 0;                  
}


//min element find out from arrays 
#include<iostream>
using namespace std;

//prototype declaration function name and it's three input parameters
int checktarget(int arr[], int size){
        int min_ans = INT8_MAX;
    for(int i = 0; i < size; i++){
            if(arr[i] < min_ans){
                min_ans = arr[i];
            }
    }
    return min_ans;
}

int main () {
    int arr[100]; // how array declares with size

    int size;
    cout << "Please enter the number of elements: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        cout << "Enter the element at index: " << i << endl;
        cin >> arr[i];
    }

    cout << "Minimum element is: " << checktarget(arr, size) << endl;
    
    return 0;                  
}


// 72. count total number of 0's and 1's 
#include<iostream>
using namespace std;

//prototype declaration function name and it's three input parameters
void checktarget(int arr[], int size){
    int ctrz = 0;
    int ctro = 0;
    for(int i = 0; i < size; i++){
            if(arr[i] == 0){
                ctrz++;
            }
            else if(arr[i] == 1){
                ctro++;
            }
    }
    cout << "Total number of zero's in this array is: " << ctrz << endl;
    cout << "Total number of one's in this array is: " << ctro << endl;
}

int main () {
    int arr[100]; // how array declares with size

    int size;
    cout << "Please enter the number of elements: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        cout << "Enter the element at index: " << i << endl;
        cin >> arr[i];
    }
    checktarget(arr, size);
    
    return 0;                  
}

// 73.print extreme values of an array
#include<iostream>
using namespace std;

//prototype declaration function name and it's input parameters
void checktarget(int arr[], int size){
    int i = 0;
    int j = size - 1;
    while(i <= j){
        if(i == j){
            cout << arr[i] << " ";
            break;
        }
        else {
            cout << arr[i] << " "; 
            i++;
            cout << arr[j] << " ";
            j--;
        }
    }
}

int main () {
    int arr[100]; // how array declares with size

    int size;
    cout << "Please enter the number of elements: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        cout << "Enter the element at index: " << i << endl;
        cin >> arr[i];
    }
    checktarget(arr, size);
    
    return 0;                  
}

// 74.Swap of two number's 
// Method no. - 1:-- by mine method 

#include<iostream>
using namespace std;

void swap(int b, int a){
    cout << "after swapping: " << endl;
    cout << a << " " << b << endl;
}

int main () {
    int a, b;
    cout << "Please enter the number: " << endl;
    cin >> a >> b;
    swap(a, b);
    return 0;
}

// Swap of two number's 
// Method no. - 2:-- by addtion or subtraction 

#include<iostream>
using namespace std;

void swap(int a, int b){
    cout << "after swapping: " << endl;
    cout << a + b - a<< " " << a + b - b << endl;
}

int main () {
    int a, b;
    cout << "Please enter the number: " << endl;
    cin >> a >> b;
    swap(a, b);
    return 0;
}

// Swap of two number's 
// Method no. - 3:-- by using temp variable
#include<iostream>
using namespace std;

void swap(int a, int b){
    cout << "after swapping: " << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << " " << endl;
}

int main () {
    int a, b;
    cout << "Please enter the number: " << endl;
    cin >> a >> b;
    swap(a, b);
    return 0;
}

// Swap of two number's 
// Method no. - 4:- Exor method
#include<iostream>
using namespace std;

void swap(int a, int b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b;
}

int main () {
    int a, b;
    cout << "Please enter the number: " << endl;
    cin >> a >> b;
    swap(a, b);
    return 0;
}

// Swap of two number's 
// Method no. - 4:- Exor method
#include<iostream>
using namespace std;

void swap(int a, int b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b;
}

int main () {
    int a, b;
    cout << "Please enter the number: " << endl;
    cin >> a >> b;
    swap(a, b);
    return 0;
}

//Reverse an array
#include<iostream>
using namespace std;

int main () {
    int size;
    cin >> size;
    int a[100]; 
    for(int i = 0; i < size; i++){
        cin >> a[i] ;
    }
    // reverse an array 
    for(int i = size - 1; i >=0; i--){
        cout << a[i] <<" ";
    }

    return 0;
}

//Leetcode qs input: [2,4,4]
// output: 2 (print vo kro jo ek hi element ho)
#include<iostream>
using namespace std;

void leetcode(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    cout << ans;
}

int main () {
    int arr[100];
    int size;
    cout << "please enter size: " << endl;
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    leetcode(arr,size);
    return 0;
}

//76.Sorting array's using bubble sort method 
#include<iostream>
using namespace std;

void bubblesort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] >= arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "After Sorting Zero's and One's: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
}

void selectionsort(vector<int> &v){
    int n = v.size();
    for(int i=0; i<n-1; i++){
        int minindex = i;
        for(int j=i+1; j<n; j++){
            if(v[j]<v[minindex]){
                minindex = j;
            }
        }
        swap(v[i], v[minindex]);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }   
}

void insertionsort(vector<int> &v){
    int n = v.size();
    for(int i=1; i<n; i++){
        int current = v[i];
        int j = i-1;
        while(v[j]>current && j>=0){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = current;
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}

int main () {
    int size;
    cout << "please enter the size of elements: " << endl;
    cin >> size;
    int arr[1000];
    for(int i = 0; i < size; i++){
        cout << "Please enter the number at index: " << i << endl;
        cin >> arr[i];
    }
    bubblesort(arr, size);
    vector<int> v = {55,44,33,22,11};
    selectionsort(v);
    insertionsort(v);
    return 0;
}

// 77.sorting of 0's and 1's with time complexity is O(n)

#include<iostream>
using namespace std;

void sortZeroOne(int a[], int size){
    int zerocount = 0;
    int onecount = 0;

    // count 0 and 1's
    for(int i = 0; i < size; i++){
        if(a[i] == 0){
            zerocount++;
        }
        else if(a[i] == 1){
            onecount++;
        }
    }

    int i = 0;
    for(;i < zerocount; i++){
        a[i] = 0;
    }
    for(;i < size; i++){
        a[i] = 1;
    }
}

int main(){
    int size;
    cout << "Please enter the size: ";
    cin >> size;
    int a[1000];
    for(int i = 0; i < size; i++){
        cout << "Please enter the digit at index: " << i << endl;
        cin >> a[i];
    }
    sortZeroOne(a, size);
    for(int i = 0;i < size; i++){-
    cout << a[i] << " ";
    }
    return 0;
}

// sorting of 0's and 1's with time complexity is O(n) with fill function & in-built sort function 
#include<iostream>
#include<algorithm>
using namespace std;

void sortZeroOne(int a[], int size){
    int zerocount = 0;
    int onecount = 0;

    // count 0 and 1's
    for(int i = 0; i < size; i++){
        if(a[i] == 0){
            zerocount++;
        }
        else if(a[i] == 1){
            onecount++;
        }
    }
    fill(a, a+zerocount, 0);
    fill(a + zerocount, a + size, 1);
}

int main(){
    int size;
    cout << "Please enter the size: ";
    cin >> size;
    int a[1000];
    for(int i = 0; i < size; i++){
        cout << "Please enter the digit at index: " << i << endl;
        cin >> a[i];
    }
    // sortZeroOne(a, size);
   // sort(a, a + size); // it will sort the array in ascending order for this we include header file #include<algorithm>
    cout << "after sorting: "<< endl;
    for(int i = 0;i < size; i++){
    cout << a[i] << " ";
    }
    return 0;
}

/*
(10,10), (10,20), (10,30), (10,40), 
(20,10), (20,20), (20,30), (20,40),      
(30,10), (30,20), (30,30), (30,40),      
(40,10), (40,20), (40,30), (40,40),      
*/
#include<iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30, 40};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "(" << a[i] << ",";
            cout << a[j] << "), ";
        }
        cout << endl;
    }
    return 0;
}

//78. check two sum pairs with target value.
/*
40
(10,30) (20,20) (30,10) 
*/
#include<iostream>
using namespace std;

void checktwosum(int a[], int size, int target){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(a[i] + a[j] == target){
                cout << "(" << a[i] << "," << a[j] << ") ";
            }
        }
    }
}

int main() {
    int target, size;
    int a[100];
    cout << "Please enter size of an array: ";
    cin >> size;
    cout << "Please enter elements of an array: ";
    for(int i = 0; i < size; i++){
        cin >> a[i];
    } 
    cout << endl;
    cout << "Enter target value: ";// check target value include in pairs;
    cin >> target;
    checktwosum(a, size,target);
    return 0;
}

// 79.pair example :-- how function returns elements in pairs 
#include<iostream>
using namespace std;

pair<int,int> checktwosum(int a[], int size, int target){
    pair<int,int>ans = make_pair(-1,-1);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(a[i] + a[j] == target){
                ans.first = a[i];
                ans.second = a[j];
                return ans;
            }
        }
    }
    return ans;
}

int main() {
    int target, size;
    int a[100];
    cout << "Please enter size of an array: ";
    cin >> size;
    cout << "Please enter elements of an array: ";
    for(int i = 0; i < size; i++){
        cin >> a[i];
    } 
    cout << endl;
    cout << "Enter target value: ";// check target value include in pairs;
    // cin >> target;
    // pair<int,int>ans = checktwosum(a, size,target);
    // if(ans.first == -1 && ans.second == -1){
    //     cout << "Pair not found"<< endl;
    // }
    else{
        cout << "Pair found: " << ans.first << ", " << ans.second ;
    }
    return 0;
}

// 80.wap to print triplet pairs
#include<iostream>
using namespace std;

void triplet(int arr[], int size){
    int count = 0;
    for(int i = 0;i < size; i++){
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                count++;
            }
        }
        cout << endl;
    } 
    cout << "total triplet pairs: " << count << endl;
}

int main () {
    int arr[] = {10,20,30,40};
    int size = 4;
    triplet(arr, size);
    return 0;
}

// 81.wap to print three sum pairs with non-repeated digits
#include<iostream>
using namespace std;

void triplet(int a[], int size, int target){
    int count = 0;
    for(int i = 0;i < size; i++){
        for(int j = i + 1; j < size; j++){
            for(int k = j + 1; k < size; k++){
                if(a[i] + a[j] + a[k] == target){
                cout << a[i] << ", " << a[j] << ", " << a[k] << endl;
                count++;
            }
        }
        }
        cout << endl;
    } 
     cout << "total triplet pairs: " << count << endl;
}

int main () {
    int a[] = {10,20,30,40};
    int size = 4;
    triplet(a, size,80);
    return 0;
}

// 82.wap to shift an array by n shift
#include<iostream>
using namespace std;

void rotateArray(int arr[], int size, int shift){
    int finalshift = shift % size;

    if(finalshift == 0){
        // no need to do anything
        return ;
    }
        
    //Step1: copy last finalshift elements into a temp array
    int temp[10000];
    int index = 0;
    for(int i = size - finalshift; i < size; i++){
        temp[index] = arr[i]; 
        index++;
    }
    //step2: shift array elements by finalshift places
    for(int i = size - 1; i >= 0; i--){
        arr[i] = arr[i - finalshift];
    }

    //step 3: copy temp elements into original array
    for(int i = 0; i < finalshift; i++){
        arr[i] = temp[i];
    }

}

// vectors for C++;
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v) {
  cout << "Printing vector " << endl;
  int size = v.size();
  for (int i = 0; i < size; i++) {
    cout << v[i] << " ";
    // cout << v.at(i) << " ";
  }
  cout << endl;
}

// using iteraetor method 
void print2(vector<int> v) {
  cout << "Printing vector method 2" << endl;
  for(auto it:v){
	  cout<<it<<" ";
  }
  cout << endl;
}

int main() {
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	print(v);
	print2(v);
  vector<char> v;
  v.push_back('a');

  v.push_back('b');
	v.push_back('c');

  v.push_back('d');

  cout << "Front element: " << v[0] << endl;
  cout << "Front element: " << v.front() << endl;
  cout << "End Element: " << v[v.size() - 1] << endl;
  cout << "End Element: " << v.back() << endl;

  // vector initialization
  vector<int>arr; // default with no data, 0 size
  vector<int>arr2(5, -1); // init with n size with specific data
  // arr2.push_back(50);
  // print(arr2);

  vector<int>arr3 = {1,2,3,4,5};
  // arr3.pop_back();
  // print(arr3);

  vector<int>arr4{1,2,3,4,5};
  // print(arr4);

  // how to copy vector
  vector<int> arr5 = {1,2,3,4,5};
  vector<int>arr6(arr5);
  print(arr6);

   // in vector, dont tell size of vector.
   // just keep inserting, i will manage the allocations.
   vector<int> v; // array hi hai.

   // insert
   int n;
   cin >> n;
   for (int i = 0; i < n; ++i) {
     int d;
     cin >> d;
     v.push_back(d);
   }
   print(v);

  // I want to clear the vector
  v.clear();
  v.push_back(50);
   print(v);

  // pop
  v.pop_back();
    print(v);
}

#include<iostream>
using namespace std;


bool search2DArray(int arr[][4], int rowSize, int colSize, int target) {

    for(int i=0; i<rowSize; i++) {
        for(int j=0; j<colSize; j++) {

            if(arr[i][j] == target) {
                return true;
            }

        }
    }
    //agar line 13 tak pohoch gye
    //iska matlab dono loop traverse kar chuke ho
    //iska matlab entire array traverse kr chuke ho
    //iska matlab entire array me target nahi mila
    //iska matlab target not found
    //iska matlab return false
    return false;
}

int findMinimumIn2DArray(int arr[][4], int rowSize, int colSize) {
    int minValue = INT_MAX;

    for(int i=0; i<rowSize; i++) {
        for(int j=0; j<colSize; j++) {
            minValue = min(arr[i][j], minValue);
        }
    }
    
    return minValue;

}

int findMaximumIn2DArray(int arr[][4], int rowSize, int colSize) {

    int maxAns = INT_MIN;

    for(int i=0; i<rowSize; i++) {
        for(int j=0; j<colSize; j++) {
            maxAns = max(arr[i][j], maxAns);
        }
    }
    //overall T.C -> O(rowSize*colSize)
    //overall S.c-> O(1) space

    return maxAns;

}

void printRowSum(int arr[][4], int rowSize, int colSize) {

    for(int i=0; i<rowSize; i++) {
        int sum = 0;
        //hr row k liye sum starting me 0 hai
        for(int j=0; j<colSize; j++) {
            sum = sum + arr[i][j];
        }
        //jab saare column k element add krliye hai
        //toh fer print krdo
        cout << sum << endl;
    }
    
}

void printColumnSum(int arr[][4], int rowSize, int colSize) {

    for(int col=0; col<colSize; col++) {
        //hr column k liye mere pass sum = 0 hona chahiye 
        int sum = 0;
        for(int row=0; row<rowSize; row++) {
            sum = sum + arr[row][col];
        }
        cout << sum << endl;
    }

}

void printDiagnolSum(int arr[][3], int rowSize, int colSize) {

    int sum = 0;
    
    for(int i=0; i<rowSize; i++) {
        sum = sum + arr[i][i];
    }
    
    cout << "Sum: " << sum << endl;



    // int sum = 0;
    // for(int i=0; i<rowSize; i++) {
    //     for(int j=0; j<colSize; j++) {
    //         if(i == j) {
    //             sum = sum + arr[i][j];
    //         }
    +
    //     }
    // }
    // cout << "sum " << sum <<endl;
}

void transposeMatrix(int arr[][3], int rowSize, int colSize) {

    //same array me hi transpose karo
    for(int i=0; i<rowSize; i++) {
        for(int j=i; j<colSize; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    //printing
    cout << "printint the transpose" << endl;
    for(int i=0; i<rowSize; i++) {
        for(int j=0; j<colSize; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // int ans[100][100] = {0};

    // for(int i=0; i<rowSize; i++) {
    //     for(int j=0; j<colSize; j++) {
    //         ans[i][j] = arr[j][i];
    //     }
    // }

    
    // for(int i=0; i<rowSize; i++) {
    //     for(int j=0; j<colSize; j++) {
    //         cout << ans[i][j] << " ";
    //     }cout << endl;
    // }


}


int main() {

    int arr[3][3] = {
                    {10,11,12},
                    {20,21,22},
                    {30,31,32}
                    };
    int rowSize = 3;
    int colSize = 3;

    transposeMatrix(arr,rowSize, colSize);

    printDiagnolSum(arr,rowSize,colSize);
    
    
    printColumnSum(arr,rowSize,colSize);

    

    printRowSum(arr,rowSize,colSize);


    int maxAns = findMaximumIn2DArray(arr,rowSize,colSize);
    cout << "max num: " << maxAns << endl;


    int ans = findMinimumIn2DArray(arr,rowSize,colSize);
    cout << ans << endl;




    int target = 404;

    bool ans = search2DArray(arr,rowSize,colSize,target);

    cout << "ans is: " << ans << endl;











    // declaring 2D array
    int arr[4][3];

    initialise
    int arr[3][3] = {
                    {10,20,100},
                    {30,40,200},
                    {50,60,300}
                    };
    int rowSize=3;
    int colSize=3;

    // diagnol matrix -> square matrix
    for(int i=0; i<rowSize; i++) {
        cout << arr[i][i] << " ";
    }

    for(int r=0; r<rowSize; r++) {
        for(int c=0; c<colSize; c++) {
            if(r == c) {
                cout << arr[r][c] <<  " ";
            }
        }
        cout << endl;
    }

    int arr[3][2] = {10,20,30,40,50,60};
    int arr[3][2] = {10,20};

    cout << arr[2][1] << endl;

    // traverse the entire array


    // row-wise
    for(int rowIndex = 0; rowIndex<rowSize; rowIndex++) {
        for(int colIndex=0; colIndex<colSize; colIndex++) {
            cout << arr[rowIndex][colIndex] << " ";
        }
        cout << endl;
    }

    // column wise
    for(int col=0; col<colSize; col++) {
        for(int row=0; row<rowSize; row++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    } 


    // square-matrix
    for(int r=0; r<rowSize; r++) {
        for(int c=0; c<colSize; c++) {
            cout << "Printing " << c << ", " << r << endl;
            cout << arr[c][r] << " ";
        }
        cout << endl;
    }


    int arr[2][3];
    int rowSize = 2;
    int colSize = 3;

    // //taking input -> row-wise
    for(int i=0; i<rowSize; i++) {
        for(int j=0; j<colSize; j++) {
            cout << "Enter the value for (" << i << ", " <<j << ") : ";
            cin >> arr[i][j];
        }
    }

    cout << "Printing 2D array: " << endl;
    //row-wise
    for(int rowIndex = 0; rowIndex<rowSize; rowIndex++) {
        for(int colIndex=0; colIndex<colSize; colIndex++) {
            cout << arr[rowIndex][colIndex] << " ";
        }
        cout << endl;
    }




    return 0;
}

// vectors in 2D array
#include <iostream>
#include<vector>
using namespace std;

bool search2DArray(vector<vector<int> > arr, int target){
  int rowSize = arr.size();
  int colSize = arr[0].size();

  for(int i=0; i<rowSize; i++) {
    for(int j=0; j<colSize; j++) {
      if(arr[i][j] == target ) return true;
    }
  }
  return false;
}

int main() {
  vector<vector<int>> arr(4, vector<int>(3,0));
  int rowSize = arr.size();
  int colSize = arr[0].size();
  
  for(int i=0; i<rowSize; i++) {
    for(int j=0; j<colSize; j++) {
      cin >> arr[i][j];
    }
  }

  int target = 40;

  bool ans = search2DArray(arr,target);
  cout << "ans: " << ans << endl;


  return 0;
}

int main(){
    int n;
    cin >> n;
    int arr[1000]; // for arrays 
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }
    // int target;
    // cin >> target;

   // cout << tripletSumToX(arr, n, target);
    //sort0sand1s(arr, n);
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
// 84. Two sum two pointer approach
#include <iostream>
#include <algorithm>
using namespace std;

bool twoSum2pointerapproach(int arr[], int n, int target) {
    int l = 0;
    int h = n - 1;

    while (l < h) {
        int csum = arr[l] + arr[h];
        if (csum == target) return true;
        else if (csum > target) h--;
        else l++;
    }
    return false;
}

bool hasArrayTwoCandidates(int arr[], int n, int target) {
    sort(arr, arr + n);
    return twoSum2pointerapproach(arr, n, target);
}

int main() {
    int arr[] = {1, 4, 45, 6, 10, -8};
    int n = sizeof(arr);
    int target = 16;

    if (hasArrayTwoCandidates(arr, n, target))
        cout << "Yes, pair exists" << endl;
    else
        cout << "No, pair does not exist" << endl;

    return 0;
}


// 85.find pivot index with time_complexity is O(n * n) = O(n ^ 2);
#include<iostream>
using namespace std;

void pivotindex(int arr[], int n){
    for(int index = 1; index < n - 1; index++){  // check from 0 to n-1
        int lsum = 0, rsum = 0;

        for(int i = 0; i < index; i++){
            lsum += arr[i];
        }

        for(int i = index + 1; i < n; i++){
            rsum += arr[i];
        }

        if(lsum == rsum){
            cout << "Pivot index is: " << index << endl;
            return;
        }
    }
            cout << "Not found" << endl;
}

int main () {
    int n;
    int arr[] = {1, 10, 9};
    pivotindex(arr, n);
    return 0;
}

// 85.find pivot index with time_complexity is O(n)
#include<iostream>
using namespace std;

void pivotindex(int arr[], int n){
    int lsum[n] = {0}, rsum[n] = {0};
    // cal. lsum array
    for(int i = 1; i < 5; i++)
        lsum[i] = lsum[i - 1] + arr[i - 1];
    
    // cal.rsum array
    for(int i = n - 2; i > 0; --i){
        rsum[i] = rsum[i + 1] + arr[i + 1];
    }
    // check krte h
    for(int i = 0; i < 5; i++){
        if(lsum[i] == rsum[i]) 
            cout << "yes index is: " << i;
    }
    return;
}

int main () {
    int arr[5] = {1,2,3,0,3};
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    pivotindex(arr, n);
    return 0;
}

// 86.find missing number time complexity is O(n logn)
#include<iostream>
using namespace std;

void missingnumber(int arr[], int n){
    // check
    for(int i = 0; i <= n; i++){
        if(arr[i] != i){
            cout << "Missing number is: " << i;
            return;
        }
    }
    cout << "No number is missing.";
}


int main(){
    int n, temp;
    cout << "Please enter size: ";
    cin >> n;
    int arr[10000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){

            if(arr[j] > arr[j + 1]){
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    missingnumber(arr, n);
    return 0;
}

// find missing number with time complexity is O(n) 
#include<iostream>
using namespace std;

int missingnumber(int arr[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans ^=  arr[i];
    }
    for(int i = 0; i <= n; i++){
        ans ^= i;
    }
    return ans;
}


int main(){
    int n, temp;
    cout << "Please enter size: ";
    cin >> n;
    int arr[10000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Missing number is: " << missingnumber(arr, n);
    return 0;
}

//87.wap for finding max avg in an subarray 
// For array [1, 12, -5, -6, 50, 3] and K = 4
// All subarrays of size 4 are:

// [1, 12, -5, -6] → avg = 0.5  
// [12, -5,9 -6, 50] → avg = 12.75  
// [-5, -6, 50, 3] → avg = 10.5
#include<iostream>
using namespace std;

void bruteforce(int nums[], int size, int k){
    int maxsum = INT8_MIN;
    int i = 0, j = k - 1;
    while(j < size){
        int sum = 0;
        for(int i = 0; i <= j; i++){
            sum += nums[i];
        }
        maxsum = max(maxsum, sum);
            ++i, ++j;
    }
    double maxavg = maxsum / (double)k;
    cout << maxavg;
}

int main () {
    int arr[] = {6, 1, 12, -5, -6, 50, 3};
    for(int i = 0; i < 7; i++){
        cin >> arr[i];
    }
    int k;
    cout << "Please enter the value of K: " << endl;
    cin >> k;
    bruteforce(arr, size, k);
    return 0;
}

// another method

#include<iostream>
using namespace std;

void slidingwindow(int nums[], int size, int k){
    int i = 0, j = k - 1;
    int sum = 0;
    for(int i = 0; i <= j; i++){
            sum += nums[i];
        }
    int maxsum = sum;
    j++;
    while(j < size){
        sum -= nums[i++];
        sum += nums[j++];
        maxsum = max(maxsum, sum);
        }
    double maxavg = maxsum / (double)k;
    cout << maxavg;
    }

int main () {
    int arr[1000];
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int k;
    cout << "Please enter the value of K: " << endl;
    cin >> k;
    slidingwindow(arr, size, k);
    return 0;
}

// 88.wap to remove duplicates from an array.
/* Input:
arr = [1, 1, 2, 2, 3, 3, 4]
size = 7

Output:
New length = 4
Modified array = [1, 2, 3, 4]
*/
#include<iostream>
#include<algorithm>  // for sort
using namespace std;

int removeduplicates(int arr[], int size) {
    if (size == 0) return 0;

    int j = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}

int main() {
    int size;
    cin >> size;
    int arr[1000];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + size);  // ✅ Sort the array before removing duplicates

    int newSize = removeduplicates(arr, size);

    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


// 89.Move all negative number to the left side of an array
#include<iostream>
using namespace std;

void moveALLnegativetoleft(int *a,int n){
    int l = 0, h = n - 1;
    while(l < h){
        if(a[l] < 0){
            l++;
        }
        else if(a[h] > 0){
            h--;
        }
        else {
            swap(a[l], a[h]);
        }
    }
}

int main () {
    int a[] = {1,2,-3,4,-5,6};
    int n = sizeof(a)/sizeof(int);
    moveALLnegativetoleft(a, n);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

//90. Wap to find the duplicate number with modifying an array.
/*
Enter size of array: 6
1 3 4 2 2 5
Duplicate number is: 2
*/
void duplicate(int arr[], int size){
    for(int i = 0 ; i + 1 < size; i++){
        if(arr[i] == arr[i + 1]){
             cout << "Duplicate number is: " << arr[i];
             break;
        }
    }
}

int main() {
    int arr[1000];
    int size;
    cout << "Please enter the size of an array: ";
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    sort(arr, arr + size);
    duplicate(arr, size);
    return 0;
}
// pr 

int duplicate(int arr[], int size){
    int ans = -1;
    for(int i = 0; i < size; i++){
        int index = abs(arr[i]);
        
        // already visited
        
        if(arr[index] < 0){
            ans = index;
            break;
        }
        // mark negative
        arr[index] *= -1;
    }
    return ans;
}

int main() {
    int arr[1000];
    int size;
    cout << "Please enter the size of an array: ";
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "duplciate number is: " << duplicate(arr, size);
    return 0;
}

// method -- 03

//90. Wap to find the duplicate number also it modifying an array.
#include<iostream>
#include<algorithm>
using namespace std;

int duplicate(int arr[], int size){
    while(arr[0] != arr[arr[0]]){
        swap(arr[0], arr[arr[0]]);
    }
}

int main() {
    int arr[1000];
    int size;
    cout << "Please enter the size of an array: ";
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "duplciate number is: " << duplicate(arr, size);
    return 0;
}

//91.wap to find missing elements from an array with duplicates 

// method - 01

#include<iostream>
using namespace std;

void missing(int arr[], int n){
    for(int i = 0; i < n; i++){
        int index = abs(arr[i]);
        if(arr[index - 1] > 0){
            arr[index - 1] *= -1;
        }
    }

    for(int i = 0; i < n; i++){
         if(arr[i] > 0){
            cout << i + 1 << " ";
        }
    }
}

// // int main (){
// //     int arr[] = {1,3,5,3,4};
// //     // size of an array
// //     int n = sizeof(arr)/sizeof(int);
// //     missing(arr, n);
// //     return 0;
// // }

// // // 92. find common elements in 3 sorted array 
// // #include<iostream>
// // #include<algorithm>
// // using namespace std;

void missing(int a[], int b[], int c[], int n1, int n2, int n3){
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2 && k < n3){
        if(a[i] == b[j] && b[j] == c[k] && c[k] == a[i]){
            cout << a[i] << " ";
            i++;
            j++;
            k++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else if(b[j] < c[k]){
            j++;
        }
        else{
            k++;
        }
    }
}

int main (){
    int a[] = {1,3,5,6,9};
    // size of an array
    int n1 = sizeof(a)/sizeof(int);
    int b[] = {9, 3, 1, 3, 6, 8};
    // size of an array
    int n2 = sizeof(b)/sizeof(int);
    int c[] = {5, 3, 9, 1, 3 ,7, 6};
    // size of an array
    int n3 = sizeof(c)/sizeof(int);
    sort(a, a + n1);
    sort(b, b + n2);
    sort(c, c + n3);
    missing(a, b, c, n1, n2, n3);
    return 0;
}

// 93.wap to print wave of a matrix by using vector's.

/*    ---
{1,2,3,4},
{5,6,7,8},
{9,10,11,12}
5  9  10 6 2 3  7  11  12 8 4
*/
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
    vector<vector<int>>v = {// vector declaration
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    wavematrix(v);   // function call
    return 0;
}

// //  //94.wap to print spiralmatrix
#include<iostream>
#include<vector>
using namespace std;

void spiralmatrix(vector<vector<int>>v){
    int m = v.size();
    int n = v[0].size();
    int total_elements = m * n;

    int startingrow = 0;
    int endingcol = n - 1;
    int endingrow = m - 1;
    int startingcol = 0;

    int count = 0;
    while (count < total_elements){    
    //1. starting row
    for(int i = startingcol ; i <= endingcol && count < total_elements; i++){
        cout << v[startingrow][i] << " ";
        count++;
    }
    startingrow++;
    //2. ending column 
    for(int j = startingrow; j <= endingrow && count < total_elements; j++){
        cout << v[j][endingcol] << " ";
        count++;
    }
    endingcol--;
    //3.ending row
    for(int i = endingrow; i >= startingcol && count < total_elements; i--){
        cout << v[endingrow][i] <<  " ";
        count++;
    }
    endingrow--;
    //4.starting col
    for(int i = endingrow; i >= startingrow && count < total_elements; i--){
        cout << v[i][startingcol] << " ";
        count++;
    }
    startingcol++;
}
}
int main(){
    vector<vector<int>>v {
       {1,  2,   3, 4,   5,  6},
       {7,  8,   9, 10, 11, 12},
       {13, 14, 15, 16, 17, 18},
       {19, 20, 21, 22, 23, 24},
       {25, 26, 27, 28, 29, 30}
    };
    spiralmatrix(v);
    return 0;
}

// In container's vector part cover up
// 95.C++ with STL :-- (contgainer's) -- 1.vector part 
#include<iostream>
using namespace std;
#include<vector> // for using vector

int main() {

    // vector initialise with values 
    vector <int> v = {10,20};


    // vector initialise without values
    vector<int> age; // creates a vector of size 10 with all elements initialized to 0
    age.push_back(10); // adds an element to the end of the vector
    age.push_back(20); // adds another element to the end of the vector     
    age.push_back(30);

    // Using begin() and end()
    // for (auto it = v.begin(); it != v.end(); ++it) {
    //     cout << *it << " ";
    // }
    // v.reserve(4);
    // v.push_back(60);
    
    // v.push_back(60);
    
    // v.push_back(60);
    // v.push_back(60);
    // cout << v[5] << endl;
    // size function used
    // cout << age.size() << endl;// prints the size of the vector
    
    // empty function used 
    // if(age.empty()) {
    //     cout << "Vector is empty" << endl; // checks if the vector is empty
    // } else {
    //     cout << "Vector is not empty" << endl;
    // }

    // Capacity function using
    cout << age.capacity() << " ";

    // max_size function used
    cout << age.max_size() << endl;
    cout << v.max_size() << endl;

    // front and back functions used
    cout << "Front element: " << v.front() << endl; // prints the first element of the vector
    cout << "Back element: " << v.back() << endl; // prints the last

    // push_back or pop_back functions used
    v.push_back(30); // adds an element to the end of the vector    
    cout << "After push_back: ";
    for (auto it = v.begin(); it != v.end(); ++it) {                    
        cout << *it << " "; // prints the elements of the vector after push_back    
    }
    v.pop_back();  // delete last element of a vector
    for (auto it = v.begin(); it != v.end(); ++it) {                    
        cout << *it << " "; // prints the elements of the vector after push_back    
    }

    // insert function used
    v.insert(v.begin(), 80); // inserts an element at the beginning of the vector
    cout << "After insert: ";  
     for (auto it = v.begin(); it != v.end(); ++it) {                    
        cout << *it << " "; // prints the elements of the vector after push_back    
    }            
    
    // erase function used
    v.erase(v.begin(), v.end() - 1); 
    for (auto it = v.begin(); it != v.end(); ++it) {        
        cout << *it << " "; // prints the elements of the vector after erase    
    }

    // clear function used 
    v.clear(); // clears the vector, removing all elements
    cout << v.size() << endl; // prints the size of the vector after clearing it
     for (auto it = v.begin(); it != v.end(); ++it) {        
        cout << *it << " "; // prints the elements of the vector after erase    
    }

    // swap function used 
    cout << "Before Swap: " << "\n";
    cout << "Age vector is : ";
    for (auto it = age.begin(); it != age.end(); ++it) {    
        cout << *it << " "; // prints the elements of the vector after erase    
    }
    cout << endl;
    cout << "V vector is: ";
    for (auto it = v.begin(); it != v.end(); ++it) {        
        cout << *it << " "; // prints the elements of the vector after erase    
    }
    cout << endl;
    swap(v, age); // swaps the contents of two vectors
    cout << "After swap: "<< "\n";  
    cout << "Age vector is : ";  
    for (auto it = age.begin(); it != age.end(); ++it) {    
        cout << *it << " "; // prints the elements of the vector after erase    
    } 
    cout << endl;
    cout << "V vector is: ";
      for (auto it = v.begin(); it != v.end(); ++it) {        
        cout << *it << " "; // prints the elements of the vector after erase    
    }
    return 0;
}

// iterator in c++ with vector (how to traverse the 1D vector using iterator)
//96.This file is part of a C++ project that demonstrates the use of iterators.
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // declaring a 1D vector of integers
    vector<int> first;
    // adding elements to the vector
    first.push_back(10);
    first.push_back(20);        
    first.push_back(30);
    first.push_back(40);
    
    // using an iterator to traverse the vector
    vector<int>::iterator it = first.begin();
    cout << "Using iterator to traverse the vector: ";
    while(it != first.end()) {      
        cout << *it << " "; // dereferencing the iterator to get the value  
        it++; // moving to the next element
}
return 0;
}

// 2D vector or 2D array
int main () {
    vector<vector<int>> arr(4, vector<int>(5, 0));
    // Initializing a 2D vector with 4 rows and 5 columns, all elements set to 0
    // row and column size
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            cout << arr[i][j] << " "; // output elements of 2D vector
        }
        cout << "\n" ;
    }   
    return 0;
}

// 97.jagged array example using vector
/*
Jagged Array: 
0 0 0 0 
0 0 
0 0 0 0 0 
0 0 0 
0 
*/
int main() {
    // declaring a 2D vector having 5 rows and each row having a different number of columns
    vector<vector<int>> jaggedArray(5); // 2d array with 5 rows
    // first row having 4 columns
    jaggedArray[0] = vector<int>(4, 0); // 4 columns initialized to 0  
    jaggedArray[1] = vector<int>(2, 0); // 2 columns initialized to 0
    jaggedArray[2] = vector<int> (5, 0); //5 columns initialized to 0
    jaggedArray[3] = vector<int>(3, 0); //3 columns initialized to 0
    jaggedArray[4] = vector<int> (1, 0); //1 columns initialized to 0
    cout << "Jagged Array: \n";
    for(int i = 0; i < jaggedArray.size(); i++){
        for(int j = 0; j < jaggedArray[i].size(); j++){
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


// 99.list 
// member function of list(container's)
#include<iostream>
#include<list>
#include<queue>
#include<stack>
using namespace std;

int main() {
    list<int> l;
    l.push_back(1);
    // 1 
    l.push_back(2);
    // 1 --> 2
    l.push_back(3);
    // 1 --> 2 --> 3
    l.push_back(4);
    // 1 --> 2 --> 3 --> 4
    l.push_back(5);
    // 1 --> 2 --> 3 --> 4 --> 5

    // begin() and end() are member functions of list
    cout << endl;
    // for traverse the list we use iterator
    list<int>::iterator it = l.begin();
    while(it != l.end()){
        cout << *it << " ";
        it++;
    }

    // size function 
    cout << l.size() << endl; // 5

    // empty function
    cout << l.empty() << endl; // 0 (false)

    // front function
    cout << l.front() << endl; // 1 

    // back function
    cout << l.back() << endl; // 5

    // pop_front function
    l.pop_front();  // 2 --> 3 --> 4 --> 5
    cout << l.front() << endl; // 2     

    // pop_back function
    l.pop_back(); // 2 --> 3 --> 4          
    cout << l.back() << endl; // 4
 
    // push_back function
    l.push_back(6); // 2 --> 3 --> 4 --> 6      

    // push_front function  
    l.push_front(1); // 1 --> 2 --> 3 --> 4 --> 6       

    // insert function
    l.insert(2, 10); // 1 --> 2 --> 10 --> 3 --> 4 --> 6    

    // erase function 
    l.erase(l.begin()); // 2 --> 10 --> 3 --> 4 --> 6

    list<int> l2;
    l2.push_back(7);
    l2.push_back(8);    
    
    // swap function
    l.swap(l2); // l now contains 7, 8 and l2 contains

    cout << l.front() << endl; // 7
    cout << l.back() << endl; // 8

    // remove function
    l.remove(7); // removes all occurrences of 7 from the list
    cout << l.front() << endl; // 8
    // clear function
   // l.clear(); // list is now empty

    return 0;

    // queue declaration
    queue<int> q;
    // same functionality in it's member function
    
    stack<int> st;
} 

// 100.dequeue 
#include<iostream>
#include<queue>
using namespace std;

int main () {
    // create or declare a queue
    deque<int> dq;
 
    // functionality of member function is same as previous container's

    // here iterator is used 
}

// priority queue 
#include<iostream>
#include<queue>
using namespace std;

int main() {
    // create or declaration a priority queue
    priority_queue<int> pq;
    // it automatic obey's max heap(maximum value ko priority p rkhega means sbse aange)
    // Same functionality of it's member function as preivous container's
    // min-heap
    priority_queue<int,vector<int>,greater<int>> pq1;
    // it stores value in increasing order it gives priority to the min value first 

}

// 101.map 
#include<iostream>
#include<map>  // header file for map 
#include<unordered_map> // header file for unordered_map
using namespace std;

int main () {

    // another map
    map<int, string> table; // map with int as key and string as value
    
    table[3] = "three";
    table.insert(make_pair(4, "four"));

    table.insert(make_pair(1, "one"));
    table.insert(make_pair(2, "two"));
    
    map<int,string>::iterator it = table.begin(); // pointing to first element of map 
    while(it != table.end()) {
       // cout << it->first << " : " << it->second << endl; // accessing key and value
       pair<int,string> temp = *it; // dereferencing the iterator to get the pair
       cout << temp.first << " : " << temp.second << endl; // accessing key and value
        it++;
    }


    // creation 
    // map<string,string> table;
    // key & value both are strings type 

    // insert function 
    // insertion way's
    pair<string,string> p;
    p.first = "br";
    p.second = "brazil";
    table.insert(p); // 
    table["in"] = "India";
    // using insert
    table.insert(make_pair("en", "england"));

    

    // begin and end
   map<string,string>::iterator it = table.begin(); // pointing to first element of map 
   while(it != table.end()) {
       cout << it->first << " : " << it->second << endl; // accessing key and value
      pair<string,string> temp = *it; // dereferencing the iterator to get the pair
      cout << temp.first << " : " << temp.second << endl; // accessing key and
       it++;
    }

    // empty function
    if(table.empty() == true){
        cout << "Table is empty." << endl;
    }
    else {
        cout << "table is not empty." << endl;
    }

    // size() 
    cout << table.size() << endl;

    // using .at
    cout << table.at("in") << endl; // accessing value using key
    table.at("in") = "india2"; // updating value using key
   table["in"] = "India3";      // modify value 
   cout << table.at("in") << endl; // accessing updated value

//    erase function
    table.erase(table.begin(), table.end());
    cout << table.size() << endl;

    // find function
    table.find("in"); // returns an iterator to the element with key "en"
    if(table.find("in") != table.end()) {
        cout << "Key 'in' found in the map." << endl;
    } else {
        cout << "Key 'in' not found in the map." << endl;
    }

    // count function
    if(table.count("in") > 0) { 
        cout << "Key 'in' exists in the map." << endl;
    } else {
        cout << "Key 'in' does not exist in the map." << endl;
    }

}

// 102.set container's
#include<iostream>
#include<set>
#include<unordered_set> // for unordered set 
using namespace std;

int main() {
    // create or declare a set
    // ordered set
    //set<int> st;

    // unordered set
    unordered_set<int> st;
    
    // insert function
    // insert elements into the set
    st.insert(10);
    st.insert(15);
    st.insert(20);
    st.insert(2);
    st.insert(5);

    // begin and end member of function of set
    // traverse the set container using iterator
    unordered_set<int>::iterator it = st.begin();
    while(it != st.end()){
        cout << *it << " ";
        // returns output in sorted order
        it++;    }

    cout << endl;

    // empty function
    cout << st.empty() << endl; // 0 (false) if set is not empty, 1 (true) if set is empty

    // size function
    cout << st.size() << endl;
    
    // erase function 
    st.erase(15); // particular element is erased
    set<int>::iterator it = st.begin();
    while(it != st.end()){
        cout << *it << " ";
        // returns output in sorted order
        it++;    }

    clear function
    st.clear();
    cout << st.size() << endl;

    // find function
    if(st.find(10) != st.end()){
        cout << "\nElement found" << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    // count function
    if(st.count(155) == 1){
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }
}

// map 
#include<iostream>
#include<map>  // header file for map 
#include<unordered_map> // header file for unordered_map
using namespace std;

int main () {

    // another map
    map<int, string> table; // map with int as key and string as value
    
    table[3] = "three";
    table.insert(make_pair(4, "four"));

    table.insert(make_pair(1, "one"));
    table.insert(make_pair(2, "two"));
    map<int,string>::iterator it = table.begin(); // pointing to first element of map 
    while(it != table.end()) {
       // cout << it->first << " : " << it->second << endl; // accessing key and value
       pair<int,string> temp = *it; // dereferencing the iterator to get the pair
       cout << temp.first << " : " << temp.second << endl; // accessing key and value
        it++;
        }

    // find function
    if(table.find(2) != table.end()) {
        cout << "Key 2 found in the map." << endl;      
    } else {
        cout << "Key 2 not found in the map." << endl;  
         //count function
    if(table.count(1) > 0) { 
        cout << "Key 1 exists in the map." << endl;
    } else {
        cout << "Key 1 does not exist in the map." << endl;
    }
}
}

// Algorithms 
// Algorithms in STL
// Iterator's and iterating algorithms
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printdouble(int x) {
    cout <<  x * 2 << " ";
}

bool checkeven(int x) {
    return x % 2 == 0;
}
int main () {
    // Iterator's and Iterating Algorithms
    
    // using vector bcz we need dynamic array
    vector<int> v;
    v.push_back(10);
    v.push_back(15);    
    v.push_back(20);
    v.push_back(27);
    v.push_back(32);
    v.push_back(33);

    // for_each loop to print vector elements by double  
    for_each(v.begin(), v.end(), printdouble);

    // find_if algorithm to find an element in vector
   auto it = find_if(v.begin(), v.end(), checkeven);
    cout << *it << endl;  // sbse pehle element jo conatiner me hoga vo return hoga 

    // count algorithm to count even numbers in vector      
    int target = 20;
   cout << count(v.begin(), v.end(), target) << endl;

//    count_if algorithm to count even numbers in vector
   count_if(v.begin(), v.end(), checkeven);
   cout << count_if(v.begin(), v.end(), checkeven) << endl;

    // sort algorithm to sort the vector
   sort(v.begin(), v.end()); // sort the vector in ascending order
   cout << "After sorting: ";
    for(auto it:v) {
        cout << it << " ";
    }
    cout << endl;

    // reverse algorithm to reverse the vector
    reverse(v.begin(), v.end());
    for(auto it: v){
       cout << it << " ";
    }

    // rotate algorithm to rotate the vector
    rotate(v.begin(), v.begin() + 5, v.end());
    for(auto it: v){
        cout << it << " ";
    }

    // unique algorithm to remove
    // auto it = unique(v.begin(), v.end());
    v.erase(it, v.end()); // remove duplicates
    cout << "After removing duplicates: ";
    for(auto it: v){
        cout << it << " ";
    }

    // partition algorithm to partition the vector
    auto it = partition(v.begin(), v.end(), checkeven);
    for(auto a: v) {
        cout << a << " ";
    }
}

// 103.Algorithms in STL
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void printdouble(int x) {
//     cout <<  x * 2 << " ";
// }

int checkeven(int x) {
    return x % 2 == 0;
}

int main () {
    // Iterator's and Iterating Algorithms
    
    // using vector bcz we need dynamic array
    vector<int> v = {1,2,3,4,5,6};

    // for_each loop to print vector elements by double  
    for_each(v.begin(), v.end(), printdouble);

    // find algorithm to find an element in vector  
    [] int target = 3;
    auto it = find(v.begin(), v.end(), target);
    cout << *it << endl;  // sbse pehle element jo conatiner me hoga vo return hoga
    
    // find_if algorithm to find an element in vector
   auto it = find_if(v.begin(), v.end(), checkeven);
    cout << *it << endl;  // sbse pehle element jo conatiner me hoga vo return hoga 

    // count algorithm to count even numbers in vector      
    int target = 20;
   cout << count(v.begin(), v.end(), target) << endl;

//    count_if algorithm to count even numbers in vector
    int ans = count_if(v.begin(), v.end(), checkeven);
    // cout << ans << endl;

    // sort algorithm to sort the vector
  sort(v.begin(), v.end()); // sort the vector in ascending order
   cout << "After sorting: ";
    for(auto it:v) {
        cout << it << " ";
    }
    cout << endl;

    // reverse algorithm to reverse the vector
    reverse(v.begin(), v.end());
    for(auto it: v){
       // cout << it << " ";
    }

    // rotate algorithm to rotate the vector
    rotate(v.begin(), v.begin() + 2, v.end()); // left shift by 5 elements
    rotate(v.begin(), v.end() - 2, v.end());  // right shift by 2 elements

    for(auto it: v){
        cout << it << " ";
    }

    // unique algorithm to remove
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end()); // remove duplicates
    cout << "After removing duplicates: ";
    for(auto it: v){
        cout << it << " ";
    }

   // partition algorithm to partition the vector
    partition(v.begin(), v.end(), checkeven);
    for(auto a: v) {
        cout << a << " ";
    }
}

// //104. iterator.cpp
#include<iostream>
#include<vector>
#include<forward_list>
using namespace std;

int main () {
    // create vector 
    //vector<int> v = {1,2,3};

    create iterator for traversing the vector
    vector<int>:: iterator it = v.begin();
    while(it != v.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // types of iterator's
    // 3. forward iterator
    forward_list<int> list;
    list.push_front(10);
    list.push_front(20);     
    list.push_front(30);

    // traverse the singly linked list using forward iterator
    forward_list<int>:: iterator it = list.begin();
    while(it != list.end()){
        // write the iterator value
        (*it) = (*it) + 5; // increment each element by 5
       // read the iterator value
        cout << *it << " ";
        it++;
    }
    // cout << "this not print anything." << endl;

    //bidirectional iterator :-- in which we initialise the iterator be like list.begin() for forward iteration and list.end() - 1 for backward iterating 

    // Random access iterator :-- used like list.begin() + 3 be like that

}

//105.for functor's firstly we need to study OOPS concepts 

#include<iostream>
using namespace std;

class functorOne {
    public:
        bool operator()(int a, int b) {
            return a > b;
        }
};

int main() {
    functorOne cmp;
    if( cmp(10,5 ) == true ) {
        cout << "10 is greater than 5" << endl; 
    }
    else {
        cout << "10 is less than 5";
    }
    return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

class Student{
    public:
        int marks;
        string name;
        Student() {

        }
        Student(int m, string n) {
            this->marks = m;
            this->name = n;
        }
};

class comparator{
    public:
        bool operator()(Student a, Student b) {
            //criteria -> max marks->high priority
            return a.marks < b.marks;
        }
};

int main() {

    priority_queue<Student, vector<Student>, comparator > pq;

    pq.push(Student(90,"Love"));
    pq.push(Student(27,"Lakshay"));
    pq.push(Student(99,"Amit"));
    pq.push(Student(82,"Sharma"));

    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();
    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();
    cout << pq.top().marks << " " << pq.top().name << endl;
    pq.pop();
    cout << pq.top().marks << " " << pq.top().name << endl;

    //max heap
    // priority_queue<int> pq;
    // priority_queue<int,vector<int>, less<int> > pq3;
    // //min-heap
    // priority_queue<int,vector<int>, greater<int> > pq2;



    return 0;
}

// 106.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// class comparator{
// public:
//     bool operator()(int a, int b) {
//         return a > b;
//     }
// };

// int main() {

//     vector<int> arr;

//     arr.push_back(20);
//     arr.push_back(10);
//     arr.push_back(15);

//     //ascending order
//     sort(arr.begin(), arr.end(),comparator());

//     //print
//     for(int a: arr) {
//         cout << a << " ";
//     }
//     cout << endl;



//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// class Student{
//     public:
//         int marks;
//         string name;
//         Student() {

//         }
//         Student(int m, string n) {
//             this->marks = m;
//             this->name = n;
//         }
// };

// class comparator{
// public:     
//     bool operator()(Student a, Student b) {
//         if(a.marks == b.marks) {
//             return a.name < b.name;
//         }
//         return a.marks > b.marks;
//     }
// };

// int main() {
//     vector<Student> arr;
//     arr.push_back(Student(90,"Love"));
//     arr.push_back(Student(90, "Laksay"));
//     arr.push_back(Student(95,"Kunal"));

//     sort(arr.begin(), arr.end(), comparator());

//     for(Student a: arr) {
//         cout << a.marks << " " << a.name << endl;
//     }



//     return 0;
// }

// // //// ------------------------------- oops(objects + classes) week 8-------------------------------------------------
//107. Write a C++ program to demonstrate class creation with constructors, copy constructor, destructor, and dynamic memory allocation.
#include<iostream>
#include<string>
using namespace std;

// class creation 
class Student {
    public:   // encapsulation

    // Attributes
    int id, age, nos;
    string name;
    int *gpa;


    // ctor constructor
     Student() {
     cout << "Student default ctor called." << endl;
     }
    
    // parameterised constructor 
    Student(int id, int age, int nos, string name, float gpa){
        this->id = id;
        this->age = age;
        this->nos = nos;
        this->name = name;
        cout << "Student parameterised ctor called." << endl;
        this->gpa = new int(gpa); // dynamic memory allocation for gpa
    }

    // copy constructor
    Student(const Student &srcobj){
        cout << "Student copy ctor called." << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->nos = srcobj.nos;
        this->name = srcobj.name;
    }

    // behaviour /functions / methods
    void study() {
        cout << this->name << " Studying" << endl;
    }   

    void sleep() {
        cout << this->name << " sleeping..." << endl;
    }   

    void bunk() {
        cout << this->name << " bunking..." << endl;
    }

    // dtor destructor 
    ~Student(){
    cout << "Student default dtor called" << endl;
    delete this->gpa; // deallocating the memory allocated for gpa
    }
};

// object creation
int main() {
    Student A;
    A.id = 1;
    A.age = 20;
    A.nos = 5;  
    A.name = "John";
    A.study();

    Student B;
    B.id = 1;
    B.age = 20;
    B.nos = 5;  
    B.name = "Doe";
    B.sleep();

    // Another way to create an object
    Student A(1, 20, 5, "John");   // for this to work, we need to define a parameterised constructor
    Student B(2, 21, 6, "Doe");

    A.study();
    B.bunk();

    ctor copy
   Student C = A; // copy all the attributes of A to C
    Student C(A); // copy all the attributes of A to C
    cout << "C.id: " << C.id << endl; 

    C.name = "Cathy"; // changing the name of C
    // C.study();

    // Dynamic allocation or student pointer
    Student *D = new Student(3,24,8,"Alice", 9.8);
    cout << D->name << endl;
    cout << D->id << endl;
    cout << D->age << endl;
    cout << D->nos << endl;
    cout << *(D->gpa) << endl;
    D->study(); // using arrow operator to access the method of the object
    delete D; // Deallocating the memory allocated for D

    return 0;
}

// // // // Implementing Encapsulation(binds data and methods) in C++
// oops = fundamental concepts of (object + classes)
#include<iostream>
#include<string> // header file for string class
using namespace std;

// for defining object in C++ firstly we need to create a class

class Student {
    public: // access specifier / Encapsulation

    // attributes :-- those variable which use to describe the object
    int id, age, nos;
    string name;

private: 
    float *gpa;
    string gf;

public:   // access modifier
    // ctor 
    Student() {
        cout << "Default ctor called.\n";
    }

    // parameterised ctor called later
    Student(int id, int age, int nos, string name, float gpa, string gf) {
        cout << "parameterised ctor called.\n";
        this->id = id; 
        this->age = age;
        this->nos = nos;
        this->name = name;
        this->gpa = new float(gpa);
        this->gf = gf;
    }

    // behaviour/ functions / methods
    void dance() {
        cout << this->name << " dancing\n";
    }
    void study() {
        cout << this->name << " studying\n";
    }
    void sleep() {
        cout << this->name << " Sleeping\n";
    }

    // dtor called 
    ~Student() {
        cout << "Default dtor called.\n";
        delete this->gpa;
    }

private: 
    void gfchatting() 
    {
        cout << this->name << " chatting with gf \n" ;
    }
    
};

// creating objects after class
int main () {
   Student A(1, 12, 4, "john", 7.8, "Menu");

   cout << A.age << endl;

    A.sleep();
    return 0; 
}

// Perfect Encapsulation :-- all attributes is hidden 
// Implementing Encapsulation(binds data and methods) in C++
// oops = fundamental concepts of (object + classes)
#include<iostream>
#include<string> // header file for string class
using namespace std;

// for defining object in C++ firstly we need to create a class

class Student {
 private:  // access specifier / Encapsulation

    // attributes :-- those variable which use to describe the object
    int id, age, nos;
    string name;
    float *gpa;
    string gf;

public:  
    // getter and setter

     
    void setgpa(float a){
        // layer of authentication
        *this->gpa = a;
    }

    float getgpa() const{
        return *this->gpa;
    }

    float getAge() const{
        return this->age;
    }
    

    // ctor 
    Student() {
        cout << "Default ctor called.\n";
    }

    // parameterised ctor called later
    Student(int id, int age, int nos, string name, float gpa, string gf) {
        cout << "parameterised ctor called.\n";
        this->id = id; 
        this->age = age;
        this->nos = nos;
        this->name = name;
        this->gpa = new float(gpa);
        this->gf = gf;
    }

    // behaviour/ functions / methods
    void dance() {
        cout << this->name << " dancing\n";
    }
    void study() {
        cout << this->name << " studying\n";
    }
    void sleep() {
        cout << this->name << " Sleeping\n";
    }

    // dtor called 
    ~Student() {
        cout << "Default dtor called.\n";
        delete this->gpa;
    }

private: 
    void gfchatting() 
    {
        cout << this->name << " chatting with gf \n" ;
    }
    
};

// creating objects after class
int main () {
   Student A(1,12, 5, "john", 7.8, "Menu");

   // getter and setter lgane k baad aap access nhi kr paoge cout k through 
   //cout << A.age << endl; 
   
   cout << A.getgpa() << endl;
   A.setgpa(9.8);
   cout << A.getgpa() << endl;
    cout << A.getAge() << endl;
    A.sleep();
    return 0; 
}


// Implementing inheritance in C++ by using vehicle example
#include<iostream>
#include<string>

using namespace std;

class Vehicle{                     // base class or parent class
protected: 
    string name;
    string model;
    int no_of_tyres;

public:
    Vehicle(string _name, string _model, int _no_of_tyres){
        cout << "I am inside Vehicle constructor" << endl;
        this->name = _name;
        this->model = _model;           
        this->no_of_tyres = _no_of_tyres;
    }
public:
    void start_engine(){
        cout << "Engine started " << name << " " << model <<endl;
    }
    void stop_engine(){
        cout << "Engine stopped " << name << " " << model << endl;
    }

    //dtor 
    ~Vehicle(){
        cout << "I am inside Vehicle destructor" << endl;
    }
};    

class Car : public Vehicle{              // inheritance used here 
protected:
    int no_of_doors;                    // specific to car h
    string transmission_type;

public:
    Car(string _name, string _model, int _no_of_tyres, int _no_of_doors, string _transmission_type) : Vehicle(_name,_model, _no_of_tyres){
        cout << "I am inside Car constructor" << endl; 
        this->no_of_doors = _no_of_doors;
        this->transmission_type = _transmission_type;
    }

    void start_AC(){
        cout << "AC started " << name << endl;
    }

    // dtor 
    ~Car(){
        cout << "I am inside Car destructor" << endl;
    }
};

class Motorcycle : public Vehicle{
protected:
    string handlebarstyle;
    string suspensionstype;

    // parameterised ctor called
public:
    Motorcycle(string _name, string _model, int _no_of_tyres,string _handlebarstyle, string _suspensiontype) : Vehicle(_name,_model, _no_of_tyres){
        cout << "I am inside Motorcycle constructor" << endl;
        this->handlebarstyle = _handlebarstyle;
        this->suspensionstype = _suspensiontype;
    }

    void wheelie(){
        cout << "Wheeeeee "<< name << endl;
    }   
    // dtor
    ~Motorcycle(){
        cout << "I am inside Motorcycle destructor" << endl;
    }
};

int main() {
    Car A("BMW", "X5", 4, 4, "manual");
    A.start_engine();
    A.start_AC();
    A.stop_engine(); 

    // Motorcycle B("KTM", "Duke", 2, "flat", "monoshock");
    // B.start_engine();
    // B.wheelie();
    // B.stop_engine();
    return 0;
}


// 110.types of inheritance through code 
#include<iostream>
#include<string>
using namespace std;

// Base class for Single Inheritance
class Employee
{
protected:
    string name;
    int employeeId;

public:
    Employee(const string &empName, int empId) : name(empName), employeeId(empId)
    {
        // cout << __FUNCTION__ << endl;
    }

    void display() const
    {
        cout << "Employee: " << name << ", ID: " << employeeId << endl;
    }
};

// Derived class for Single Inheritance
class Developer : public Employee
{
private:
    string programmingLanguage;

public:
    Developer(const string &empName, int empId, const string &lang)
        : Employee(empName, empId)
    {
        this->programmingLanguage = lang;
    }

    void show() const
    {
        display();
        cout << "Specialization: Developer, Programming Language: " << programmingLanguage << endl;
    }
};

// Base classes for Multiple Inheritance
class ProjectManager
{
protected:
    string projectManaged;

public:
    ProjectManager(const string &project) : projectManaged(project) {}

    void manageProject() const
    {
        cout << "Project Manager managing project: " << projectManaged << endl;
    }
};

class TeamLead
{
protected:
    int teamSize;

public:
    TeamLead(int size) : teamSize(size) {}

    void leadTeam() const
    {
        cout << "Team Lead leading a team of " << teamSize << " members." << endl;
    }
};

// Derived class for Multiple Inheritance
class TechLead : public Employee, public ProjectManager, public TeamLead
{
public:
    TechLead(const string &empName, int empId, const string &project, int teamSize)
        : Employee(empName, empId), ProjectManager(project), TeamLead(teamSize) {}

    void displayInfo() const
    {
        display();
        manageProject();
        leadTeam();
    }
};

// Base class for Multi-level Inheritance
class HRManager : public Employee
{
public:
    HRManager(const string &empName, int empId) : Employee(empName, empId)
    {
        cout << __FUNCTION__ << endl;
    }

    void handleHRDuties() const
    {
        cout << "HR Manager handling human resources duties." << endl;
    }
};

// Derived class for Multi-level Inheritance
class HRDirector : public HRManager
{
public:
    HRDirector(const string &empName, int empId) : HRManager(empName, empId)
    {
        cout << __FUNCTION__ << endl;
    }

    void manageHRDepartment() const
    {
        cout << "HR Director managing the HR department." << endl;
    }
};

// Base class for Hierarchical Inheritance
class Executive : public Employee
{
public:
    Executive(const string &empName, int empId) : Employee(empName, empId) {}

    void makeExecutiveDecisions() const
    {
        cout << "Executive making executive decisions." << endl;
    }
};

// Derived classes for Hierarchical Inheritance
class CEO : public Executive
{
public:
    CEO(const string &empName, int empId) : Executive(empName, empId) {}

    void leadCompany() const
    {
        makeExecutiveDecisions();
        cout << "CEO leading the company." << endl;
    }
};

// Base classes for Hybrid Inheritance
class MarketingManager : public Employee
{
public:
    MarketingManager(const string &empName, int empId) : Employee(empName, empId) {}

    void createMarketingStrategy() const
    {
        cout << "Marketing Manager creating a marketing strategy." << endl;
    }
};

class SalesManager : public Employee
{
public:
    SalesManager(const string &empName, int empId) : Employee(empName, empId) {}

    void boostSales() const
    {
        cout << "Sales Manager boosting sales." << endl;
    }
};

class BusinessDevelopmentManager : public MarketingManager, public SalesManager
{
public:
    BusinessDevelopmentManager(const string &empName, int empId)
        : MarketingManager(empName, empId), SalesManager(empName, empId) {}

    void coordinateBusinessDevelopment() const
    {
        createMarketingStrategy();
        boostSales();
        cout << "Business Development Manager coordinating business development efforts." << endl;
    }
};

int main()
{
    // Single Inheritance
    // Developer dev("Ramu Kaka", 101, "C++");
    // dev.show();

    // // Multiple Inheritance
    TechLead techLead("Anna Dev", 202, "Project X", 5);
    techLead.displayInfo();

    // // Multi-level Inheritance
    // HRDirector hrDirector("Lucy Madam", 303);
    // hrDirector.handleHRDuties();
    // hrDirector.manageHRDepartment();

    // Hierarchical Inheritance
    // CEO ceo("Devi Lal", 404);
    // ceo.leadCompany();

    // // Hybrid Inheritance
    // BusinessDevelopmentManager bdManager("Sam Uncle", 606);
    // bdManager.coordinateBusinessDevelopment();

    return 0;
}

//Compile time polymorphism
// Polymorphism in C++
// function overloading 
#include<iostream>
using namespace std;

// class add{
//     public:
//     int sum(int a, int b){
//         return a+b;
//     }
//     int sum(int a, int b, int c){
//         return a+b+c;
//     }
//     double sum(double a, double b){
//         return a + b;
//     }
// };

// 111.operator overloading
#include<iostream>
using namespace std;

class Complex{
public:
    // attributes 
    double real, imag;

    // by default when no any value is passing 
    Complex() {
        real = imag = -1;
    }

    // parameterised constructor called
    Complex(double r, double i){
        this->real = r;
        this->imag = i;
    }

    // operator overloading concept 
    Complex operator+(const Complex &C3){
        Complex temp;
        temp.real = this->real + C3.real;
        temp.imag = this->imag + C3.imag;
        return temp;
    }

    Complex operator-(const Complex &C3){
        return Complex(real - C3.real,imag - C3.imag);
    }

    Complex operator*(const Complex &other){
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    Complex operator/(const Complex &other){
        double denom = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag)/ denom, (imag * other.real - real * other.imag)/denom);
    }

    bool operator==(const Complex &other){
        return (real == real && imag == other.imag);
    }
    void print(){
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1;
    cout << c1.real << endl;
    cout << c1.imag << endl;

    Complex C2(4,5);
    C2.print();
    Complex C3(4,5);
    C3.print();

    // addition of complex number
    Complex C4 = C2 + C3;
    cout << "Addition: \n";
    C4.print();

    same for substraction 
    Complex C5 = C2 - C3;
    cout << "Substraction: \n";
    C5.print();

    for multiplication
    Complex C6 = C2 * C3;
    cout << "Multiplication: \n";
    C6.print();

    for division 
    Complex C7 = C2 / C3;
    cout << "Division: \n";
    C7.print();

    // for Equality 
    if(C2 == C3){
        cout << "C2 and C3 are equal.\n";
    }
    else {
        cout << "C2 and C3 are not equal.\n";
    }
    return 0;
}

//112. Runtime Polymorphism
#include<iostream>
using namespace std;

// base class 
class Shape{
    public:

    virtual void draw() {
        cout << "Generic drawing..." << endl;
    }
};

// derived class, children class , sub_class 
class Circle: public Shape{
public:
    void draw() override{
        cout << "Circle drawing..." << endl;
    }
}; 

class Rectangle: public Shape{
public:
    void draw() override{
        cout << "Rectangle drawing..." << endl;
    }
};

class Triangle: public Shape{
public:
    void draw() override{
        cout << "Triangle drawing..." << endl;
    }
};

// early binding --> compile n sbse pehle shape dekha to shape call hoga

// late binding ho rhi h with virtual keyword 
void shapedrawing(Shape *s){
    s->draw();     // draw is polymorphic
}
// for creating objects
int main() {
    Circle c;
    Rectangle r;
    Triangle t;
    shapedrawing(&c);
    shapedrawing(&r);
    shapedrawing(&t);

    // w/o virtual keyword
    Shape *s = new Shape();
    s->draw();

    // UPCASTING --> Parent pointer/reference me child object store karna
    Shape *s3 = new Circle();
    s3->draw();

    Circle *c = new Circle();
    c-> draw();

    // Downcasting --> child pointer me parent 
    Shape *s2 = new Shape(); // shape k object bnaya 
    Circle *c2 = (Circle *)s2; // forcefully circle m downcast
    c2->draw();
    return 0;
}

// // Miscellaneous concepts 

// // // Miscellaneous concepts :-- Const keyword , initialization list & macros
// #include<iostream>
// using namespace std;


// 113.Demonstrate Global vs Local Variables and Scope Resolution (::) in C++.
// scope defn in cpp -- inside main function from curly braces 

// global and local variable

// local variable defn :-- variable defined inside a function or block or scope 

// global variable defn :-- variable defined outside all functions and blocks
#include<iostream>
using namespace std;

int x = 10; // global variable

int main() {
    cout << x << endl; // 10
    int x = 20; // local variable
    cout << x << endl; // 20
    cout << ::x << endl; // 10; // :: accessing global variable or scope resolution operator
    {// inside scope
        cout << x << endl; // 20
        cout << ::x << endl; // 10
        int x = 30;
        cout << x << endl; // 30
        ::x = 40; // modifying global variable
        cout << ::x << endl; // 40
    }
   
}

//114.Demonstrate Initialization List and Const Data Member in C++.
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

// // // kisi object ko const banaya to whi function ko call krega jo const ho
// // void printABC(const abc &a){
// //     cout << a.getX() << " " << a.getY() << " " << a.getZ()  << endl;
// // }

// // int main(){
// //     abc b(1,2,3);
// //     printABC(b);
// //     return 0;
// // }

// 115.Explain and demonstrate how the const keyword works with variables and pointers in C++.

#include<iostream>
using namespace std;
int main(){

    // 1. const variable
    const int x = 5;  
    // x = 10;  ❌ can't reassign a value
    cout << x << endl;

    // 2. pointer to const data (constant data, non-constant pointer)
    const int *a = new int(2);
    cout << *a << endl;
    // *a = 20;  ❌ can't modify the data
    int b = 20;
    a = &b;  // ✅ pointer itself can be reassigned
    cout << *a << endl;

    // 3. const pointer (constant pointer, non-constant data)
    int *const p = new int(2);
    cout << *p << endl;
    *p = 20;  // ✅ allowed to modify data
    cout << *p << endl;
    // int b2 = 50; p = &b2;  ❌ pointer can't be reassigned

    // 4. const pointer to const data (both constant)
    const int *const q = new int(10);
    cout << *q << endl;
    // *q = 50;  ❌ can't modify data
    // int b3 = 10; q = &b3;  ❌ can't reassign pointer

    return 0;
}


// macros keyword in cpp
#include<iostream>
using namespace std;

// macro used with capital letter for better SEO
#define Max(a,b) (a > b ? a : b)
#define PI 3.14
float circleArea(float r){
    return PI * r * r;
}

void main() {
    cout << Max(10,20) << endl;
    cout << Max(100,50) << endl;
    cout << Max(1.5, 2.5) << endl;
    cout << Max('A', 'B') << endl; // ASCII value comparison
}


int main() {
    cout << circleArea(1) << endl;
    return 0;
}


// // // Static Keyword in class
// // Static data member and static member function

// // static data member :-- ek aisa data member jo class k sabhi object k liye common hota h
// // static member function :-- ek aisa member function jo class k sabhi object k liye common hota h


// // static data member
// // #include<iostream>
// // using namespace std;

// // class abc {
// // public:
// //     static int x, y; // static keyword se ye class k sabhi object k liye same rhega
    
// //     void print(){
// //      cout << x  << " " << y << endl;
// //     }
// // };

// // // x and y vo kisi ek object k instance nhi h vo puri class k instance h 
// // int abc::x;
// // int abc::y;

// // // print function kisi particular k nhi hoga so abc krke kr skte h 
// // int main() {
// //     abc obj1;
// //     abc::print();
// //     abc obj2;
// //     abc::print();
// //     abc::print();
// //     return 0;
// // }  

// // static member function
// // class abc {
// //     public:
// //     int x, y;

// //     abc() : x(0), y(0) {}

// //     static void print(){
// //         printf("I am in static %s\n", __FUNCTION__); 
// //         // __function__ means current function name
// //         // here print is a static function so it will print print
// //     }
    
// // };

// // int main() {
// //     abc obj1;
// //     obj1.print();
// //     abc::print();
// //     abc obj2;
// //     abc::print();
// //     abc::print();
// //     return 0;
// // }  

// 118.Shallow copy and deep copy in cpp
#include<iostream>
using namespace std;

class abc{
public: 
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // shallow copy constructor
    abc(const abc &a){
        x = a.x;
        y = a.y; // copying address
    }

    // deep copy constructor
    // abc(const abc &a){
    //     x = a.x;
    //     y = new int(*(a.y)); // copying value
    // }

    void print() const {
        printf("x: %d\ny: %d\nContent of y(*y): %d\n", x, y, *y);
    }


    ~abc(){
        delete y;
    }
};

int main() {
    abc a(1,2);
    cout << "Printing a:" << endl;
    a.print();

    abc b = a; // copy constructor called
    cout << "Printing b: " << endl;
    b.print();
    *b.y = 20; // modifying b's y
    cout << "After modifying b's y:" << endl;
    b.print();

    cout << "Printing a again to check if it is affected:" << endl;
    a.print(); // to check if a is affected

    // if we use shallow copy then a's y will be affected and it gives error at runtime double free or corruption
    // if we use deep copy then a's y will not be affected so that's reason we need to use always deep copy constructor when we have pointer in class 

    abc *a = new abc(1,2);
    abc b = *a;
    delete a;
    b.print();

    return 0;
}


//119. can ctor made private
// yes , we can make ctor private

#include<iostream>
using namespace std;

class Box{
    int width;
    // ctor
    Box(int _w) : width(_w) {};

    public: 
    int getWidth() const {
        return width;
    }

    void setWidth(int val){
        width = val;
    }

    friend class BoxFactory;
};

class BoxFactory {
    int count;

public: 
     Box getABox(int _w)
     {
        ++count;
        return Box(_w);
     }
};

int main(){
    BoxFactory bfact;
    Box b = bfact.getABox(5); // here in this line we store width 5 in box object b using BoxFactory
    cout << b.getWidth() << endl;
    return 0;
}

// 120.frined keyword in cpp 
#include<iostream>
using namespace std;

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
};

class B{
    public:
    void print(const A &a){
        cout << a.getX() << endl;
    }
};

int main() {
    A c(5);
    B b;
    b.print(c);
    return 0;
}


// friend class
// 120.frined keyword in cpp 
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

// real world me use nhi krna chahiye bcz kisi class k private members ko dusri class se access krna koi means nhi banta hai. Ye sirf educational purpose k liye h  ai.


// 121.Virtual keyword 
#include<iostream>
using namespace std;

// virtual keyword in cpp
class Base {
public:
    Base()
    {
        cout << "Base ctor\n";
    }

    virtual ~Base(){
        cout << "Base dtor\n";
    }
};

class Derived : public Base 
{
    int *a;

    public:
    
    Derived(){
        cout << "Derived ctor\n";
    }

    ~Derived(){
        cout << "Derived dtor\n";
    }
};

int main(){
    Base *b = new Derived();
    delete b;
    return 0;
}



//122. Binary search -- Monotonic function

#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> &nums, int target){
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
         if(nums[mid] == target){
            return mid;
        }
        else if(target > nums[mid]){
            // right side me jao
            start = mid + 1;
        }
        else if(target < nums[mid]){
            end = mid - 1;
        }
        // mid = (start + end)/2;
    }
    return -1;
}

int main() {
    vector<int>arr = {-1,0,3,5,9,12};
    int target = 9;
    cout << binarysearch(arr, target);
    return 0;
}

// first occurence with binary search with store and compute

#include<iostream>
using namespace std;

void findFirstOccurence(int nums[],int n, int target, int &ansindex){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
         if(nums[mid] == target){
            // ans found --> may or may not be first occurence
            // store and compute
            ansindex = mid;
            // kyoki first occurence ki baat ho rhi h toh left me hi jana pdega
            end = mid - 1;
        }
        else if(target > nums[mid]){
            // right side me jao
            start = mid + 1;
        }
        else if(target < nums[mid]){
            end = mid - 1;
        }
        // mid = (start + end)/2;
    }
}

int main() {
    int arr[] = {5,10,20,20,20,20,20,30,40,50,60};
    int n = 11;
    int target = 60;
    // -1 means index not found
    int ansindex = -1;
    // binary search lgane jaa rha hu to pakka array sorted hi hoga
    findFirstOccurence(arr, n , target, ansindex);
    cout << "First Occ index: " << ansindex << endl;
    return 0;
}


// last occurence with binary search with store and compute

#include<iostream>
using namespace std;

void findlastOccurence(int nums[],int n, int target, int &ansindex){l
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
         if(nums[mid] == target){
            // ans found --> may or may not be first occurence
            // store and compute
            ansindex = mid;
            // kyoki first occurence ki baat ho rhi h toh left me hi jana pdega
            start = mid + 1;
        }
        else if(target > nums[mid]){
            // right side me jao
            start = mid + 1;
        }
        else if(target < nums[mid]){
            end = mid - 1;
        }
        // mid = (start + end)/2;
    }
}

int main() {
    int arr[] = {5,10, 10,20,20,20,20,20,30,40,50,60};
    int n = 12;
    int target = 20;
    // -1 means index not found
    int ansindex = -1;
    // binary search lgane jaa rha hu to pakka array sorted hi hoga
    findlastOccurence(arr, n , target, ansindex);
    cout << "First Occ index: " << ansindex << endl;
    return 0;
}

// binary search (Ascending order)
#include<iostream>
#include<algorithm>
using namespace std;

int binarysearchasc(int arr[], int size, int target){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/ 2;
    while(s <= e){
        // jb equal ho jae y target mil jae
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            // left m searh kro
            e = mid - 1;
        }
        else if(arr[mid] < target){
            // right m search kro 
            s = mid + 1;
        }
        // mid value updation
        mid = s + (e - s)/2;
    }
    return -1;
}

int binarysearchdsc(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while(start <= end){
        // jb equal ho jae
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            start = mid + 1;
        }
        else if(arr[mid] < target){
            end = mid - 1;
        }
        mid = start + (end - start)/ 2;
    }
    return -1;
}

int binarysearchfirstoccur(int arr[], int size, int target, int &index){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while(start <= end){
        if(arr[mid] == target){
            // index p store kro
             index = mid;
            // check kro ki usse pehle to nhi h 
            // left p move kro
            end = mid - 1;
        }
        else if(target < arr[mid]){
            // left p move kro
            end = mid - 1;
        }
        else if(arr[mid] < target){
            // right jao
            start = mid + 1;
        }
        // mid ko update 
        mid = start + (end - start) / 2;
    }
    return index;
}

int binarysearchlastoccur(int arr[], int size, int target, int &index){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while(start <= end){
        if(arr[mid] == target){
            // index p store kro
             index = mid;
            // check kro ki usse baad to nhi h 
            // right p move kro
            start = mid + 1;
        }
        else if(target < arr[mid]){
            // left p move kro
            end = mid - 1;
        }
        else if(arr[mid] < target){
            // right jao
            start = mid + 1;
        }
        // mid ko update 
        mid = start + (end - start) / 2;
    }
    return index;
}

int totaloccur(int arr[], int size, int target, int &index){
    int first = -1, last = -1;
    
    binarysearchfirstoccur( arr,  size,  target, first);
    

    binarysearchlastoccur( arr,  size,  target, last);

    if(first == -1 || last == -1){
        return -1;
    }
    return last - first + 1;
}

int missingnumberindexlogic(int arr[], int &size){
    for(int i = 0; i < size; i++){
        if(arr[i] != i)
        return i;
    }
    return size;
}

int missingnumberxorlogic(int arr[], int &size){
    // by taking xor of all elements of an array with all no. withing a range from 0 to n

    int xor1 = 0;
    int xor2 = 0;
    // xor of elements in range
    for(int i = 0; i <= size; i++){
        xor1 = (xor1) ^ i;
    }

    // xor of elements in an array 
    for(int i = 0; i < size; i++){
        xor2 = arr[i] ^ xor2;
}
    return xor1 ^ xor2;

}

int missingnumbersumlogic(int arr[], int &n){
    int total = n * (n + 1)/2;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return total - sum;
}

int missingnumbersirlogic(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int index = size;
    while(start <= end){
        // found cdn 
        int diff = arr[mid] - mid;  

        if(diff == 0){
            // right m jao 
            start = mid + 1;
        }
        else if(diff == 1){
            // store krwao
            index = mid;
            // left m check krke aao
            end = mid - 1;
        }
        mid = start + (end - start)/2;
        }
    return index;
    }

int main() {
    // asc order 
    int arr[] = {6,7,8,9,10,12,14};
    // dsc order
    int arr[] = {99, 97, 92, 72, 63, 42};
    // first occur and last occur arr
    int arr[] = {10, 20 , 20 , 20 , 20 , 20 ,  60, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target ;
    cin >> target;
    cout << binarysearchasc(arr, size, target);
    cout << binarysearchdsc(arr, size, target);
    cout << binarysearchfirstoccur(arr, size, target, index);
    cout << binarysearchlastoccur(arr, size, target, index);
    int index = -1;
    int arr[] = {10, 20 , 20 , 20 , 20 , 20 ,  60, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target ;
    cin >> target;
    cout << totaloccur(arr, size, target, index);
    int arr[] = {3, 4, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    cout << missingnumbersirlogic(arr, size);
    cout << missingnumberindexlogic(arr, size);
    cout << missingnumberxorlogic(arr, size);
    cout << missingnumbersumlogic(arr, size);
    return 0;
}

// // ----------------- Mega Class Arrays -------------------
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<climits>
using namespace std;

//123.Write a program to find the 2’s complement of a binary number stored in a vector.

vector<int> binaryrepresentation(vector<int> &arr){
    // size of declared vector
    int n = arr.size();
    // new vector 
    vector<int> twoscomp(n + 1, 0);
    // flip the array
    for(int i = n - 1; i >= 0; i--){
        twoscomp[i + 1] = arr[i] == 0 ? 1 : 0;
    }

    // // check print
    // for(int i = 0; i < twoscomp.size() ; i++){
    //     cout << twoscomp[i] ;
    // }
    // cout << endl;

    // add 1 
    int carry = 1;
    int sum = 0;
    for(int i = twoscomp.size() - 1; i >= 0; i--){
        sum = twoscomp[i] + carry;
        twoscomp[i] = sum % 2;
        carry = sum / 2;
    }

    if(carry == 0){
        twoscomp.erase(twoscomp.begin());
    }
    // // check print
    for(int i = 0; i < twoscomp.size() ; i++){
        cout << twoscomp[i] ;
    }
    cout << endl;

    return twoscomp;
}

//124.Wap to count the frequency of each element in an array and print it using a map.
void printmap(unordered_map<int, int> freqmap){
    unordered_map<int, int>:: iterator it;
    cout << "\n-- Map has below things--\n" ;
  for(it = freqmap.begin(); it != freqmap.end(); it++){
        int key = it->first;
        int freq = it->second;
    cout << key << " " << freq << endl;
    }
}

//125. Find the element that appears only once in an array where every other element appears twice using a frequency map.
int singlenumbermapmethod(vector<int> &nums){
    // freq table
    unordered_map<int, int> freqmap;
  
    //add freqs to the map table 
    for(int i = 0; i < nums.size(); i++){
        int num = nums[i];
        freqmap[num] += 1;
        // printmap(freqmap);
}
// return -1;
    unordered_map<int, int>:: iterator it;
    int ans;
    for(it = freqmap.begin(); it != freqmap.end(); it++){
        int key = it->first;
        int freq = it->second;
        if(freq == 1){
            ans = key;
            break;
        }
    }
    return ans;
}

//126.Rotate a given square matrix by 90 degrees clockwise using the transpose + reverse method.
void rotatearray(vector<vector<int>> &matrix){
    // new matrix for store transpose
    // step - 1 transpose 
    int rowsize = matrix.size();
    int columnsize = matrix[0].size();
        vector<vector<int>> newm(rowsize, vector<int>(columnsize, 0));
    for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < columnsize; j++){
            //newm[i][j] = matrix[j][i]; by self method
            swap(newm[i][j], matrix[j][i]);
        }
    }
    // cout << "Transpose:\n";
    // for(int i = 0; i < rowsize; i++){
    //     for(int j = 0; j < columnsize; j++){
    //         cout << newm[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // step 2. reverse row wise
    cout << "Rotate array:\n";
    for(int i = 0; i < rowsize; i++){
        reverse(newm[i].begin(), newm[i].end());
    }
       for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < columnsize; j++){
            cout << newm[i][j] << " ";
        }
     cout << endl;
    }
}

// maximum subarray 
// int maximumsubarraynaivemthod(vector<int> &nums){
//     // naive method
//     int ans = INT_MIN;
//     for(int i = 0; i < nums.size(); i++){
//         int sum = 0;
//         for(int j = i; j < nums.size(); j++){
//             sum += nums[j];
//             ans = max(ans, sum);
//         }
//     }
//     return ans;
// }

//127.Find the maximum sum of any contiguous subarray in the given array (Maximum Subarray Problem).
int maximumsubarraykadanemthod(vector<int> &nums){
    // kadane algorithm 
    int ans = INT_MIN;
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        ans = max(sum, ans);
        if(sum < 0){
            sum = 0;
        }
    }
    return ans;
}


int main() {
    // vector declaration
    vector<int> arr = {1,0,1,0};
    binaryrepresentation(arr);
     vector<int> arr = {4,1,2,1,2};
    cout << singlenumbermapmethod(arr);
    // 2D vector with representing n * n matrix
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout << "Before:\n";
    int rowsize = matrix.size();
    int columnsize = matrix[0].size();
    for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < columnsize; j++){
            cout << matrix[i][j] << " ";
        }
     cout << endl;
    }
    rotatearray(matrix);

    // maximum subarray 
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    // cout << maximumsubarraynaivemthod(arr);
    cout << maximumsubarraykadanemthod(arr);

    return 0;
}

//-------------(Searching and Sorting class -2)---------
//128.Find the index of the peak element in a mountain array (an array that first increases then decreases) using binary search.
int peakmountain(vector<int> &nums){
    int start = 0;
    int end = nums.size() -1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(nums[mid] < nums[mid + 1]){
            // right jao
             start = mid + 1;
        }
        else{
            // left jao 
            end = mid ;
        }
        mid = start + (end - start)/2;
    }
    return mid;
}

//129.Search for a target element in a rotated sorted array using the pivot + binary search approach.
int getPivotIndex(vector<int> &arr){
    int s=0,e=arr.size()-1,mid=s+(e-s)/2;
    while(s<=e){
        if(mid+1<arr.size() && arr[mid]>arr[mid+1]) return mid;
        else if(arr[mid]<arr[0]) e=mid-1;
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    return -1;
}

int binarySearch(int s,int e,int target,vector<int> &arr){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) s=mid+1;
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return -1;
}

int searchInRotatedArray(vector<int>& nums,int target){
    int pivot=getPivotIndex(nums),n=nums.size()-1;
    if(pivot==-1) return binarySearch(0,n,target,nums);
    if(target>=nums[0] && target<=nums[pivot]) return binarySearch(0,pivot,target,nums);
    else return binarySearch(pivot+1,n,target,nums);
}
//130.Search an element in a 2D matrix (each row & col sorted) using binary search.
bool searchIn2DMatrix(vector<vector<int>>& matrix,int target){
    int rows=matrix.size(),cols=matrix[0].size();
    int s=0,e=rows*cols-1,mid=s+(e-s)/2;
    while(s<=e){
        int row=mid/cols,col=mid%cols;
        if(matrix[row][col]==target) return true;
        else if(target>matrix[row][col]) s=mid+1;
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return false;
}

 //131. Find square root of a number using binary search (return floor value)
int mySqrt(int x){
    int s=0,e=x,ans=-1; long long mid=s+(e-s)/2;
    while(s<=e){
        long long sq=mid*mid;
        if(sq==x) return mid;
        if(sq<x){ ans=mid; s=mid+1; }
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}

int main() {
    // vector<int> arr = {0, 10, 5, 2};
    // cout << peakmountain(arr);
    // vector<int> arr = {4,5,6,7, 0, 1,2};
    // cout << searchinarotatedarray(arr, 0);
    // vector<vector<int>> arr = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16}
    // };
    // cout << searchina2DMatrix(arr, 10);
    cout << mySqrt(50);
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

// Given two integers one is a dividend and the other is the divisor, we need to find the quotient when the dividend is divided by the divisor without the use of any ” / “ and ” % “ operators

// Input: dividend = 10, divisor = 2
// Output: 5
// Explanation: 10/2 = 5.

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.33333… which is truncated to 3.

//134.Divide two integers without using / or % and return the quotient (truncate toward zero).
int Quotient(int dividend, int divisor){
    int index = -1;
    int start = 0;
    int end = dividend;
    int quotient = start + ((end - start) >> 1);
    while(start <= end){
        if(divisor * quotient == dividend){
            return quotient;
        }
        else if(divisor * quotient < dividend){index = quotient;
            start = quotient + 1;
        }
        else  end = quotient - 1;
        quotient = start + (end - start) / 2;
    }
    return index;
}

// // Given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1] i.e. arr[i] can only be swapped with either arr[i+1] or arr[i-1]. The task is to search for an element in this array.

// // Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
// // Output: 2
// // Explanation: Output is index of 40 in given array i.e. 2

// // Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
// // Output: -1
// // Explanation: -1 is returned to indicate the element is not present

//132.Search target in a nearly sorted array where each element may be misplaced by ±1 index
int nearlysearch(int arr[],int size,int target){
    int s=0,e=size-1,mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target) return mid;
        if(arr[mid-1]==target) return mid-1;
        if(arr[mid+1]==target) return mid+1;
        if(target>arr[mid]) s=mid+2;
        else e=mid-2;
        mid=s+(e-s)/2;
    }
    return -1;
}

// 133.Find the single non-duplicate element in a sorted array
int singleelementinasortedarray(vector<int> &arr){
    int s=0,n=arr.size(),e=n-1,mid=s+(e-s)/2;
    while(s<=e){
    if(s==e)return arr[s];
    int currVal=arr[mid];
    int leftVal=-1;
    if(mid-1>=0)leftVal=arr[mid-1];
    int rightVal=-1;
    if(mid+1<n)rightVal=arr[mid+1];
    if(currVal!=leftVal&&currVal!=rightVal)return currVal;
    if(currVal==leftVal&&currVal!=rightVal){
    int pairStartingIndex=mid-1;
    if(pairStartingIndex&1)e=mid-1;
    else s=mid+1;
}
else if(currVal!=leftVal&&currVal==rightVal){
int pairStartingIndex=mid;
if(pairStartingIndex&1)e=mid-1;
else s=mid+1;
}
mid=s+(e-s)/2;
}
return -1;
}

    

int main() {
    int dividend = -10,  divisor = -3;
    int ans = Quotient(abs(dividend), abs(divisor));
    if((dividend  > 0 &&  divisor < 0) && (dividend < 0 && divisor > 0)){
        ans = 0 - ans;
    }
    cout << "dividend = -10,  divisor = -3, Quotient = " << ans;


    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int size = 7;

    int target = 20;

    int ans = nearlysearch(arr, size, target);
    cout << "Found at Index: " << ans << endl;

    vector<int> arr = {1,2,2,3,3};
    cout <<  singleelementinasortedarray(arr);
    
    return 0;
}

//++++++++++++++++++++Mega class (Searching and sorting)+++++++++++++++
// // precision of sqrt
// #include <iostream>
// #include <algorithm>
// #include<vector>
// using namespace std;

// 135.Given an array bloomDay where bloomDay[i] is the day the i‑th flower blooms, find the minimum number of days required to make m bouquets, each consisting of k consecutive flowers. If it’s impossible, return -1.
bool canWeMakeMBouquetsWithDDays(vector<int>& bloomDay,int m,int k,int D){
    int counter=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=D) counter++;
        if(counter==k){
            m--; counter=0;
            if(m==0) break;
        }
        if(bloomDay[i]>D) counter=0;
    }
    return m==0;
}

int minDays(vector<int>& bloomDay,int m,int k){
    long long requirement=(long long)m*k;
    if(bloomDay.size()<requirement) return -1;
    int start=*min_element(bloomDay.begin(),bloomDay.end());
    int end=*max_element(bloomDay.begin(),bloomDay.end());
    int ans=0;
    while(start<=end){
        int mid=(start+end)>>1;
        if(canWeMakeMBouquetsWithDDays(bloomDay,m,k,mid)){
            ans=mid; end=mid-1;
        }else start=mid+1;
    }
    return ans;
}

// 136.Koko loves eating bananas. Given an array piles where piles[i] is the number of bananas in the i‑th pile and an integer h hours, find the minimum eating speed k (bananas per hour) so that Koko can eat all bananas within h hours.
bool canKokoFinishBananasWithKSpeed(vector<int> &piles, int h, int k)
    {
           long long int totalHoursTakenByKokoToFinishAllBananas = 0;
    for (int i = 0; i < piles.size(); i++)
        totalHoursTakenByKokoToFinishAllBananas += ceil(piles[i] / (double)k);
    return totalHoursTakenByKokoToFinishAllBananas <= h;
}

int minEatingSpeed(vector<int> &piles, int h){

    int start = 1;
    int end = *max_element(piles.begin(), piles.end());
    int ans = 0;
    while (start <= end){
        int mid = (start + end) >> 1;
        int k = mid;
        if (canKokoFinishBananasWithKSpeed(piles, h, k)){
            ans = k;
            end = mid - 1;
        }
        else start = mid + 1;
    }
    return ans;
}

//137.find the square root of a number n with decimal precision using binary search for integer part and incremental search for decimal part
int mySqrt(int n)
{
    int s = 0, e = n;
    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) >> 1;
        if(mid * mid <= n)
        {
            ans = mid;
            s = mid + 1; // go right
        }
        else e = mid - 1; //  left jata hu
    }
    return ans;
}

double myPrecisionSqrt(int n)
{
    double sqrt = mySqrt(n); // -> O(logn)

    /* O(precision) */
    int precision = 9;
    double step = 0.1;
    while (precision--)
    {
        double j = sqrt; // j->7.0;
        while (j * j <= n)
        {
            // store and compute
            sqrt = j;
            j += step; // j-> 7.1
        }
        // after this while loop i got 1 precision ans.
        step /= 10;
    }
    return sqrt;
}
//138.Find the square root of a number n with high precision (up to 9 decimal places) using binary search instead of built-in sqrt()
double BSPrecision(int n)
{
    double start = 0;
    double end = n;
    double ans = 0;
    while ((end - start) > 0.000000001)
    {
        double mid = (start + end) / 2;
        double sqr = mid * mid;
        if (sqr <= n)
        {
            ans = mid;
            start = mid + 0.000000000000000000000000001;
        }
        else
            end = mid - 0.000000000000000000000000001;
    }
    return ans;
}

// agar koi no. perfect square nhi h to uska perfect square root nhi ho skta
int main()
{
    int n = 63;
    double ans = myPrecisionSqrt(n); // TC: O(logn) + O(Precision).
    printf("M1: Precision Sqrt: %.9f\n", ans);
    cout << ans << endl;
    // cout hota hai, it only print 5 precision.

    // zada kes kre?

    double ans = BSPrecision(n);
    printf("M2: Precision Sqrt: %.9f\n", ans);

    // coco eating bananas
    vector<int> piles = {3,6,7,11};
    int h = 8; // guard gya h 8 hrs k liye
    cout << minEatingSpeed(piles, h);  // 4 o/p -->aaya kaise kya chahiye tha 
    // TOTAL MINIMUM hours <= guard hours hone chahiye 
    // leetcode qs no. 875

    // m bouquets with k flowers
    vector<int> bloomDay = {1,10,3,10,2};   
    int m = 3; // bouquets
    int k = 1; // flowers in each bouquet   
    cout << minDays(bloomDay, m, k); // 3 o/p
    // leetcode qs no. 1482
    return 0;
}

// // custom comparator 
// #include <algorithm>
// #include <iostream>
// #include <vector>

// using namespace std;

void print(vector<int> &v) {
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << endl;
}

void printvv(vector<vector<int>> &v) {
  for (int i = 0; i < v.size(); ++i) {
    vector<int> &temp = v[i];
    int a = temp[0];
    int b = temp[1];
    cout << a << " " << b << endl;
  }
  cout << endl;
}

bool mycomp(int &a, int &b) {
  // return a < b; // increasing order sorting
  return a > b; // decreasing order sorting
}

// // yha hum 2 vector k beach m compare kr rhe h isliye pass by reference me 2 vector pass kiye h 
// bool mycompfor1stIndex(vector<int> &a, vector<int> &b) {
//   return a[1] > b[1]; // dsc order
//   // return a[1] < b[1]; // asc order
// }

int main() {
   vector<int> v = {44, 55, 22, 11, 33};
//   sort(v.begin(), v.end()); // increasing order sorting
   sort(v.begin(), v.end(), mycomp);
   print(v);

  // vector of vector sorting
  vector<vector<int>> v;
  int n;
  cout << "Enter size:\n";
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int a, b;
    cout << "enter a, b" << endl;
    cin >> a >> b;
    vector<int> temp;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp);
  }

  cout << "Here are the Values" << endl;
  printvv(v);
  cout << "Sorted by 1st index" << endl;
  sort(v.begin(), v.end(), mycompfor1stIndex);
  printvv(v);
  return 0;
}

// // ---------------------------------[Week -4 Assignment]-------------------------------------
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;
  
// LC:--532
// 142.K different pair's in an array 
int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        // method -1:-- Two pointer approach
        int i = 0;
        int j = 1;
        // use set for prevent duplicate's
        set<pair<int, int>> ans;
        while(j < nums.size()){
            int diff = nums[j] - nums[i];
            if(diff == k && i != j){
                ans.insert({nums[i], nums[j]});
                i++, j++;
            }
            else if(diff > k){
                i++;
            }
            else{
                j++;
            }
        }
        return ans.size();
}
// method -2:-- 
bool bs(vector<int>& nums, int start, int target){
    int end = nums.size() -1;
    while(start <= end){
        int mid = (start + end)/2;
        if(nums[mid] == target) return 1;
        else if(nums[mid] > target) end = mid - 1;
        else  start = mid + 1;
    }
    return 0;
}
 int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int, int>> ans;
        for(int i = 0; i < nums.size(); i++){
            if(bs(nums, i + 1, nums[i] + k) == 1)ans.insert({nums[i], nums[i] + k});
        }
        return ans.size();
} 

int main(){
    vector<int> v = {1,5,1,3,4};
    // k is diff
    int k = 2;
    cout << findPairs(v, k);
    return 0;   
}

//143.Find K-Closest Element 
vector<int> twoptrmethod(vector<int> &arr, int k, int x){
    int l=0,h=arr.size()-1;
    while(h-l>=k){
        if(x-arr[l]>arr[h]-x) l++;
        else h--;
    }
    return vector<int>(arr.begin()+l,arr.begin()+h+1);
}

// method -02
int lowerbound(vector<int> &arr,int x){
    int start=0,end=arr.size()-1,ans=end;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>=x){ans=mid;end=mid-1;}
        else start=mid+1;
    }
    return ans;
}

vector<int> bs_method(vector<int> &arr,int k,int x){
    int h=lowerbound(arr,x);
    int l=h-1;
    while(k--){
        if(l<0) h++;
        else if(h>=arr.size()) l--;
        else if(x-arr[l]>arr[h]-x) h++;
        else l--;
    }
    return vector<int>(arr.begin()+l+1,arr.begin()+h);
}

vector<int> findClosestElements(vector<int>& arr,int k,int x){
    // return twoptrmethod(arr,k,x); // method-1
    return bs_method(arr,k,x);       // method-2
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int k=4,x=3;
    vector<int> ans=findClosestElements(arr,k,x);
    for(int i:ans) cout<<i<<" ";
    return 0;
}

// 	144.Find the position of a key in a sorted array using Exponential Search
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;cin>>key;

    if(arr[0]==key){cout<<"Present at index 0"<<endl;return 0;}

    int i=1;
    while(i<n && arr[i]<=key) i*=2;

    int low=i/2,high=min(i,n-1);
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){cout<<"Present at index "<<mid<<endl;return 0;}
        else if(arr[mid]<key) low=mid+1;
        else high=mid-1;
    }
    cout<<"Not present"<<endl;
    return 0;
}


#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

// 145.Allocate minimum number of pages to each student so that the maximum pages assigned are minimized.
bool isPossible(vector<int> arr,int n,int m,int mid){
    int studentCount=1,pageSum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid) return false;
        if(pageSum+arr[i]>mid){
            studentCount++;
            pageSum=arr[i];
            if(studentCount>m) return false;
        }else pageSum+=arr[i];
    }
    return true;
}

int allocateBooks(vector<int> arr,int n,int m){
    if(m>n) return -1;
    int start=0,end=accumulate(arr.begin(),arr.end(),0),ans=-1;
    while(start<=end){
        int mid=start+((end-start)>>1);
        if(isPossible(arr,n,m,mid)){ans=mid;end=mid-1;}
        else start=mid+1;
    }
    return ans;
}

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int m;cin>>m;
    cout<<allocateBooks(arr,n,m);
    return 0;
}


// painter_partition prblm 
// Check if it's possible to paint all boards within 'mid' time

//146.Find the minimum time required to paint all boards using k painters
bool isPossible(vector<int>& boards,int n,int k,int mid){
    int painterCount=1,timeSum=0;
    for(int i=0;i<n;i++){
        if(boards[i]>mid) return false;
        if(timeSum+boards[i]>mid){
            painterCount++;timeSum=boards[i];
            if(painterCount>k) return false;
        }else timeSum+=boards[i];
    }
    return true;
}

int painterPartition(vector<int>& boards,int n,int k){
    int start=0,end=accumulate(boards.begin(),boards.end(),0),ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isPossible(boards,n,k,mid)){ans=mid;end=mid-1;}
        else start=mid+1;
    }
    return ans;
}

int main(){
    int n;cin>>n;
    vector<int> boards(n);
    for(int i=0;i<n;i++) cin>>boards[i];
    int k;cin>>k;
    cout<<painterPartition(boards,n,k);
    return 0;
}


// 	147.Place k cows in n stalls such that the minimum distance between any two cows is maximized.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<int>& stalls,int k,int mid){
    int c=1,pos=stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-pos>=mid){
            c++;pos=stalls[i];
        }
        if(c==k) return true;
    }
    return false;
}

int aggressiveCows(vector<int>& stalls,int k){
    sort(stalls.begin(),stalls.end());
    int start=0,end=stalls.back()-stalls.front(),ans=-1;
    while(start<=end){
        int mid=(start+end)>>1;
        if(isPossibleSolution(stalls,k,mid)){ans=mid;start=mid+1;}
        else end=mid-1;
    }
    return ans;
}

int main(){
    int n,k;cin>>n;
    vector<int> stalls(n);
    for(int i=0;i<n;i++) cin>>stalls[i];
    cin>>k;
    cout<<aggressiveCows(stalls,k);
    return 0;
}


// // -----------------------------------------(Char arrays and strings)----------------------------------------
// #include<iostream>
// using namespace std;

//150.Find the length of a character array (string) without counting spaces.
int getLength(char name[],int size){
    int count=0,index=0;
    while(name[index]!='\0' && index<size){
        if(name[index]!=' ') count++;
        index++;
    }
    return count;
}
    
	
//151.Replace all occurrences of a specific character in a character array with a new character.
void replaceCharacter(char originalChar,char newChar,char arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==originalChar) arr[i]=newChar;
    }
}

//152.Convert all lowercase letters in a character array to uppercase.
void convertIntoUpperCase(char arr[],int n){
    int len=getLength(arr,n);
    // int len = strlen(arr); // inbuilt function
    for(int i=0;i<len;i++){
        char ch=arr[i];
        if(ch>='a' && ch<='z') ch=ch-'a'+'A';
        arr[i]=ch;
    }
}

//153.Convert all uppercase letters in a character array to lowercase.
void convertIntoLowerCase(char arr[],int n){
    int len=getLength(arr,n);
    // int len = strlen(arr); // inbuilt function
    for(int i=0;i<len;i++){
        char ch=arr[i];
        if(ch>='A' && ch<='Z') ch=ch-'A'+'a';
        arr[i]=ch;
    }
}
//154.Reverse a given character array (string).
void reverseCharArray(char arr[],int n){
    int len=getLength(arr,n);
    // int len = strlen(arr); // inbuilt function
    int i=0,j=len-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;j--;
    }
}

// 155.Check if a given character array (string) is a palindrome.
bool checkPalindrome(char arr[],int n){
    int len=getLength(arr,n);
    // int len = strlen(arr); // inbuilt function
    int i=0,j=len-1;
    while(i<=j){
        if(arr[i]==arr[j]){i++;j--;}
        else return false;
    }
    return true;
}

int main() {

    char arr1[100];
    cout << "Enter the input" << endl;
    cin >> arr1;

    char arr2[100];
    cout << "Enter the input" << endl;
    cin >> arr2;

    cout << strlen(arr1) << endl;
    cout << strcat(arr1,arr2) << endl;
    


    char arr[1000];
    cin >> arr;

    cout << "Palindomr or not: " << checkPalindrome(arr,1000) << endl;

    cout << "before " << arr << endl;
    
    reverseCharArray(arr,1000);

    cout << "after " << arr << endl;

    convertIntoLowerCase(arr,1000);
    convertIntoUpperCase(arr,1000);
    replaceCharacter('@', ' ', arr, 1000);
    cout << arr << endl;
    cout << getLength(arr,1000) << endl;





    char arr[100];

    cout << "Enter input" << endl;
    //cin >> arr;
    cin.getline(arr, 80, '.'); 
    cout << endl << arr << endl;



    //creation
    char arr[100];

    cout << "Enter your name" << endl;
    //input
    //cin >> arr;
    cin.getline(arr, 100);
    //print
    cout << "Your name is: " << arr << endl;
    cout << arr[0] << "-> " << (int)arr[0] << endl;
    cout << arr[1] << "-> " << (int)arr[1] << endl;
    cout << arr[2] <<"-> " << (int)arr[2] << endl;
    cout << arr[3] << "-> " << (int)arr[3] << endl;
    cout << arr[4] << "-> " << (int)arr[4] << endl;
    cout << arr[5] <<"-> " << (int)arr[5] << endl;
    return 0;
}

// // -------------------------------------------(char, arrays and strings)----------------------------------------
// char , arrays and string class - 1
#include<iostream>
using namespace std;


int main() {
    string s1 = "prem";
    string s2 = "love";

    cout << s1.compare(s2) << endl;
    if this is 0 then both are equal
    if this is negative then s1 < s2
    if this is positive then s1 > s2


    string name = "Hello Jee Kaise ho Saare" ;
    string word = "Kaise ho";

    if(name.find(word) != string::npos) {
        ///found
    }
    else {
        //not found
    }

    int ans = name.find(word);
    cout << ans << endl;

    // cout << name.substr(5);

    //position and upto len
    // cout << name.substr(5,5);

    // string fName = "Love";
    // string lName = "babbar";

    string ans = fName + " " + lName;
    cout << ans << endl;

    string name = "Maharana Pratap";
    name.clear();
    if(name.empty() ){
        cout << "String is empty" ; 
    }
    else {
        cout << "string is not empty";
    }



    auto it = name.begin();

    while(it != name.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;



    cout << name[0] << endl;
    cout << name.at(0) << endl;

    cout << name.front() << endl;
    cout << name.back() << endl;
    cout << name.length() << endl;







    // string sentence;

    //cin >> sentence;
    getline(cin, sentence, '\n');

    cout << sentence << endl;




    //creation
    string str;
    str.push_back('l');
    str.push_back('o');
    str.push_back('v');
    str.push_back('e');
    str.pop_back();
    cout << str << endl;
    
    cout << "enter the input" << endl;
    //input
    cin >> str;
    //output
    cout << "Str: " << str << endl;
    cout << str[0] << endl;

    #include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="Prem",s2="Kumar";
    cout<<"s1: "<<s1<<", s2: "<<s2<<"\n\n";

    //1. length() / size()
    cout<<"Length of s1: "<<s1.length()<<endl;

    //2. empty()
    cout<<"Is s1 empty? "<<(s1.empty()?"Yes":"No")<<endl;

    //3. append() / operator+
    string s3=s1; s3.append(s2);
    cout<<"append(): "<<s3<<endl;
    cout<<"Concatenation (+): "<<s1+" "+s2<<endl;

    //4. push_back() / pop_back()
    string s4="Hello";
    s4.push_back('!');
    cout<<"After push_back: "<<s4<<endl;
    s4.pop_back();
    cout<<"After pop_back: "<<s4<<endl;

    //5. compare()
    cout<<"Compare s1 & s2: "<<s1.compare(s2)<<endl;

    //6. assign()
    string s5; s5.assign("Gupta");
    cout<<"assign(): "<<s5<<endl;

    //7. substr(pos,len)
    cout<<"Substring (1,3): "<<s1.substr(1,3)<<endl;

    //8. insert(pos,str)
    string s6="Prem";
    s6.insert(4," Gupta");
    cout<<"After insert(): "<<s6<<endl;
    //9. erase(pos,len)
    s6.erase(4,6);
    cout<<"After erase(): "<<s6<<endl;
    //10. replace(pos,len,str)
    s6.replace(0,4,"Love");
    cout<<"After replace(): "<<s6<<endl;
    //11. find() / rfind()
    string text="Hello world, world!";
    cout<<"find('world'): "<<text.find("world")<<endl;
    cout<<"rfind('world'): "<<text.rfind("world")<<endl;

    //12. front() / back()
    cout<<"Front of s1: "<<s1.front()<<endl;
    cout<<"Back of s1: "<<s1.back()<<endl;

    //13. at(pos)
    cout<<"Character at 2: "<<s1.at(2)<<endl;

    //14. clear()
    string temp="test"; temp.clear();
    cout<<"After clear(): "<<(temp.empty()?"empty":"not empty")<<endl;

    //15. swap()
    cout<<"\nBefore swap -> s1: "<<s1<<", s2: "<<s2<<endl;
    s1.swap(s2);
    cout<<"After swap -> s1: "<<s1<<", s2: "<<s2<<endl;

    //16. getline()
    string sentence;
    cout<<"\nEnter a sentence: ";
    getline(cin,sentence);
    cout<<"You entered: "<<sentence<<endl;

    return 0;
}


    return 0;
}

// //-------------------------------------------------------------------------------------------------------------------------------------
// // char, arrays and strings - 2
// #include<bits/stdc++.h>
// using namespace std;


// 159. Count total number of palindromic substrings in a given string
int expandAroundCenter(string s,int i,int j){
    int count=0;
    while(i>=0 && j<s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
int countSubstrings(string s){
    int totalCount=0;
    for(int center=0;center<s.length();center++){
        totalCount+=expandAroundCenter(s,center,center);     // odd-length palindromes
        totalCount+=expandAroundCenter(s,center,center+1);   // even-length palindromes
    }
    return totalCount;
}
// Time Complexity: O(n²)


// 156.Remove all adjacent duplicate characters from a string
string removeDuplicates(string s){
    string ans=""; int n=s.length();
    for(int i=0;i<n;i++){
        char curr=s[i];
        if(ans.empty()||curr!=ans.back()) ans.push_back(curr);
        else ans.pop_back();
    }
    return ans;

    // or alternative way
    int i=0;
    while(i+1<s.length()){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            if(i>0) i--;
        }else i++;
    }
    return s;
}
//157.Remove all occurrences of a substring (pattern) from a given string
string removeOccurrences(string full,string pattern){
    while(full.find(pattern)!=string::npos){
        full.erase(full.find(pattern),pattern.length());
    }
    return full;
}


// 158.Check if a string can become a palindrome after deleting at most one character
bool checkPalindrome(string str,int s,int e){
    while(s<=e){
        if(str[s]!=str[e]) return false;
        s++; e--;
    }
    return true;
}
bool validPalindrome(string s){
    int i=0,j=s.length()-1;
    while(i<=j){
        if(s[i]==s[j]){i++;j--;}
        else{
            bool ansOne=checkPalindrome(s,i+1,j);
            bool ansTwo=checkPalindrome(s,i,j-1);
            return ansOne||ansTwo;
        }
    }
    return true;
}

// Time Complexity: O(n)

int main() {
    string s;
    cin>>s;
    cout<<countSubstrings(s);     
    /* inout: "abc"  output: 3
    input: "aaa"  output: 6*/
    cout << removeDuplicates(s); 
    /*input: "abbaca" output: "ca"
    input: "azxxzy" output: "ay"  */
    cout << removeOccurrences(s, "abc"); 
    /* input: "daabcbaabcbc" output: "dab"
     input: "axxxxyyyyb" output: "ab" */

    cout << validPalindrome(s); 
    /* input: "aba" output: true
    input: "abca" output: true
    input: "abc" output: false */
    return 0;
}

// //------------------------------------------------------------------------------------------------------------------------
// 161: Calculate total time to collect all garbage (Paper, Metal, Glass)
int garbageCollection(vector<string>& garbage, vector<int>& travel){
    int pickg=0,travelg=0,lasthouseg=0;
    int pickm=0,travelm=0,lasthousem=0;
    int pickp=0,travelp=0,lasthousep=0;

    for(int i=0;i<garbage.size();i++){
        string currhouse=garbage[i];
        for(int j=0;j<currhouse.length();j++){
            char currgarbage=currhouse[j];
            if(currgarbage=='G'){pickg++;lasthouseg=i;}
            else if(currgarbage=='P'){pickp++;lasthousep=i;}
            else if(currgarbage=='M'){pickm++;lasthousem=i;}
        }
    }

    for(int i=0;i<lasthouseg;i++) travelg+=travel[i];
    for(int i=0;i<lasthousep;i++) travelp+=travel[i];
    for(int i=0;i<lasthousem;i++) travelm+=travel[i];

    int totalpickingtime=pickp+pickm+pickg;
    int totaltraveltime=travelp+travelm+travelg;
    return totalpickingtime+totaltraveltime;
}
// Time Complexity: O(n * m)


// 160: Decode a message using a substitution key
string decodeMessage(string key,string message){
    unordered_map<char,char> mapping;
    char space=' '; mapping[space]=space;
    char start='a'; int index=0;

    while(start<='z' && index<key.length()){
        char keyKaCurrentCharacter=key[index];
        if(mapping.find(keyKaCurrentCharacter)!=mapping.end()) index++;
        else{
            mapping[keyKaCurrentCharacter]=start;
            start++; index++;
        }
    }

    string ans="";
    for(int i=0;i<message.length();i++){
        char msgCharacter=message[i];
        char mappedCharacter=mapping[msgCharacter];
        ans.push_back(mappedCharacter);
    }
    return ans;
}
// Time Complexity: O(n+m)


// 162. Sort string s according to the given custom order
string orderCopy;

static bool cmp(char a,char b){
    return (orderCopy.find(a) < orderCopy.find(b));
}

string customSortString(string order,string s){
    orderCopy = order;
    sort(s.begin(), s.end(), cmp);
    return s;
}

// Time Complexity: O(n log n)


// 163: Find all words that match the given pattern after normalization
void normalise(string &str){
    char start='a';
    unordered_map<char,char> mapping;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(mapping.find(ch)==mapping.end()){
            mapping[ch]=start;
            start++;
        }
    }
    for(int i=0;i<str.length();i++){
        str[i]=mapping[str[i]];
    }
}

vector<string> findAndReplacePattern(vector<string>& words,string pattern){
    vector<string> ans;
    normalise(pattern);
    for(int i=0;i<words.size();i++){
        string curr=words[i];
        normalise(curr);
        if(curr.compare(pattern)==0)
            ans.push_back(words[i]);
    }
    return ans;
}

// Input:
// words = [abc,deq,mee,aqq,dkd,ccc], pattern = abb
// Output:
// [mee,aqq]

// Time Complexity: O(n * m), where n = number of words, m = length of each word


// int main() {
//     // vector<string> garbage = {"G","P","GP","GG"};
//     // vector<int> travel = {2,4,3};
//     // cout << garbageCollection(garbage, travel); // leetcoe qs no. 2391
//     cout << decodeMessage("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv"); // leetcode qs no. 2325
//     cout << customSortString("cba", "abcd"); // leetcode qs no. 791 // output: "cbad"
//     // here output me cba first aayega kyuki order me cba pehle h then d
//     cout << findAndReplacePattern({"abc","deq","mee","aqq","dkd","ccc"}, "abb"); // leetcode qs no. 890 
//     // here output me mee and aqq aayega bcz dono ka pattern abb type me h 
//     return 0;
// }


// //----------------------------------------(basic maths for DSA)-----------------------------------------------------
// // M1
// bool isPrime(int n)
//     {
//         if (n <= 1)
//             return false;
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//                 return false;
//         }
//         return true;
//     }
// int countPrimes(int n)
//     {
//         int c = 0;
//         for (int i = 2; i < n; ++i)
//         {
//             if (isPrime(i))
//                 ++c;
//         }
//         return c;
//     }
// // M2
// bool isPrime(int n)
//     {
//         if (n <= 1)
//             return false;
//         for (int i = 2; i * i <= n; i++)
//         {
//             if (n % i == 0)
//                 return false;
//         }
//         return true;
//     }
// int countPrimes(int n)
//     {
//         int c = 0;
//         for (int i = 2; i < n; ++i)
//         {
//             if (isPrime(i))
//                 ++c;
//         }
//         return c;
//     }
// // M3 Sieve of Eratosthenes Algorithm
// Qs: Count the number of prime numbers less than n using Sieve of Eratosthenes
int countPrimes(int n){
    vector<bool> prime(n,true);
    if(n<=2) return 0;
    prime[0]=prime[1]=false;
    int ans=0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            ++ans;
            int j=2*i;
            while(j<n){
                prime[j]=false;
                j+=i;
            }
        }
    }
    return ans;
}

// Input:
// n = 10
// Output:
// 4  (Prime numbers are 2, 3, 5, 7)

// Time Complexity: O(n log log n)

//Find GCD/HCF and LCM(24, 72) 
int gcd(int a, int b){
    // using subtraction method
    if(b==0) return a;  
    if(a==0) return b;
    
    while(a > 0 && b > 0){
        if(a > b) a = a - b;
        else b = b - a;
    }
    return a == 0 ? b : a; // ternary operator
}

int lcm(int a, int b){
    return (a / gcd(a, b)) * b; // to avoid overflow
}

//166.fastExponentiation
long long fastExponentiation(long long x, long long n) {
        long long ans = 1;
        long long base = x;

        while (n > 0) {
            if (n & 1)
                ans = ans * base;
            base = base * base;
            n >>= 1;
        }
        return ans;
}

int slowExponentiation(int a, int b)
{
    int ans = 1;
    while (b--)
    {
        ans *= a;
    }
    return ans;
}

int powMod(int x, int n, int M) {
        long long ans = 1;
        long long base = x % M;  // take modulo at start

        while (n > 0) {
            if (n & 1) {
                ans = (ans * base) % M;
            }
            base = (base * base) % M;
            n >>= 1; // right shift by 1
        }
        return (ans + M) % M; // ensure positive
    }

// int main() {
//     // int n;
//     // cin >> n;
//     // cout << countPrimes(n) << endl;
//     // cout << "GCD: " << gcd(24, 72) << endl;
//     // cout << "LCM: " << lcm(24, 72) << endl;
//     cout << "Fast Exponentiation: " << fastExponentiation(2, 10) << endl;
//     cout << "Slow Exponentiation: " << slowExponentiation(2, 10) << endl;
//     cout << "Power Modulo: " << powMod(3, 2, 4) << endl; // gfg qs 
//     return 0;
// }
// // M4 Segmented Sieve Algorithm
// #define M 1000000007
//     vector<bool> Sieve(long long int n)
//     {
//         // create a sieve array telling isPrime till 'n'
//         vector<bool> sieve(n + 1, true);
//         sieve[0] = sieve[1] = false;

//         /*for (long long int i = 2; i <= n; i++)*/
//         for (long long int i = 2; i * i <= n; i++) // Optimisation 2: (Outer loop):
//                                                    // if i becomes > sqrt(N), then the
//                                                    // inner loop does not work.
//         {
//             if (sieve[i] == true)
//             {
//                 // means, sieve[i] is Prime and mark its multiples
//                 //  as non-prime.
//                 /*long long long long int j = i * 2;*/
//                 long long int j = i * i; // Optimisation 1 (inner loop):
//                                          // first unmarked number would be i*i
//                                          // as, other have been marked by 2 to (i - 1).
//                 while (j <= n)
//                 {
//                     sieve[j] = false;
//                     j += i;
//                 }
//             }
//         }
//         return sieve;
//     }

//     vector<bool> segmentedSeive(long long int L, long long int R)
//     {
//         // Get me prime marking array.
//         // to be used to mark primes in segmented sieve.
//         vector<bool> sieve = Sieve(sqrt(R));
//         vector<long long int> basePrimes;
//         for (long long int i = 0; i < sieve.size(); i++)
//         {
//             if (sieve[i])
//                 basePrimes.push_back(i);
//         }

//         vector<bool> segSieve(R - L + 1, true);
//         if (L == 1)
//         {
//             segSieve[0] = false;
//         }

//         for (auto prime : basePrimes)
//         {
//             long long int first_mul = (L / prime) * prime;
//             first_mul = first_mul < L ? first_mul + prime : first_mul;
//             long long int j = max(first_mul, prime * prime);
//             while (j <= R)
//             {
//                 segSieve[j - L] = false;
//                 j += prime;
//             }
//         }
//         return segSieve;
//     }

//     long long primeProduct(long long L, long long R)
//     {
//         vector<bool> segSieve = segmentedSeive(L, R);
//         long long int ans = 1;
//         for (long long int i = 0; i < segSieve.size(); i++)
//         {
//             if (segSieve[i])
//             {
//                 long long int actualPrime = (L + i) % M;
//                 ans = (ans * actualPrime) % M;
//             }
//         }
//         return ans;
//     }
// int main()
// {
//     long long int L = 10;
//     long long int R = 20;
//     cout << primeProduct(L, R) << endl; // leetcode qs no. 204
//     return 0;
// }


// //----------------------------------------------(optimised sieve and segmented sieve)---------------------------------------
vector<bool> Sieve(long long n){
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    for (long long i = 2; i * i <= n; i++) {
        if (sieve[i]){
            long long j = i * i; // first unmarked multiple
            while (j <= n) {sieve[j] = false;
                j += i;}
        }
    }
    return sieve;
}

vector<bool> segmentedSieve(long long L, long long R){
    vector<bool> sieve = Sieve(sqrt(R));
    vector<long long> basePrimes;
    for (long long i = 0; i < sieve.size(); i++){ if (sieve[i])
            basePrimes.push_back(i); }

    vector<bool> segSieve(R - L + 1, true);
    if (L == 1)   segSieve[0] = false;

    for (auto prime : basePrimes) {
        long long first_mul = (L / prime) * prime;
        if (first_mul < L)first_mul += prime;
        long long j = max(first_mul, prime * prime);
        while (j <= R){
            segSieve[j - L] = false;
            j += prime;
        }
    }
    return segSieve;
}

long long primeProduct(long long L, long long R)
{
    vector<bool> segSieve = segmentedSieve(L, R);
    long long ans = 1;

    for (long long i = 0; i < segSieve.size(); i++)
    {
        if (segSieve[i])
        {
            long long actualPrime = (L + i) % M;
            ans = (ans * actualPrime) % M;
        }
    }

    return ans;
}

int main()
{
    long long L = 110, R = 130;

    cout << "Primes between " << L << " and " << R << ": ";
    vector<bool> segSieve = segmentedSieve(L, R);
    for (long long i = 0; i < segSieve.size(); i++)
    {
        if (segSieve[i])
            cout << L + i << " ";
    }
    cout << endl;

    cout << "Prime Product (mod " << M << "): " << primeProduct(L, R) << endl;

    return 0;
}
// //-----------------------------------------Pointer's in C++------------------------------------------------


// ptr class -1 
#include<iostream>
#include<vector>
using namespace std;


// void solve(int* arr, int size) {
//     cout << sizeof(arr) << endl;
// }

// void solve(vector<int> &v) {
//     cout << sizeof(v) << endl;
// }

int main() {

    int a = 50;
    int* p = &a;
    int** q = &p;
    int** r = q;

    cout << **r << endl;




    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // solve(v);

    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    
    // solve(arr,size);

    int a = 10; // ek dabba uske andar 10 dabbe k address 104;
    int *p = &a; //ek dabba uske andar 104 dabbe k address 204;
    int *q = p; // ek dabba uske andar 104 dabbe k address 304;
    int *r = q; // ek dabba uske andar 104 dabbe k address 404;

    // cout << a << endl; // 10;
    // cout << &a << endl; // 104;
    // // cout << *a << endl; // error; bcz derefernce operator is used for pointer's only
    // cout << p << endl; // 204;
    // cout << &p << endl; // 204;
    // cout << *p << endl; // 10; // value at address stored in p 
    // cout << q << endl; // 204;
    // cout << &q << endl; // 304;
    // cout << *q << endl; // 10
    // cout << r << endl;  //104
    // cout << &r << endl; // 404
    // cout << *r << endl; //10


    // pointer with arrays
    int arr[] = {10,20,30,40};
    // here arr, &arr, &arr[0] all three are same they stored the address of first element of array
    cout << arr << endl; // address of first element
    cout << &arr << endl; // address of first element
    cout << &arr[0] << endl; // address of first element
    cout << arr[0] << endl; // 10

    int *ptr = arr; // or int *ptr = &arr[0];
    cout << ptr << endl; // address of first element
    cout << &ptr << endl; // address of pointer variable ptr
    cout << *ptr << endl; // 10

    // arr[i] == i[arr]
    // arr[i] = *(arr + i)
    cout << arr[2] == *(arr + 2) << endl;
    // i[arr] = *(i + arr) // 30 bcz *(104 + 2) = *(112) = 30
    cout << *(arr + 1) << endl; // 20 bcz *(104 + 1) = *(108) = 20


    // character with pointers
    char ch[100] = "Babbar";
    char* cptr = ch;

    cout << ch << endl; // Babbar
    cout << &ch  << endl; // address of first element
    cout << ch[0] << endl; // B
    cout << cptr << endl; // Babbar
    cout << &cptr << endl; // address of pointer variable cptr
    cout << *cptr << endl; // B
    cout << *(cptr + 3) << endl; // b 
    cout << cptr + 2 << endl; // bbar


    return 0;
}


// pointer class - 2
int main() {

    //2D array -> stack memory 
    // int arr[2][4] = { 
    //                 {2,4,6,8},
    //                 {1,2,3,4}
    //                 };

    //2D array -> heap memory
    // 4 -> row count
    // 3 -> col count 
    int** arr = new int*[4];

    for(int i=0; i<4; i++) {
        //hr pointer k liye ek 1D array create krna h 
        arr[i] = new int[3];
    }

    //taking input 
    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl << "Printing the 2D array " << endl;
    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {
            cout <<  arr[i][j] << ' ';
        }
        cout << endl;
    }

    for(int i=0; i<4; i++) {
        delete[] arr[i];
    }



    //array -> stack memory
    // int arr[5] = {0};
    // cout << arr[0] << arr[1] << arr[2] <<endl;

    // //array - heap memory 
    // int* brr =  new int[5];
    // cout << brr[0] << brr[1] << brr[2] ;



    //integer - > stack memory
    // int a = 5 ;
    // cout << a << endl;

    // //integer -> Heap Memory 
    // int* p = new int;
    // *p = 5;
    // cout << *p << endl;
    // //deallocate -> delete keyword
    // delete p;

    return 0;
}
//-----------------------------------------------(Recursion class -1)-----------------------------
#include<iostream>
using namespace std;

// wap to print sum of first n natural numbers using recursion
int getSum(int n) {
    //base case
    if(n == 1)  return 1;
    int ans = getSum(n-1) + n;
    return ans;
}

// wap to find nth fibonacci number using recursion
int fib(int n) {
    if(n == 0 || n == 1) 
        return n;
    int ans = fib(n-1) + fib(n-2);
    return ans; 
}

// int fib(int n) {
//    //base case
//    if(n == 0 || n == 1) {
//     return n;
//    }
//    //recursive relation
//    //fib(n) = fib(n-1) + fib(n-2);
//    int ans = fib(n-1) + fib(n-2);
//    return ans;
//    //processing  
// }

// wap to calculate 2^n using recursion
int pow(int n) {
    //base case
    if( n == 0)  return 1;
    int recKaAns = pow(n-1);
    int finalAns = 2 * recKaAns;
    return finalAns;
}

// print counting from n to 1 
void printCounting(int n) {
    //base case
    if(n == 0) return;
    cout << n << " "; 
    printCounting(n-1);
    // cout << n << " "; // for printing 1 to n
}

// wap to calculate factorial of a number using recursion
int getFactorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    int recursionKaAns = getFactorial(n-1);
    int finalAns = n * recursionKaAns;
    return finalAns;
}

int main() {
    cout << getSum(5)<<endl;
    //cout << fib(9) << endl;
    //cout << pow(10);
    // printCounting(5);

    // int n;
    // cout << "Enter the value of n: " ;
    // cin >> n;

    // int ans = getFactorial(n);
    // cout << "Factorial of " << n << " is: " << ans << endl;
    return 0;
}

//------------------------------------------(Recursion class - 2)-------------------------------
#include<iostream>
#include<vector>
using namespace std;

int max(int a, int b) {
    if(a > b) { return a }
    else  return b;
}

// wap to print all even numbers in an array using recursion
void printAllEvens(int arr[],int n, int index) {
    if(index == n)   return;
    if( !(arr[index]&1) ) cout << arr[index] << " ";
    printAllEvens(arr,n,index+1);
}

// wap to print all odd numbers in an array using recursion
void printAllOdds(int arr[],int n, int index, vector<int> &ans) {
    //base case
    if(index == n)   return;
    //1 case
    if(arr[index] & 1) {
        ans.push_back(arr[index]);
    }
    //baaki recursion
    printAllOdds(arr,n,index+1, ans);
}

// wap to find min and max in an array using recursion
void minInArray(int arr[], int size,int index, int &mini) {
    if(index == size) return;    
    mini = min(mini, arr[index]);
    minInArray(arr,size,index+1, mini);
}

void maxInArray(int arr[], int size,int index, int &maxi) {
    //base case
    if(index == size) {
        //entire array traverse kr chuka hu
        return;
    }
    //recursive relation
    //1 case mera
    //processing
    maxi = max( maxi, arr[index]);
    //baaki recursion
    maxInArray(arr,size, index+1, maxi);
}

// wap to search an element in an array using recursion 
bool searchInArray(int arr[], int size,int index, int target) {
    if(index >= size)  return false;
    if(arr[index] == target)  return true;
    bool ans = searchInArray(arr,size,index+1, target);
    return ans;
}

// wap to print an array using recursion
void printArray(int arr[], int size, int index) {
    if(index == size)  return ;
    cout << arr[index] << " ";
    printArray(arr, size, index+1);
}

// void printArray(int arr[], int size, int index) {
//     //base case
//     if(index == size) {
//         return ;
//     }
//     cout << arr[index] << " ";
//     printArray(arr, size, index+1);
// }

int main() {

    int arr[] = {10,11,12,13,14,15,16};
    int size = 7;
    int index  = 0;
    vector<int> ans;
    printAllOdds(arr,size,index,ans);

    //printing ans
    for(auto num: ans) {
        cout << num << " ";
    }

    // int arr[] = {10,20,30, 40, 50, 60};
    // int size = 6;
    // int index = 0;
    // int mini = INT_MAX;
    // minInArray(arr,size,index,mini);
    // // int maxi = INT_MIN;
    // // maxInArray(arr,size,index,maxi);
    // cout << "Min no-> " << mini << endl;

    // int target = 500;
    // cout << searchInArray(arr,size,index,target) << endl;
    // int index = 0;
    // printArray(arr,size,index);
    return 0;
}

//---------------------(recursion class -2 -----------------------------------
#include <iostream>
using namespace std;

// wap to print digits of a number using recursion
void printDigits(int n) {
    if( n == 0)   return ;
    int newNumber = n / 10;
    printDigits(newNumber);
    int digit  = n % 10;
    cout << digit << " ";
}

// wap to perform binary search using recursion
int binarySearchRecursive(int arr[], int n, int s, int e, int target)
{
    if (s > e) { return -1; }
    int mid = (s + e) / 2;
    if (arr[mid] == target) { return mid;}
    if (target > arr[mid]) return binarySearchRecursive(arr, n, mid + 1, e, target);
    else return binarySearchRecursive(arr, n, s, mid - 1, target);
}


int main()
{   
    int n = 21478;
    printDigits(n);

    // int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // int size = 7;

    // int target = 60;
    // int s = 0;
    // int e = size - 1;
    // int ans = binarySearchRecursive(arr, size, s, e, target);
    // cout << "answer index: " << ans << endl;

    return 0;
}
// ----------------------------(linked list class -1) --------------------------------
#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;

    //constructor
    Node(int value) {
      this->data = value;
      this->next = NULL;
    }
};
//returns head of the new LLL after insertion
Node* insertAtHead(int value, Node* &head, Node* &tail) {
  if(head == NULL && tail == NULL ) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
  }
  else {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
  }
  return head;
}

//return head of the updated list 
void insertAtTail(int value, Node* &head, Node* &tail) {
  if(head == NULL && tail == NULL) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
  }
  else {
    Node* newNode = new Node(value);
    tail->next  = newNode;
    tail = newNode;
  }
}

void print(Node* head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> data << "->";
    temp = temp-> next;
  }
  cout<<"NULL" << endl;
}

int getLength(Node* head) {
  int len = 0;
  Node* temp = head;
  while(temp != NULL) {
    temp = temp->next;
    len++;  }
  return len;
}

void insertAtPosition(int position,int value, Node* &head, Node* &tail ){
  int length = getLength(head);
  if(position == 1) head = insertAtHead(value, head, tail);
  else if(position == length + 1)  insertAtTail(value, head, tail);
  else {
    Node* temp = head;
    for(int i=0; i<position-2; i++) {
      temp = temp -> next;
    }
    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
  }
}

//HW -> exact position return karo, jaha pr target aapko mila
//if not found, then return -1
bool searchLL(int target, Node* head) {
  Node* temp = head;
  while(temp != NULL) {
    if(temp ->data == target) {
      return true;
    }
    temp = temp->next;
  }
  return false;
}

void deleteNodeFromLL(int position, Node* &head, Node* &tail) {
  if(head == NULL && tail == NULL) {
    cout << "No node to delete" << endl;
    return;
  }
  if(head == tail) {
    Node* temp = head;
    head = NULL;
    tail = NULL;
    delete temp;
  }
  else { 
    if(position == 1) {
      Node* temp = head;
      head = temp->next;
      temp->next = NULL;
      delete temp;
    }
    else {
         Node* prev = head;
            for(int i=0; i<position-2; i++) {
                prev = prev->next;
            }
            Node* curr = prev->next;
            Node* forward = curr->next;
            prev->next = forward;
            // FIX: If deleting last node
            if(forward == NULL) {
                tail = prev;
            }
            curr->next = NULL;
            delete curr;
    //any other node except the first one
    //   Node* prev = head;
    //   for(int i=0; i<position-2; i++) {
    //     prev = prev -> next;
    //   }
    //   Node* curr = prev ->next;
    //   Node* forward = curr ->next;
    //   prev->next = forward;
    //   curr->next = NULL;
    //   delete curr;
    }
  }
}

Node* findmid(Node* head) {
    if (head == nullptr) {
        // throw invalid_argument("List is empty");
        return nullptr;
    }
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {

  Node* head = NULL;
  Node* tail = NULL;
  //LL is empty
  insertAtTail(101,head,tail);
  print(head);
  //101 -> NULL
  insertAtTail(102,head,tail);
  print(head);
  //101->102->NULL
  insertAtTail(103,head,tail);
  print(head);
  //101->102->103->NULL
//   insertAtPosition(1, 42, head, tail);
  //print(head);
//   insertAtPosition(5,57,head,tail);
//   //print(head);
//   insertAtPosition(3,420,head,tail);
//   print(head);
//   //cout << searchLL(1030,head);
//   deleteNodeFromLL(1,head,tail);
//   print(head);
//   deleteNodeFromLL(3,head,tail);
//   print(head);
//   deleteNodeFromLL(4,head,tail);
//   print(head);





//   Node* head = NULL;
//   Node* tail = NULL;
//   //LL is empty
//   head = insertAtHead(10, head, tail);
//     print(head);
//   //10 -> NULL
//   head  = insertAtHead(20,head,tail);
//     print(head);
//   //20->10->NULL
//   head = insertAtHead(30,head,tail);
//     print(head);
//   30->20->10->NULL

//   print(head);

  //stack
  //Node first;
  //dynamic memory
  //Node* first = new Node(10);
  return 0;
}

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next;
    while (curr != NULL) {
        next = curr->next; // Store next node
        curr->next = prev; // Reverse current node's pointer
        prev = curr;       // Move pointers one position ahead
        curr = next;
    }
    return prev; // New head of the reversed list
}

bool isloop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // Move slow by one
        fast = fast->next->next;    // Move fast by two
        if (slow == fast) {
            return true; // Loop detected
        }
    }
    return false; // No loop
}
//---------------------------------------------------------(linked list class-2)-----------------------------------------------
#include <iostream>
using namespace std;

class Node{
  public: 
  int data;
  Node* prev;
  Node* next;

  Node(int value) {
    data = value;
    prev = NULL;
    next = NULL;
  }
};

void insertAtHead(int value, Node* &head, Node* &tail) {
  if(head == NULL && tail == NULL) {
    Node* newNode = new Node(value);
    head = newNode;
    tail= newNode;
  }
  else {
    Node* newNode = new Node(value);
    newNode->next = head;
    head -> prev = newNode;
    head = newNode;
  }
}

void print(Node* head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp->data << "->";
    temp = temp ->next;
  }
  cout << "NULL"<<endl;
}

void printReverse(Node* tail) {
  Node* temp = tail;
  while(temp != NULL) {
    cout << temp->data <<"->";
    temp = temp->prev;
  }
  cout << "NULL" << endl;
}

void insertAtTail(int value, Node* &head, Node* &tail ){
  if(head == NULL && tail == NULL) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
  }
  else {
    Node* newNode = new Node(value);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
  }
}

int getLength(Node* &head) {
  Node* temp = head;
  int count = 0;
  while(temp != NULL) {
    count++;
    temp = temp ->next;
  }
  return count;
}

void insertAtPosition(int position,int value, Node* &head, Node* &tail) {
  int len = getLength(head);
  if(position == 1)   insertAtHead(value, head,tail);
  else if(position == len+1)  insertAtTail(value, head, tail);
  else {
    Node* temp = head;
    for(int i=0; i<position-2; i++) {
      temp = temp ->next;
    }
    Node* newNode = new Node(value);
    //forward pointer set
    Node* forward = temp->next;
    //pointers ko set krra hu 
    newNode->prev = temp;
    temp->next = newNode;
    forward->prev = newNode;
    newNode->next = forward;
  }
  

}

bool searchElement(Node* head, int target) {
  Node* temp = head;
  while(temp != NULL) {
    if(temp ->data == target) {
      return true;
    }
    temp = temp -> next;
  }
  return false;
}

void deleteFromPosition(int position, Node* &head, Node* &tail) {
  int length = getLength(head);
  //LL is empty
  if(head == NULL && tail == NULL) {
    cout << "no nodes to delete" << endl;
    return;
  }
  else if(head == tail) {
    Node* temp = head;
    head = NULL;
    tail = NULL;
    delete temp;
  }
  else if(position == 1) {
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
  }
  else if(length == position) {
    Node* temp = tail;
    tail = temp->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete temp;
  }
  else {
    Node* backward = head;
    for(int i=0; i<position-2; i++) {
      backward = backward -> next;
    }
    Node* curr = backward->next;
    Node* forward = curr->next;
    backward->next = forward;
    forward->prev = backward;
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
  }
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  //cout << "hello" << endl;
  insertAtTail(10,head,tail);
  //10->NULL;
  insertAtTail(20,head,tail);
  //10->20->NULL;
  insertAtTail(30,head,tail);
  //10->20->30->NULL;
  //print(head);
  insertAtPosition(4, 420, head, tail);
  print(head);
  deleteFromPosition(4, head, tail);
  print(head);



  // insertAtHead(10,head,tail);
  // //10->NULL
  // insertAtHead(20,head,tail);
  // //20->10->NULL
  // insertAtHead(30,head,tail);
  // //30->20->10->NULL
  // print(head);
  // printReverse(tail);
  return 0;
}

//---------------------------------------------------(linked list - 3)-------------------------------------------------------------
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    // ListNode* reverseList(ListNode* &prev, ListNode* &curr) {
    //     //base case
    //     if(curr == NULL) {
    //         //iska mtlb LL reverse ho chuki h
    //         //reversed LL k  starting node pr prev wala pointer hai
    //         return prev;
    //     }
    //     //1 case hum solve karenge 
    //     ListNode* forward = curr->next;
    //     //current node ko piche ki disha me point karwaya 
    //     curr->next = prev;
    //     //pointers ko 1 step aage badhaya and recursion ko pakkda dia aage solve krne k liye 
    //     prev = curr;
    //     curr = forward;
    //     //baaki recursion sambhal lega
    //     return reverseList(prev, curr);
    // }
    ListNode* reverseList(ListNode* head) {

        //iterative approach
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL) {
            ListNode* forward = curr->next;
            //forward pointer set hogya, ab aage ki list lost nhi hogi 
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        //newHead of linkedlist ko hoga -> prev pointer
        return prev;


        // ListNode* prev = NULL;
        // ListNode* curr = head;

        // ListNode* newHead = reverseList(prev, curr);
        // return newHead;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* getMiddle(ListNode* head, ListNode* &middleNodeKaPrev) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL) {
            fast = fast -> next;
            if(fast != NULL) {
                fast = fast -> next;
                middleNodeKaPrev = slow;
                slow = slow -> next;
            }
        }
        return slow;
    }
    ListNode* reverseList(ListNode* & prev, ListNode* &curr) {
        while(curr != NULL) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev= curr;
            curr = forward;
        }
        return prev;
    }
bool isPalindrome(ListNode* head){
    if(head==NULL){return true;}
    if(head->next==NULL){return true;}
    ListNode* firstHalfHead=head;
    ListNode* middleNodeKaPrev=NULL;
    ListNode* middleNode=getMiddle(head,middleNodeKaPrev);
    middleNodeKaPrev->next=NULL;
    ListNode* prev=NULL;
    ListNode* curr=middleNode;
    ListNode* secondHalfHead=reverseList(prev,curr);
    ListNode* temphead1=firstHalfHead;
    ListNode* temphead2=secondHalfHead;
    while(temphead1!=NULL){
        if(temphead1->val!=temphead2->val){return false;}
        else{
            temphead1=temphead1->next;
            temphead2=temphead2->next;
        }
    }
    return true;
}


//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 

//Given a number represented as a linked list, add 1 to the number and return the updated linked list.
#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node* next;
Node(int x){data=x;next=NULL;}
};

void printList(Node* node){
while(node!=NULL){
cout<<node->data%10;
node=node->next;
}
cout<<"\n";
}

class Solution{
public:
Node* reverseList(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
Node* addOne(Node *head){
    head=reverseList(head);
    int carry=1;
    Node* temp=head;
    while(temp!=NULL){
        int sum=carry+temp->data;
        int digit=sum%10;
        carry=sum/10;
        temp->data=digit;
        if(temp->next==NULL&&carry!=0){
            Node* newNode=new Node(carry);
            newNode->next=NULL;
            temp->next=newNode;
            temp=newNode;
        }
        temp=temp->next;
    }
    head=reverseList(head);
    return head;
}
};

int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    Node* head=new Node(s[0]-'0');
    Node* tail=head;
    for(int i=1;i<s.size();i++){
        tail->next=new Node(s[i]-'0');
        tail=tail->next;
    }
    Solution ob;
    head=ob.addOne(head);
    printList(head);
}
return 0;
}


// } Driver Code Ends


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// Detect whether a singly linked list contains a cycle (loop) or not.
class Solution {
public:
   bool hasCycle(ListNode *head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
            if(fast == slow){ return true; }
        }
    }
    return false;
}
 // or
bool hasCycle(ListNode *head){
    unordered_map<ListNode*,bool> m;
    ListNode* temp = head;
    while(temp != NULL){
        if(m[temp] == true){ return true; }
        else { m[temp] = true; }
        temp = temp->next;
    }
    return false;
}
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// Remove duplicates from a sorted singly linked list.
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head){
    if(head == NULL){ return head; }
    if(head->next == NULL){ return head; }

    ListNode* prev = head;
    ListNode* temp = head->next;

    while(temp != NULL){
        if(temp->val == prev->val){
            prev->next = temp->next;
            temp->next = NULL;
            delete temp;
        }else{
            prev = prev->next;
            temp = temp->next;
        }
        temp = prev->next;
    }
    return head;
}
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// Reverse a singly linked list in groups of size k.
class Solution {
public:
    int getLength(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            len++;
            temp = temp -> next;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        // LL is empty
        if(head == NULL ) {
            return head;
        }
        //Single Node
        if(head -> next == NULL) {
            return head;
        }
        ///atleast 2 node, or >1 nodes
        
      
        //check for LL length
        int len = getLength(head);
        if(len < k) {
            //toh reverse krne ki need nhi h,as per question
            return head;
        }

        //1 case hum akrenge , baaaki recursion sambhal lega
        //1 case -> k length ko reverse karna h 

        ListNode* prev = NULL;
        ListNode* curr = head;
        int position = 0;

        while(position < k) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            position++;
        }

        //baaki recursion sambhal lega
        if(curr != NULL) {
            ListNode* recursionKaHead = reverseKGroup(curr, k);
            head->next = recursionKaHead;
        } 

        return prev;

    }
};

// Sort a linked list that contains only 0, 1, and 2.
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){ data=x; next=NULL; }
};

Node* start=NULL;

class Solution{
public:
    void insertAtTail(Node* &toMove,Node* &head,Node* &tail){
        if(head==NULL&&tail==NULL){
            head=toMove;
            tail=toMove;
        }else{
            tail->next=toMove;
            tail=toMove;
        }
    }

    Node* segregate(Node *head){
        Node* zeroHead=NULL;Node* zeroTail=NULL;
        Node* oneHead=NULL;Node* oneTail=NULL;
        Node* twoHead=NULL;Node* twoTail=NULL;

        Node* temp=head;
        while(temp!=NULL){
            Node* toMove=temp;
            temp=temp->next;
            toMove->next=NULL;

            if(toMove->data==0){
                insertAtTail(toMove,zeroHead,zeroTail);
            }else if(toMove->data==1){
                insertAtTail(toMove,oneHead,oneTail);
            }else{
                insertAtTail(toMove,twoHead,twoTail);
            }
        }

        if(zeroHead!=NULL){
            if(oneHead!=NULL){
                zeroTail->next=oneHead;
                oneTail->next=twoHead;
            }else{
                zeroTail->next=twoHead;
            }
            return zeroHead;
        }else{
            if(oneHead!=NULL){
                oneTail->next=twoHead;
                return oneHead;
            }else{
                return twoHead;
            }
        }
    }
};

void printList(Node *Node){
    while(Node!=NULL){
        printf("%d ",Node->data);
        Node=Node->next;
    }
    printf("\n");
}

void insert(int n){
    int value;
    Node* temp;
    for(int i=0;i<n;i++){
        scanf("%d",&value);
        if(i==0){
            start=new Node(value);
            temp=start;
        }else{
            temp->next=new Node(value);
            temp=temp->next;
        }
    }
}

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        insert(n);
        Solution ob;
        Node* newHead=ob.segregate(start);
        printList(newHead);
    }
    return 0;
}

//----------------------------------------------(mega class ll)--------------------------------------------------------
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void print(Node *head){
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void solve(Node *head, int &carry){
    if (!head)
        return;
    solve(head->next, carry); 

    // 1 case
    int sum = head->data + carry;
    int digit = sum % 10;
    carry = sum / 10; // imp.
    head->data = digit;
}

Node *add1(Node *head, int &carry)
{
    solve(head, carry);
    if (carry)
    {
        // insertAtHead
        Node *newHead = new Node(carry);
        newHead->next = head;
        head = newHead;
    }
    return head;
}

int main()
{
    Node *head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);

    print(head);
    int carry = 1;
    head = add1(head, carry);
    print(head);
    return 0;
}

// add two no.s
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution{
public:
    ListNode* iterative(ListNode *l1,ListNode *l2){
        ListNode* ans=new ListNode(-1);
        ListNode* it=ans;
        int carry=0;
        while(l1||l2||carry){
            int a=l1?l1->val:0;
            int b=l2?l2->val:0;
            int sum=a+b+carry;
            int digit=sum%10;
            carry=sum/10;
            it->next=new ListNode(digit);
            it=it->next;
            l1=l1?l1->next:nullptr;
            l2=l2?l2->next:nullptr;
        }
        ListNode* finalAns=ans->next;
        delete ans;
        return finalAns;
    }

    ListNode* recursive(ListNode *l1,ListNode *l2,int carry=0){
        if(!l1&&!l2&&!carry)return 0;
        int a=l1?l1->val:0;
        int b=l2?l2->val:0;
        int sum=a+b+carry;
        int digit=sum%10;
        carry=sum/10;
        ListNode* ans=new ListNode(digit);
        ans->next=recursive(l1?l1->next:l1,l2?l2->next:l2,carry);
        return ans;
    }

    ListNode* addTwoNumbers(ListNode *l1,ListNode *l2){
        // return iterative(l1,l2);
        return recursive(l1,l2);
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution{
public:
    ListNode* hasCycle(ListNode *head){
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
                if(fast==slow){
                    return fast;
                }
            }
        }
        return nullptr;
    }

    ListNode* detectCycle(ListNode *head){
        ListNode *fast=hasCycle(head);
        if(!fast)return nullptr;
        ListNode *slow=head;
        ListNode *prev=0;
        while(slow!=fast){
            slow=slow->next;
            prev=fast;
            fast=fast->next;
        }
        prev->next=nullptr;
        return slow;
    }
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution{
public:
    vector<ListNode*> splitListToParts(ListNode* head,int k){
        int N=0;
        auto it=head;
        while(it){
            N++;
            it=it->next;
        }
        int partSize=N/k;
        int extraNodes=N%k;
        vector<ListNode*> ans(k,nullptr);
        it=head;
        for(int i=0;i<k&&it;i++){
            ans[i]=it;
            int currentPartSize=partSize+(extraNodes-- >0?1:0);
            for(int j=0;j<currentPartSize-1;j++) it=it->next;
            auto nextPartStarting=it->next;
            it->next=nullptr;
            it=nextPartStarting;
        }
        return ans;
    }
};


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution{
public:
    Node* solve(Node* head){
        auto it=head;
        auto tail=it;
        while(it){
            if(it->child){
                auto childTail=solve(it->child);
                auto temp=it->next;
                it->next=it->child;
                it->next->prev=it;
                childTail->next=temp;
                if(temp) temp->prev=childTail;
                it->child=nullptr;
            }
            tail=it;
            it=it->next;
        }
        return tail;
    }

    Node* flatten(Node* head){
        if(!head) return nullptr;
        solve(head);
        return head;
    }
};



// ----------------------------Stack class - 1--------------------------------
//Demonstrate basic operations on a stack using STL (push, pop, top, size, empty).
#include <iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl; 
    cout<<s.empty()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}


//#include <iostream>
using namespace std;

class Stack{
    public:
          int* arr;
          int size;
          int top;

        Stack(int capacity) {
            arr = new int[capacity];
            size = capacity;
            top = -1;
          }

void push(int val){
    if(top==size-1){
        cout<<"Stack Overflow"<<endl;
    }else{
        top++;
        arr[top]=val;
    }
}

void pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
    }else{
        arr[top]=0;
        top--;
    }
}

int getSize(){
    return top+1;
}

bool isEmpty(){
    if(top==-1) return true;
    else return false;
}

int getTop(){
    if(top==-1){
        cout<<"There is no element at the top, as stack is empty";
        return -1;
    }else{
        return arr[top];
    }
}

void print(){
    cout<<"Printing Stack"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};


int main() {
  //creating a Stack of initial size 5 
  Stack s(5);
  s.print();
  s.push(10);
  s.print();
  s.push(20);
  s.print();
  s.push(30);
  s.print();
  s.push(40);
  s.print();
  s.push(50);
  s.print();
  s.push(60);
  s.print();

//   cout << s.getTop() << endl;
//   cout << s.getSize() << endl;
//   cout << s.isEmpty() << endl;

//   s.pop();
//   s.print();
//     s.pop();
//   s.print();
//     s.pop();
//   s.print();
//       s.pop();
//   s.print();
//       s.pop();
//   s.print();
//   s.pop();
//   cout << s.getSize();
//   return 0;
}

// hw stack using linked list 
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class Stack{
public:
    Node* top;
    Stack(){
        top=NULL;
    }
    void push(int val){
        Node* newNode=new Node(val);
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
    }
    int getTop(){
        if(top==NULL){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return top->data;
    }
    bool isEmpty(){
        return top==NULL;
    }
    int getSize(){
        int count=0;
        Node* temp=top;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }

    void print(){
        Node* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.getSize()<<endl;
    cout<<s.getTop()<<endl;
    s.pop();
    cout<<s.getTop()<<endl;
    s.print();
    return 0;
}

// Implement two stacks in a single array.
#include <iostream>
using namespace std;

class Stack{
public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top1=-1;
        top2=size;
    }

    void push1(int value){
        if(top2-top1==1){
            cout<<"Stack Overflow"<<endl;
        }else{
            top1++;
            arr[top1]=value;
        }
    }

    void push2(int value){
        if(top2-top1==1){
            cout<<"Stack Overflow"<<endl;
        }else{
            top2--;
            arr[top2]=value;
        }
    }

    void pop1(){
        if(top1==-1){
            cout<<"Stack Underflow"<<endl;
        }else{
            arr[top1]=0;
            top1--;
        }
    }

    void pop2(){
        if(top2==size){
            cout<<"Stack Underflow"<<endl;
        }else{
            arr[top2]=0;
            top2++;
        }
    }

    void print(){
        cout<<"Top1: "<<top1<<endl;
        cout<<"Top2: "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s(5);
    s.push1(10);
    s.print();
    s.push2(90);
    s.print();
    s.push2(80);
    s.print();
    s.pop1();
    s.print();
    s.push2(90);
    s.print();
    s.push2(80);
    s.print();
    s.push2(80);
    s.print();
    s.push1(80);
    s.print();
    return 0;
}

// Reverse a string using a stack.
#include <iostream>
#include<stack>
using namespace std;

int main() {
  stack<char> s;
  string name = "amitwala";

  for(int i=0; i<name.length(); i++) {
    char ch = name[i];
    s.push(ch);
  }
  while(!s.empty()) {
    cout << s.top();
    s.pop();
  }

  return 0;
}

// Insert an element at the bottom of a stack using recursion.
#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& s, int value) {
  //base case
  if(s.empty()) {
    s.push(value);
    return;
  }
  //1 case hum krenge and baaki recursion karega
  int topElement = s.top();
  s.pop();

  //baaki recursion
  insertAtBottom(s,value);

  //backtrack
  s.push(topElement);
}

int main() {
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

  int value = 13;

  insertAtBottom(s,value);

  //traverse
  while(!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
  return 0;
}


// -----------------------------------(Queue class :-- 01)----------------------------------------
#include <iostream>
#include<queue>
using namespace std;

int main() {

  //douly-ended queue 
  deque<int> dq;
  //insertion
  dq.push_front(10);
  //10
  dq.push_front(30);
  //10 30
  dq.push_front(50);
  //10 30 50
  dq.push_back(70);
  ///70 10 30 50;
  dq.push_back(100);
  //100 70 10 30 50
  cout << dq.size() << endl;
  cout << dq.empty() << endl; 
  cout << dq.front() << endl;
  cout << dq.back() << endl;

  // removal;
  dq.pop_front();
  cout << dq.front() << endl;
  dq.pop_back();
  cout << dq.back() << endl;


  // queue<int> q;
  // //insertion
  // q.push(10);
  // q.push(20);
  // q.push(30);
  // q.push(40);
  // //front 
  // cout << q.front() << endl;
  // //removal 
  // q.pop();
  // cout << q.front() << endl;
  // //size
  // cout << q.size() << endl;
  // //empty
  // cout << q.empty() << endl;
  // //rear element
  // cout << q.back() << endl;
  //printing
  // while(!q.emtpy()) {
  //   cout << q.front() << " ";
  //   q.pop();
  // }
  return 0;
}

#include <iostream>
using namespace std;

class Queue{
  private:
    int *arr;
    int n;
    int front;
    int rear;
  public:
    Queue(int size) {
      arr = new int[size];
      n = size;
      front = -1;
      rear = -1;
    }
    void push(int val) {
      if(rear == n-1) { cout << "Overflow" << endl; }
      else if(front==-1 && rear == -1) {
        rear++;
        front++;
        arr[rear]= val;
      }
      else {
        rear++;
        arr[rear] = val;
      }
    }
    void pop() {
      if(front==-1 && rear==-1) {
        //queue is empty
        cout << "Underflow" << endl;
      }
      else if(front == rear) {
        //single element
        arr[rear] = -1;
        front = -1;
        rear = -1;
      }
      else {
        //normal flow
        arr[front] = -1;
        front++;
      }

    }
    int getFront() {
      if(front == -1) {
        cout << "Queue is empty" ;
      }
      else {
        return arr[front];
      }
    }
    int getRear() {
      if(rear == -1) {
        cout << "Queue is empty" ;
      }
      else {
        return arr[rear];
      }
    }
    int getSize() {
      //number of elements inside a queue
      if(front == -1 && rear == -1) {
        return 0;
      }
      else
        return rear-front+1;
    }
    bool isEmpty() {
      if(front==-1 && rear == -1) {
        return true;
      }
      else{
        return false;
      }
    }
};


int main() {
  Queue q(5);

  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  cout << q.getSize() << endl;
  q.push(40);
  cout << q.getFront() << endl;
  q.push(100);
  cout << q.isEmpty() << endl;

  q.pop();
  cout << q.getSize() << endl;
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  cout << q.getSize() << endl;
  q.pop();

  return 0;
}


// deque 
#include <iostream>
using namespace std;

class Deque{
  private:
    int *arr;
    int n ;
    int front; 
    int rear;
  public:
    Deque(int size) {
      this->n = size;
      arr = new int[size];
      front = -1;
      rear = -1;
    }
    void pushFront(int val) {
      if(front == 0) {
        //iska mtlb mere paas left side me koi or jagah hi nahi. 
        //hai insert krne k liye
        cout << "Overflow" << endl;
      }
      else if(front == -1 && rear == -1) {
        //queue pehle empty thi, and ab main first elemnt
        //insert krne aaya hu 
        front++;
        rear++;
        arr[front] = val;
      }
      else {
        //normal flow
        front--;
        arr[front] = val;
      }
    }
    void popBack() {
      if(front == -1 && rear == -1) {
        //is case me queue phle sse hi empty h, no element to pop
        // therefpore underflow hojaega
        cout << "Underflow" << endl;
      }
      else if(front == rear) {
        //iss case me queue k andar sirf 1 hielemtn bacha hua h 
        //there after removing it, queue will get empty
        arr[rear] = -1;
        front = -1;
        rear = -1;
      }
      else {
        //normal flow';
        arr[rear] = -1;
        rear--;
      }
    }
    void pushBack(int val) {
      if(rear == n-1) {
        cout << "Overflow" << endl;
      }
      else if(front==-1 && rear == -1) {
        //inserting first element;
        rear++;
        front++;
        arr[rear]= val;
      }
      else {
        //normal flow
        rear++;
        arr[rear] = val;
      }
    }
    void popFront() {
      if(front==-1 && rear==-1) {
        //queue is empty
        cout << "Underflow" << endl;
      }
      else if(front == rear) {
        //single element
        arr[front] = -1;
        front = -1;
        rear = -1;
      }
      else {
        //normal flow
        arr[front] = -1;
        front++;
      }
    }
    void print() {
      for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
      }cout << endl;
    }
};


int main() {
  Deque dq(5);

  dq.pushFront(10);
  dq.print();
  dq.pushFront(20);
  dq.print();
  dq.pushBack(15);
  dq.print();
  dq.pushBack(35);
  dq.print();
  dq.pushFront(100);
  dq.print();
  dq.popFront();
  dq.print();
  dq.popFront();
  dq.print();
  dq.popFront();
  dq.print();
  dq.popFront();
  dq.print();
  // dq.popBack();
  // dq.print();
  // dq.popBack();
  // dq.print();
  // dq.popBack();
  // dq.print();
  // dq.popBack();
  // dq.print();
  return 0;
}

// Circular queue implementation using array.
#include <iostream>
using namespace std;

class CircularQueue{
  public:
    int *arr;
    int n;
    int front;
    int rear;

  CircularQueue(int size) {
    this->n = size;
    arr = new int[size];
    front = -1;
    rear = -1;
  }

  void push(int val) {
    //4 cases: Overflow, first elemnt, circualr nature, normal flow
    if((front == 0 && rear == n-1)||(rear == front-1)) {
      cout << "Overflow" << endl;
    }
    else if(front==-1 && rear == -1) {
      front++;
      rear++;
      arr[rear] = val;
    }
    else if(rear == n-1 && front != 0) {
      //circular nature
      rear = 0;
      arr[rear] = val;
    }
    else {
      //normal flow
      rear++;
      arr[rear] = val;
    }

  }
  void pop() {
    //4 cases: Underflow, single elemtn, circular nature , normal flow 
    if(front==-1 && rear==-1) {
      cout << "Underflow" << endl;
    }
    else if(front == rear) {
      //single element
      arr[front] = -1;
      front=-1;
      rear= -1;
    }
    else if(front== n-1 ) {
      //circular nature
      arr[front] = -1;
      front = 0;
    }
    else {
      //normal case
      arr[front] = -1;
      front++;
    }

  }
  int getFront() {
    if(front == -1) {
      cout << "Queue is empty";
      return -1;
    }
    else {
      return arr[front];
    }
  }
  
  int getSize() {
    if(front==-1 && rear == -1) {
      return 0;
    }
    else if(rear >= front) {
      return rear-front+1;
    }
    else{
      return n-front+rear+1;
    }
  }
  bool isEmpty() {
    if(front == -1 && rear == -1) {
      return true;
    }
    else {
      return false;
    }
  }

  void print() {
    for(int i=0; i<n; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

};

int main() {
  CircularQueue q(5);

  q.push(10);
  q.print();
  q.push(20);
  q.print();
  q.push(30);
  q.print();
  q.push(40);
  q.print();
  q.push(50);
  q.print();
  q.push(60);
  q.print();
  q.pop();
  q.print();
  q.pop();
  q.print();
  q.push(100);
  q.print();
  q.push(101);
  q.print();
  cout << q.getSize() << endl;
  cout << q.isEmpty() << endl;
  cout << q.getFront() << endl;

  return 0;
}
