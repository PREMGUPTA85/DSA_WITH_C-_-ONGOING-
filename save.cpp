//1. WAP to print Namaste duniya 
#include<iostream>
using namespace std;
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

// wap to know about the type of data 
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
#include<iostream>
using namespace std;

int main () {
    int num;
    cout << "please enter the number: ";
    cin >> num;

    while(num > 0){
        int rem = num % 2;
        cout << rem << endl;
        num /= 2;
    }
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


//wap to print even number from start & end two integers entered by user
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
    fill(arr, arr + 4, 23);
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

//prototype declaration function name and it's three input parameters
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
                min_ans = min(min_ans, arr[i]);
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

void sortarrays(int arr[], int size){
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

int main () {
    int size;
    cout << "please enter the size of elements: " << endl;
    cin >> size;
    int arr[1000];
    for(int i = 0; i < size; i++){
        cout << "Please enter the number at index: " << i << endl;
        cin >> arr[i];
    }
    sortarrays(arr, size);
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
    for(int i = 0;i < size; i++){
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
    sort(a, a + size); // it will sort the array in ascending order for this we include header file #include<algorithm>
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
    cin >> target;
    pair<int,int>ans = checktwosum(a, size,target);
    if(ans.first == -1 && ans.second == -1){
        cout << "Pair not found"<< endl;
    }
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
 //  vector<char> v;
 //  v.push_back('a');

 //  v.push_back('b');
	// v.push_back('c');

 //  v.push_back('d');

  // cout << "Front element: " << v[0] << endl;
  // cout << "Front element: " << v.front() << endl;
  // cout << "End Element: " << v[v.size() - 1] << endl;
  // cout << "End Element: " << v.back() << endl;

  // // vector initialization
  // vector<int>arr; // default with no data, 0 size
  // vector<int>arr2(5, -1); // init with n size with specific data
  // // arr2.push_back(50);
  // // print(arr2);

  // vector<int>arr3 = {1,2,3,4,5};
  // // arr3.pop_back();
  // // print(arr3);

  // vector<int>arr4{1,2,3,4,5};
  // // print(arr4);

  // // how to copy vector
  // vector<int> arr5 = {1,2,3,4,5};
  // vector<int>arr6(arr5);
  // print(arr6);

  //  // in vector, dont tell size of vector.
  //  // just keep inserting, i will manage the allocations.
  //  vector<int> v; // array hi hai.

  //  // insert
  //  int n;
  //  cin >> n;
  //  for (int i = 0; i < n; ++i) {
  //    int d;
  //    cin >> d;
  //    v.push_back(d);
  //  }
  //  print(v);

  // // I want to clear the vector
  // v.clear();
  // v.push_back(50);
  //  print(v);

  // // pop
  // v.pop_back();
  //   print(v);
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

    //printDiagnolSum(arr,rowSize,colSize);
    
    
    //printColumnSum(arr,rowSize,colSize);

    

    //printRowSum(arr,rowSize,colSize);


    // int maxAns = findMaximumIn2DArray(arr,rowSize,colSize);
    // cout << "max num: " << maxAns << endl;


    // int ans = findMinimumIn2DArray(arr,rowSize,colSize);
    // cout << ans << endl;




    //int target = 404;

    // bool ans = search2DArray(arr,rowSize,colSize,target);

    // cout << "ans is: " << ans << endl;











    //declaring 2D array
    //int arr[4][3];

    //initialise
    // int arr[3][3] = {
    //                 {10,20,100},
    //                 {30,40,200},
    //                 {50,60,300}
    //                 };
    // int rowSize=3;
    // int colSize=3;

    //diagnol matrix -> square matrix
    // for(int i=0; i<rowSize; i++) {
    //     cout << arr[i][i] << " ";
    // }

    // for(int r=0; r<rowSize; r++) {
    //     for(int c=0; c<colSize; c++) {
    //         if(r == c) {
    //             cout << arr[r][c] <<  " ";
    //         }
    //     }
    //     cout << endl;
    // }

    ///int arr[3][2] = {10,20,30,40,50,60};
    // int arr[3][2] = {10,20};

    //cout << arr[2][1] << endl;

    //traverse the entire array


    //row-wise
    // for(int rowIndex = 0; rowIndex<rowSize; rowIndex++) {
    //     for(int colIndex=0; colIndex<colSize; colIndex++) {
    //         cout << arr[rowIndex][colIndex] << " ";
    //     }
    //     cout << endl;
    // }

    //column wise
    // for(int col=0; col<colSize; col++) {
    //     for(int row=0; row<rowSize; row++) {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // } 


    //square-matrix
    // for(int r=0; r<rowSize; r++) {
    //     for(int c=0; c<colSize; c++) {
    //         cout << "Printing " << c << ", " << r << endl;
    //         cout << arr[c][r] << " ";
    //     }
    //     cout << endl;
    // }


    // int arr[2][3];
    // int rowSize = 2;
    // int colSize = 3;

    // //taking input -> row-wise
    // for(int i=0; i<rowSize; i++) {
    //     for(int j=0; j<colSize; j++) {
    //         cout << "Enter the value for (" << i << ", " <<j << ") : ";
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << "Printing 2D array: " << endl;
    // //row-wise
    // for(int rowIndex = 0; rowIndex<rowSize; rowIndex++) {
    //     for(int colIndex=0; colIndex<colSize; colIndex++) {
    //         cout << arr[rowIndex][colIndex] << " ";
    //     }
    //     cout << endl;
    // }




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

      if(arr[i][j] == target ){
        return true;
      }

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
    sort0sand1s(arr, n);
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
    cout << "Please enter size: ";
    cin >> n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    pivotindex(arr, n);
    return 0;
}

// find pivot index with time_complexity is O(n)
#include<iostream>
using namespace std;

void pivotindex(int arr[], int n){
    int lsum[n] = {0}, rsum[n] = {0};
    // cal. lsum array
    for(int i = 1; i < n; i++)
        lsum[i] = lsum[i - 1] + arr[i - 1];
    
    // cal.rsum array
    for(int i = n - 2; i > 0; --i){
        rsum[i] = rsum[i + 1] + arr[i + 1];
    }
    // check krte h
    for(int i = 0; i < n; i++){
        if(lsum[i] == rsum[i]) 
            cout << "yes index is: " << i;
    }
    return;
}

int main () {
    int n;
    cout << "Please enter size: ";
    cin >> n;
    int arr[1000];
    for(int i = 0; i < n; i++){
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

//87.Brtueforce program for arrays .
/*
6
1
12
-5
-6
50
3
Please enter the value of K:        
4
12.75
*/
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
    int arr[1000];
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
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
#include<iostream>
#include<algorithm>
using namespace std;

void duplicate(int arr[], int size){
    for(int i = i ; i  < size; i++){
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

// OR

//90. Wap to find the duplicate number also it modifying an array.
#include<iostream>
#include<algorithm>
using namespace std;

void duplicate(int arr[], int size){
    for(int i = 0 ; i  < size; i++){
        if(arr[i +1] == arr[i]){
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


// method -- 02

//90. Wap to find the duplicate number also it modifying an array.
#include<iostream>
#include<algorithm>
using namespace std;

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

int main (){
    int arr[] = {1,3,5,3,4};
    // size of an array
    int n = sizeof(arr)/sizeof(int);
    missing(arr, n);
    return 0;
}

// 92. find common elements in 3 sorted array 
#include<iostream>
#include<algorithm>
using namespace std;

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
    vector<vector<int>>v = {// vector declaration
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    wavematrix(v);   // function call
    return 0;
}

 //wap to print spiralmatrix
#include<iostream>
#include<vector>
using namespace std;

void spiralmatrix(vector<vector<int>>v){
    // row size
    int m = v.size();
    // column size 
    int n = v[0].size();
    //initialisaton 
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
