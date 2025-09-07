// //1. WAP to print Namaste duniya 
// #include<iostream>
// using namespace std;
// int main () {
//     cout << "namaste duniya" << endl;
//     return 0;
// }

// // 2.wap to access the variable by declaring it 
// #include<iostream>
// using namespace std;
// int main () {
//     int age = 19;
//     cout << "Prem's age is: " << age << endl;
//     return 0;
// }

// // 3.wap to store values in all data types variables (int,bool,char,float,double)
// #include<iostream>
// using namespace std;
// int main () {
//     int age = 12;
//     float height = 8.4;
//     double weight = 75.05;
//     char alphabet = 'A';
//     bool ismale = true;
//     bool isboy = 1;
//     bool isfemale = false;
//     bool isgirl = 0;
//     cout << age << endl;
//     cout << height << endl;
//     cout << weight << endl;
//     cout << ismale << endl;
//     cout << isboy << endl;
//     cout << isfemale << endl;
//     cout << isgirl << endl;
//     cout << alphabet << endl;
//     return 0;
// } 

// // 4.wap to inter_conversion of data - type
// #include<iostream>
// #include<iomanip> // iomanip header file used for manipulation/manipulating like decimal precision, output formats setting 
// using namespace std;
// int main () {
//     int number = 12;
//     float decimal = static_cast<float>(number);
//     cout << fixed << setprecision(2) << "Decimal value of a number is: " << decimal << endl;
//     return 0;
// }

// // wap to know about the type of data 
// #include<iostream>
// #include<typeinfo> // header file type info used for identifying the type of data
// int main (){
//     int age = 12;
//     float decimal = 12.0;
//     char name = 'A';
//     std::cout<< "type of age is: " << typeid(age).name() << std::endl;
//     std::cout<< "type of age is: " << typeid(decimal).name()<< std::endl;
//     std::cout<< "type of age is: " << typeid(name).name() << std::endl;
//     return 0;
// }


// //6. wap to take an input from the user and print that value by taking input from the user.
// #include<iostream>
// using namespace std;
// int main () {
//     int age;
//     cout << "enter your age: " << endl;
//     cin >> age; // for addressing in age(referring in age)
//     cout << "your's age is: " << age << endl;
//     return 0;
// }

// // 7.wap to inter conversion of data type by taking an input integer from the user 
// #include <iostream>
// #include<iomanip>
// using namespace std;
// int main () {
//     int a;
//     float decimal;

//     cout << "Enter a integer number for conversion in float: " << endl;
    
//     cin >> a;

//     decimal = static_cast<float>(a);
//     cout << fixed << setprecision(2) << "decimal value is: " << decimal << endl;
//     return 0;
// }

// // 8. wap to enter the budget of user for buying the products.
// #include <iostream>
// using namespace std;

// int main () {
//     int a;

//     cout << "please enter the budget: " << endl;

//     cin >> a;

//     if (a > 100000) {
//         cout << "yes u can proceed." << endl;
//     }
//     else if (100000 < a and a < 10000000)
//     {
//         cout << "Let's proceed more and more." << endl;
//     }
//     else {
//         cout << "not having item's in this range." << endl;
//     }
//     return 0;
// }

// // 9.wap to enter the marks of user and then print its grade
// #include <iostream>
// using namespace std;
// int main () {
//     int marks;
    
//     cout << "Enter your marks: "; // endl for getting an new line in our code so when we need for new line we use \n better or faster optimises than endl.
//     cin >> marks ;// for addressing an input value to variable marks 
//     if (marks > 90 || marks < 100) {
//         cout << "Your grade is 'A'. ";
//     }
//     else if (marks > 80) {
//         cout << "Your grade is 'B'. ";
//     } 
//     else if (marks > 70) {
//         cout << "Your grade is 'C'. ";
//     }
//     else if (marks > 60) {
//         cout << "Your grade is 'D'. ";
//     }
//     else {
//         cout << "You failed.";
//     }
//     return 0;
// }

// // 10.wap by taking an switch statement.
// #include <iostream>
// using namespace std;
// int main () {
//     int Days;
//     cout << "please enter date in between 7 feb & 14 feb: " ;
//     cin >> Days;
//     switch (Days){
//         case 7: 
//         cout << "Today is Rose day." <<endl;
//         break;
//         case 8: 
//         cout << "Today is propose day." <<endl;
//         break;
//         case 9: 
//         cout << "Today is chocolate day." <<endl;
//         break;
//         case 10: 
//         cout << "Today is teddy day." <<endl;
//         break;
//         case 11: 
//         cout << "Today is promise day." <<endl;
//         break;
//         case 12: 
//         cout << "Today is hug day day." <<endl;
//         break;
//         case 13: 
//         cout << "Today is kiss day day." <<endl;
//         break;
//         case 14: 
//         cout << "Today is valentine day." <<endl;
//         break;
//         default: 
//         cout << "Dynamic day's of feb are not in this date"<< endl;
//         break;
//     }
//     return 0;
// }

// // 11.wap using ternary operator in C++
// #include <iostream>
// using namespace std;
// int main () {
//     int a,b;

//     cout << "Enter two integers: " ;
//     cin >> a >> b; // taking two integers in same line

//     // using ternary operator 
//     int result = a > b ? a: b;

//     cout << "largest integers among these two is: " << result << endl;
//     return 0;
// }

// // 12.wap in c++ by using continue keyword
// #include<iostream> // header file included 
// using namespace std;
// // main function of code
// int main () {
//     for( int i = 1; i <= 10; i++) { 
//         if (i == 2) {
//             continue;// skip the current iteration
//         }
//         cout << i << "\n";
//         if(i == 3){
//             break; // exit from all the loops 
//         }
//     }
//     return 0;
// }


// // 13.wap to print sum of two number's by using functions
// #include <iostream>
// using namespace std;
// int sum(int a, int b);
// int main() {
//     int a, b;
//     cout << "please enter the number's: " << endl;
//     cin >> a >> b;
//     int ans = sum(a,b); // fn jo value dega vo variable ans me store hogi
//     cout << ans << endl;
//     return 0;
// }
// int sum(int a,int b) {
//     return a + b;
// }

// // 14.wap to print the multiplication of three number's by using functions
// #include<iostream>
// using namespace std;
// int multhree(int a, int b, int c);
// int main () {
//     int a,b,c;
//     cout << "please enter the number's seperated by space: " << endl;
//     cin >> a >> b >> c;
//     int ans = multhree(a,b,c);
//     cout << "Multiplication of these three number's: " << ans << endl;
//     return 0;
// }
// int multhree(int a, int b, int c) {
//     return a * b * c;
// }

// // 15.wap to print counting from 1 to 100
// #include<iostream>// header file <preprocessor directory>
// using namespace std; 
// int counting(){   // prototype declaration (function) // fn defination
//     for (int i = 1; i <= 100; i++){
//         cout << i << endl; // baki fn ko kya krna hai vo yha bataya jaega
//     }
//     cout << endl;
// }
// int main () {
//     counting(); // fn call ( yha se only function ko bulaya jaega)
//     return 0;
// }

// // 16.wap to calculate simple interest
// #include <iostream>
// using namespace std;
// float simpleinterest(float principle,float rate,float time){
//       return (principle * rate * time)/100;
// }
// int main () {
//     float principle, rate , time;
//     cout << "please enter the principle: ";
//     cin >> principle;
//     cout << "please enter the rate: ";
//     cin >> rate;
//     cout << "please enter the time: ";
//     cin >> time;
//     float final_result = simpleinterest(principle, rate, time) ;
//     cout << final_result ;
// }

// //17. wap to print prime number's from 1 to 100 using functions.
// #include<iostream>
// using namespace std;

// void primenumber(int n){
//     if (n <= 1) {
//         cout << "Number is not prime.";
//     }
//     bool isprime = true;
//     for(int i = 2; i < n / 2; i++){
//         if(n % i == 0){
//                 isprime = false;
//                 break;
//         }
//     }
//     if (isprime) {
//         cout << "Number is prime.";
//     }
//     else {
//         cout << "Number is not prime.";
//     }
// }

// int main () {
//     int n;
//     cout << "Please enter the number: ";
//     cin >> n;
//     primenumber(n);
// }
// // 18.wap to check whether a person is elligible for voting or not
// #include <iostream>
// using namespace std;
// int voting(int age) {
//     if (age >= 18){
//         cout << "Elligible for voting." << endl;
//     }
//     else {
//         cout << "not elligible for voting." << endl;
//     }
//     return 0;
// }

// int main () {
//     int age;
//     cout << "please enter the age: " << endl;
//     cin >> age;
//     voting(age);
//     return 0;
// }

// // 19.wap for SIP(systematic investment plan for future)
// #include<iostream>
// #include<iomanip>
// #include<cmath>
// using namespace std;
// float SIP(float monthly,float rate,float years){
//     float final_rate = rate / 1200;
//     int final_months = years * 12;
//     return ( monthly * ((pow(1+final_rate,final_months)- 1)/final_rate) * (1 + final_rate) );
// }
// int main () {
//     float monthly, rate, years;
//     cout << "Please enter the monthly: " << endl;
//     cin >> monthly;
//     cout << "Please enter the rate: " << endl;
//     cin >> rate;
//     cout << "Please enter the years: " << endl;
//     cin >> years;
//     cout << fixed << setprecision(2) << SIP(monthly, rate, years);
//     return 0;
// }

// //20.wap to convert decimal to binary conversion using fn 
// #include <iostream>
// using namespace std;
// int binaryconversion(int num){
//     if (num > 0) {
//         binaryconversion(num / 2);
//         cout << num % 2;
//     }
// }
// int main () {
//     int num;
//     cout << "please enter the number: " << endl;
//     cin >> num;
//     binaryconversion(num);
// }

// // 21.wap to print factorial of a number using recursive function
// #include<iostream>
// using namespace std;
// int factorial(int num){
//     if (num == 0){
//         return 1;
//     }
//     return num * factorial(num -1); // recursive call (fn break into smaller problems from complex problems)
// }
// int main () {
//     int num;
//     cin >> num;
//     cout << factorial(num);
//     return 0;
// }

// // 22.star pattern(square)
// #include<iostream>
// using namespace std;

// int main () {
//     int i;
//     for (i = 1; i <= 4 ; i++){
//         cout << endl << i; 
//         for (int j = 1; j <= 4; j++){
//             cout << "*";
//         }
//     }
// }

// //23.star pattern(right half pyramid)
// #include<iostream>
// using namespace std;
// int main () {
//     for (int i = 1; i <= 5; i++){
//         cout << "\n" << i;
//         for (int j = 1; j <= i; j++){
//             cout << "*";
//         }
//     }
// }

// // 24.hollow rectangle star pattern 
// /*
// * * * * *
// *       *
// *       *
// * * * * *
// */
// #include<iostream>
// using namespace std;
// int main() {
//     int i,j;
//     for (i = 1; i <= 1 ; i++) {
//         cout << endl;
//         for (j = 1 ; j <= 4; j++){
//             if (j == 2){
//                 cout << "*       *"<< endl;
//             }
//             else if (j == 3){
//                 cout << "*       *"<< endl;
//             }
//             else {
//                 cout <<"* * * * *" << endl;
//             }
//         }
//     }
// }

// // 25.wap to print hollow rectangle by entering an length and width of a rectangle
// /*
// Enter length
// 4
// Enter width 
// 5
// * * * * * 
// *       *
// *       *
// * * * * *
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int length, width;
//     cout << "Enter length" << endl;
//     cin >> length;

//     cout << "Enter width " << endl;
//     cin >> width;

//     for(int i = 0; i < length; i++) {
//         for(int j = 0; j < width; j++) {
//             if(i == 0 || i == length - 1 || j == 0 || j == width - 1) {
//                 cout << "* ";
//             } else {
//                 cout << "  "; // 2 spaces to match "* "
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }


// // 26.hollow square pattern
// /*
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
// */
// #include<iostream>
// using namespace std;
// int main () {
//     for (int r = 0; r <= 4; r++){
//             if (r == 0 || r == 4) {
//                 cout << "* * * * *" << endl;
//             }
//             else {
//                 cout << "*       *" << endl;
//             }
//     }
// }

// // 27.wap to print hollow square pattern by taking an length of square.
// /*Enter length of side of square
// 4
// * * * * 
// *     *
// *     *
// * * * *
// */
// #include<iostream>
// using namespace std;

// int main() {
//     //hollow square
//     int n;
//     cout << "Enter length of side of square" << endl;
//     cin >> n;

//     //outer -> rows
//     for(int row=0; row<n; row++) {
//         //inner -> cols
//         for(int col=0; col<n; col++) {
//             if(row == 0 || row == n-1 || col == 0 || col == n-1 ) 
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }
//         //ye main bhul jata hu
//         cout << endl;
//     }

//     return 0;
// }

// // 28.wap to print reverse(inverted right half pyramid star pattern)
// /*
// * * * * *
// * * * *
// * * *
// * *
// *
// */
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout << "please enter range: ";
//     cin >> n;
//     for (int r = 0; r <= n; r++){
//         cout << endl;
//         for (int c = 0; c < n - r; c++) {
//             cout << "* " ;
//         }
//     }
// }

// // 29.wap to print inverted right half pyramid of number's.
// /*
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value of n:\n";
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n - i ; j++){
//             cout << (j + 1) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// //30.wap to print left align hollow pyramid.
// /*
// * * * * * 
// *     *
// *   *
// * *
// *
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value of n ";
//     cin >> n;
//     //inverted hollow half pyramid 
//     for(int row=0; row<n; row++) {
//         for(int col=0; col<n-row; col++) {
//             if(row == 0 || col == 0 || col == n - row - 1 ) {
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         //ye main bhul jata hu
//         cout << endl;
//     }
// } 

// // 31.wap to which converts number from decimal to binary
// #include<iostream>
// using namespace std;

// int main () {
//     int num;
//     cout << "please enter the number: ";
//     cin >> num;

//     while(num > 0){
//         int rem = num % 2;
//         cout << rem << endl;
//         num /= 2;
//     }
//     return 0;
// }

// // 32.WAP TO which converts number from binary to decimal, octal, hexadecimal 
// // for decimal == base *= 2
// // for octal == base *= 8
// //for hexadecimal --> base *= 16
// #include<iostream>
// using namespace std;

// int main() {
//     int num, decimal = 0, base = 1;
//     cout << "Please enter the number: ";
//     cin >> num;
//     while(num > 0){
//         int lastdigit = num % 10;
//         decimal += lastdigit * base;
//         base *= 2;
//         num /= 10;
//     }
//     cout << "It's decimal number is: " << decimal;
//     return 0;
// }

// /*
// 33.
// Pattern
// N = 4
// 1
// 21
// 321
// 4321
// */
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//        int p = i;
//         for(j=1;j<=i;j++){
//           cout<<p;
//           p--;
//         }
//         cout<<endl;
        
//     }
// }

// /* 34.Full pyramid
// 5
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++) {
//         // Print leading spaces
//         for(int k = 1; k <= n - i; k++) {
//             cout << " ";
//         }
//         // Print stars with a space
//         for(int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// //35.Inverted pyramid
// /*
// 5 
// * * * * * 
//  * * * *
//   * * *
//    * *
//     *
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int i = n; i >= 1; i--) {
//         for(int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << "\n";
//         for(int k = 1; k <= n - i + 1; k++) {
//             cout << " ";
//         }
//     }
//     return 0;
// }

// //36.
// /*
// 5
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++) {
//         // Print leading spaces
//         for(int k = 1; k <= n - i; k++) {
//             cout << " ";
//         }
//         // Print stars with a space
//         for(int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << "\n";
//     }
//         for(int i = n; i >= 1; i--) {
//         for(int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << "\n";
//         for(int k = 1; k <= n - i + 1; k++) {
//             cout << " ";
//         }
//     }
//     return 0;
// }
// // 37.Full hollow pyramid.
// /*
// 5 
//     *
//    * *
//   *   *
//  *     *
// * * * * *
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++) {
//         // Print leading spaces
//         for(int j = 1; j < n - i; j++) {
//             cout << " ";
//         }
//         // Print stars with a space
//         for(int j = 0; j <= i; j++) {
//             if(j == 0 || i == n - 1 || j == i){
//             cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// /*
// 5
// * * * * * 
//  *     *
//   *   *
//    * *
//     *
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int i = n; i >= 1; i--) {
//         for(int j = 1; j <= i; j++) {
//             if(i == n || j == 1 || j == i){
//             cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << "\n";
//         for(int k = 1; k <= n - i + 1; k++) {
//             cout << " ";
//         }
//     }
//     return 0;
// }

// /*
// 5
// * * * * * 
//  *     *
//   *   *
//    * *
//     *
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int j = 0; j < n; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     for(int i = 0; i < n - 1; i++){
//         //Spaces
//         for(int j = 0; j <= i; j++){
//             cout << " ";
//         }
//         for(int j = 1; j < n; j++){
//             if(j == 1 || j == n - i - 1)
//             cout << "* ";
//             else 
//             cout << "  ";
//         }
//         cout << "\n";
        
//     }
// } 

// //39.
// /*5
//     * 
//    * *
//   *   *
//  *     *
// *       *
// * * * * *
//  *     *
//   *   *
//    * *
//     *
// */

// // hollow diamond
// #include<iostream>
// using namespace std;

// int main () {
//     int n, i, j;
//     cin >> n;
//     for(i = 0; i < n; i++){
//         for(j = 1; j < n - i; j++){
//             cout << " "; 
//         }
//             for(j = 0; j <=i;j++){
//             if(j == 0 || j == i ){
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             } 
//         }
//     cout << "\n";
//     }
//     for(int i = n; i >= 1; i--) {
//         for(int j = 1; j <= i; j++) {
//             if(i == n || j == 1 || j == i){
//             cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << "\n";
//         for(int k = 1; k <= n - i + 1; k++) {
//             cout << " ";
//         }
//     }
//     return 0;
// }

// /*
// 5
//      * 
//     * *
//    *   *
//   *     *
//  *       *
// * * * * * *
//  *       *
//   *     *
//    *   *
//     * *
//      *
// */
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     // Top half including full star line
//     for(int i = 0; i <= n; i++){
//         // I. Spaces
//         for(int j = 0; j < n - i; j++){
//             cout << " ";
//         }
//         // II. Stars and spaces
//         for(int j = 0; j <= i; j++){
//             if(j == 0 || j == i || i == n){
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     // Bottom half
//     for(int i = 0; i < n; i++){
//         // I. Spaces
//         for(int j = 0; j < i + 1; j++){
//             cout << " ";
//         }
//         // II. Stars and spaces
//         for(int j = 0; j < n - i; j++){
//             if(j == 0 || j == n - i - 1){
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
// // 40.
// /*
// 5
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n  ; i++){
//         //I.Stars
//         for(int j = 0; j < n - i; j++){
//             cout<< "*";
//         }
//         //II.Spaces
//         for(int j = 0; j < 2* i + 1; j++){
//             cout<< " ";
//         }
//         //III. stars
//         for(int j = 0; j < n - i; j++){
//             cout<< "*";
//         }
//     cout << "\n";
//     }
//     for(int i = 0; i < n; i++){
//         //I.Stars
//         for(int j = 0; j <= i; j++){
//             cout << "*";
//         }
//     //II. Spaces
//         for(int j = 1; j < (2 *(n - i)) ; j++){
//             cout << " ";
//         }
//         ///III.Stars
//         for(int j = 0; j <= i; j++){
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;
// }  

// // 41.
// /*
// 5
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < 2 * i + 1; j++){
//             if(j % 2 == 0)
//                 cout << i + 1;
            
//             else 
//                 cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i = 0; i < n - 1; i++){
//         for(int j = 0; j < 2 * (n  - i) - 3; j++){
//             if(j % 2 == 0){
//                 cout << n - i - 1;
//             }
//             else {
//                 cout << "*";
//             }
//         }
//         cout << endl;
//     }
// }

// // 42.
// /*
// 5
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA 
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         char ch = 'A' - 1;
//         for(int j = 0; j <= i; j++){
//             ch++;
//             cout << ch;
//         }
//         // when we doesn't know how many times we need iteration so in that case we use while loop
//         while(ch > 'A'){
//             ch--;
//             cout << ch;
//         }
//         cout << "\n";
//     }
//     return 0;
// }
// //43.
// // wap to calculate a to the power b with functions and standard library functions for math
// #include<iostream>
// #include<math.h>
// using namespace std;

// void power(int x, int y){
//     cout << pow(x, y);
// }
// int main(){
//     int a, b;
//     cin >> a >> b;
//     power(a, b);
//     return 0;
// }
// //44.
// // wap to calculate a to the power b with functions 
// #include<iostream>
// using namespace std;

// void power(int x, int y){
//     int ans = 1;
//     for(int i = 0; i < y; i++){
//         ans = ans * x;
//     }
//     cout << ans;
// }
// int main(){
//     int a, b;
//     cin >> a >> b;
//     power(a, b);
//     return 0;
// }

// // 45.wap to check whether the number is prime or not

// #include<iostream>
// using namespace std;

// void prime(int n){
//     int i;
//     for(i = 2 ; i < n ; i++){
//         if(n % i == 0){
//             break;
//         }
//     }
//     if(n == i){
//         cout << "prime number";
//         }
//     else {
//         cout << "not a prime number";
//         }
// }
// int main () {
//     int n;
//     cin >> n;
//     prime(n);
//     return 0;
// }


// //wap to print even number from start & end two integers entered by user
// #include<iostream>
// using namespace std;

// void evennumber(int start, int end){
//     for(int i = start; i <= end; i++){
//         if(!(i & 1)){
//             cout << i;
//             cout << endl;
//         }
//     }
// }

// int main () {
//     int s, e;
//     cin >> s >> e;
//     evennumber(s, e);
//     return 0;
// }

// // stacks example 
// /*
// ✅ So Yes:
// ✔️ Jab recursion hota hai
// ✔️ Aur function baar-baar call ho raha hota hai
// ✔️ Toh har call ek stack me store hota hai
// ✔️ Aur return hone pe wahi stack unwind hota hai

// Isi ko "call stack" bolte hain.
// */
// #include<iostream>
// using namespace std;

// void bin(int n) {
//     if(n > 1){
//          bin(n / 2);
//     }
//     cout << n % 2 << endl;
// }


// int main() {
//     int n;
//     cin >> n;
//     bin(n);
//     return 0;
// }

// // 47.wap to swap of two number's by using exor.
// #include<iostream>
// using namespace std;

// int main() {
//     int x,y;
//     cin >> x >> y;
//     x = x ^ y;
//     y = x ^ y;
//     x = x ^ y;
//     cout << x << "\n" << y << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// //48.
// /*
// Pattern for N = 4
// 4444
// 333
// 22
// 1
// */

// int main(){
//   int i,j,n;
//     cin>>n;
//     int k = n;
//     for(i=1;i<=n;i++){
//         for(j=i;j<=n;j++){
//             cout<<k;
//         }
//         k--;
//         cout<<endl;
//     }
// }
// //49.
// /*
// 1 
// 1 2
// 1   3 
// 1     4
// 1 2 3 4 5
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//         if(j == 0|| j == i || i == n - 1){
//             cout << j + 1 <<" ";
//         }
//         else {
//             cout << "  ";
//         }
//     }
//     cout << "\n";
//     }
    
// }

// // 50.
// /*
// 5
// 1 2 3 4 5 
// 2     5
// 3   5
// 4 5
// 5
// */
// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j <= n ;j++){
//         if(j == i + 1|| i == 0 || j == n) {
//             cout << j <<" ";
//         }
//         else {
//             cout << "  ";
//         }
//     }
//     cout << "\n";
// }
// return 0;
// }

// // 51.
// /*
// 5
//         1 
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1        
// 1 2 3 4 5 4 3 2 1
// */
// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n - i-1; j++){
//             cout << "  ";
//         }  
//         int k = 0;
//         for(int j = 0; j <= i; j++){
//             k++;
//             cout << k << " ";
//         }

//         while (k > 1){
//             k = k - 1;
//             cout << k << " ";
//         }
//         cout << endl;
//     }
    
// }
// //52. Solid Half Diamond
// /*
// 5
// * 
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
// */
// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for(int i = 0; i < n - 1; i++){
//         for(int j = 0; j < n - i - 1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // 53.
// /*
// 5
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
// */
// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < 2 * n - i - 2; j++){
//             cout << "*";
//         }
//         for(int j = 0; j <=i ; j++){
//             cout << i + 1;
//             cout << "*" ;
//         }
//         for(int j = 0; j < 2 * n - i - 3; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// /*
// 5
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
// */
// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < 2 * n - i - 2; j++){
//             cout << "*";
//         }
//         for(int j = 0; j <=i ; j++){
//             cout << i + 1;
//             cout << "*" ;
//         }
//         for(int j = 0; j < 2 * n - i - 3; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// } 
// // 54.
// /*
// 4
// 1
// 2*3
// 4*5*6
// 7*8*9*10      
// 7*8*9*10      
// 4*5*6
// 2*3
// 1
// */
// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     int c = 1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//             cout << c ;
//             c++;
//             if(j < i){
//                 cout <<"*";
//             }
//         }
//         cout << "\n";
//     }
//     int start = c - n;
//     for(int i = 0; i < n; i++){
//         int k = start;
//         for(int j = 0; j < n - i; j++){
//             cout << k;
//             k++;
//             if(j < n-i-1){
//                 cout <<"*";
//             }
//         }
//         start = start - (n - i - 1);
//         cout << endl;
//     }
//     return 0;
// }

// // 55.
// /*
// 7
// *
// *1*
// *121*
// *12321*       
// *121*
// *1*
// *
// */
// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for(int i = 0 ; i <= n/2; i++){
//         int k = 0;
//         for(int j = 0; j <= i; j++){
//             if(j == 0) {
//                 cout << "*";
//             }
//             else {
//                 k++;
//                 cout << k;
//             }
//         }
//         while (k > 1){
//             k--;
//              cout << k;
//         }
//         if(i > 0){
//         cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i = 0; i <  n/2; i++){
//         int k = 0;
//         for(int j = 0; j < (n/2) - i; j++){
//             if(j == 0){
//                 cout << "*";
//             }
//             else{
//                 k++;
//                 cout << k;
//             }
//         }
//         while (k > 1){
//             k--;
//              cout << k;
//         }
//         if(i != n / 2 - 1){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // 56. Floyd's triangle pattern
// /*
// 4
// 1
// 23
// 456
// 78910
// */

// #include<iostream>
// using namespace std;

// int main (){
//     int n;
//     cin >> n;
//     int k = 1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//         cout << k;
//         k++;
//         }
//     cout << endl; 
//     }
// }


// //57.Pascal's Triangle
// /*
// 5
// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// */
// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         int c = 1;
//         for(int j = 0; j <= i; j++){
//             cout << c << " ";
//             c = c * ((i + 1) - (j + 1))/(j + 1);
//         }
//         cout << endl;
//     } 
//     return 0;
// }
// //58.Butterfly pattern
// /*
// 5
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// */
// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//             cout << "*";
//         }
//         for(int j = 0; j < 2*((n - i) - 1); j++){
//             cout <<" ";
//         }
//         for(int j = 0; j <=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n - i; j++){
//             cout << "*";
//         }
//         for(int j = 0; j < 2 * i; j++){
//             cout << " ";
//        }
//         for(int j = 0; j < n - i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // 59.wap to convert km to miles using functions
// #include<iostream>
// using namespace std;

// float kmtomiles(int n){
//     float miles = n * 0.621371;
//     return miles;
// }
// int main () {
//     int n; 
//     cout << "Enter km: ";
//     cin >> n;
//     cout << kmtomiles(n);
//     return 0;
// }

// // 60.wap to reverse of a number
// #include<iostream>
// using namespace std;

// void reverse(int n){
//     while(n > 0){
//         int rem = n % 10;
//         cout << rem;
//         n = n / 10;
//     }
// }
// int main () {
//     int n;
//     cin >> n;
//     reverse(n);
//     return 0;
// }

// // 61.wap to print area of circle 
// #include<iostream>
// #include<iomanip>
// using namespace std;

// void areaofcircle(int r){
//     cout << fixed << setprecision(2) << 3.14 * r * r;
// }

// int main (){
//     int r;
//     cout << "Enter radius: ";
//     cin >> r;
//     areaofcircle(r);
//     return 0;
// }

// //62.find the factorial 
// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n == 0 || n == 1) return 1;
//     return n * factorial(n - 1);
// }
// int main () {
//     int n;
//     cin >> n;
//     cout << factorial(n);
//     return 0;
// }

// // 63.wap to check whether a number is prime or not.
// #include<iostream>
// using namespace std;

// void primenumber(int n){
//     int i;
//     for(i = 2; i < n; i++){
//         if(n % i == 0){
//             break;
//         }
//     }
//     if(n == i) {
//         cout << "Prime number.";
//         }
//     else{
//         cout << "Not a prime number.";
//         }
// }

// int main () {
//     int n;
//     cin >> n;
//     primenumber(n);
//     return 0;
// }

// // 64.wap to print prime number's from 1 to n.
// /*
// 5
// 2 3 5 
// */
// #include<iostream>
// using namespace std;

// bool checkprime(int n){
//     int i = 2;
//     for(i = 2; i < n; i++){
//         if(n % i == 0){ 
//             return false;
//         }
//     }
//     return true;
// }

// int main () {
//     int n;
//     cin >> n;

//     for(int i = 2; i <= n; i++){
//     int isprime = checkprime(i);
//     if (isprime){
//         cout << i << " ";
//     }
// }
//     return 0;
// }

// // 65.wap to set(set 1 ) the kth bit of a number
// /*
// 10
// 2
// 14
// */
// #include<iostream>
// using namespace std;

// int setbit(int n, int k){
//     return n | (1 << k);
// }
// int main () {
//     int n, k;
//     cin >> n >> k;
//     cout << setbit(n, k);
//     return 0;
// }

// // 66.wap to convert celsius to fahrenheit and kelvin
// #include<iostream>
// using namespace std;

// void conversion(int n){
//     cout << "It's kelvin conversion is: " << n + 273.15 << endl;
//     cout << "It's Fahrenheit is: " << n * (9/5) + 32;
// }

// int main () {
//     int n;
//     cin >> n;
//     conversion(n);
//     return 0;
// }

// // 67.wap to count set(1) bits in a number
// #include<iostream>
// using namespace std;

// void countsetbit(int n){
//     int ctr = 0;
//     while(n > 0){
//         int rem = n % 2;
//         if(rem == 1){
//             ctr++;
//         }
//         n /= 2;
//     }
//     cout << ctr ;
// }

// int main () {
//     int n;
//     cout << "Please enter number: ";
//     cin >> n;
//     countsetbit(n);
//     return 0;
// }


// // 67.wap to count set(1) bits in a number
// #include<iostream>
// using namespace std;

// void countsetbit(int n){
//     int ctr = 0;
//     while(n > 0){
//         int bit = n & 1;
//         {
//             if(bit == 1){
//                 ctr++;
//             }
//             n = n >> 1;
//         }
//     }
//     cout << ctr;
// }

// int main () {
//     int n;
//     cin >> n;
//     countsetbit(n);
//     return 0;
// }

// // 68. wap for make digits by entering an number
// #include<iostream>
// using namespace std;

// void makedigit(int n){ 
//     int num = 0;
//     for(int i = 0; i < n; i++){
//         int p;
//         cout << "Enter Digit: " ;
//         cin >> p;
//         num =  num * 10 + p;
//         cout << "Number created so far: ";
//         cout << num << endl;
//     }
// }
// int main () {
//     int n;
//     cout << "please enter the no. of digits: ";
//     cin >> n;
//     makedigit(n);
//     return 0;
// }

// // 69.fill an array
// #include<iostream>
// using namespace std;

// // fill an array 
// int main () {
//     int arr[4];
//     fill(arr, arr + 4, 23);
//     cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " ";
//     return 0;
// }

// //index[arr]
// #include<iostream>
// using namespace std;

// int main () {
//     int arr[5]; // array declaration

//     // array input 
//     for(int index = 0; index < 5; index++){
//         cout << "please enter the number for index: " << index << endl;
//         cin >> arr[index];
//     }
//     // array output
//     for(int index = 0; index < 5; index++){
//         cout << index[arr] << " ";
//     }
//     return 0;
// }

// // Araays with functions
// #include<iostream>
// using namespace std;

// void check(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         cout << i[arr] << "  ";
//     }
// }
// int main (){
//     int arr[] = {10,20,30,40,50};
//     check(arr, 5);
//     return 0;
// }

// // Araays with functions
// //100  200  300  400  500
// #include<iostream>
// using namespace std;

// void check(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         cout << i[arr] * 10<< "  ";
//     }
// }
// int main (){
//     int arr[] = {10,20,30,40,50};
//     check(arr, 5);
//     return 0;
// }

// //70. linear search method 
// #include<iostream>
// using namespace std;

// //prototype declaration function name and it's three input parameters
// bool checktarget(int arr[], int size, int target){
//     for(int i = 0; i < size; i++){
//             if(target == arr[i]){
//                 return 1;
//             }
//     }
//     return 0;
// }

// int main () {
//     int arr[100]; // how array declares with size

//     int size;
//     cout << "Please enter the number of elements: ";
//     cin >> size;

//     for(int i = 0; i < size; i++){
//         cout << "Enter the element at index: " << i << endl;
//         cin >> arr[i];
//     }

//     int target;
//     cout << "Please enter the element for found: ";
//     cin >> target;

//     cout << checktarget(arr, size, target) << endl;
    
//     return 0;                  
// }

// // 71.max element find out from arrays 
// #include<iostream>
// using namespace std;

// //prototype declaration function name and it's three input parameters
// int checktarget(int arr[], int size){
//         int max_ans = INT8_MIN;
//     for(int i = 0; i < size; i++){
//             if(arr[i] > max_ans){
//                 max_ans = arr[i];
//             }
//     }
//     return max_ans;
// }

// int main () {
//     int arr[100]; // how array declares with size

//     int size;
//     cout << "Please enter the number of elements: ";
//     cin >> size;

//     for(int i = 0; i < size; i++){
//         cout << "Enter the element at index: " << i << endl;
//         cin >> arr[i];
//     }

//     cout << "Maximum element is: " << checktarget(arr, size) << endl;
    
//     return 0;                  
// }

// //Another method for this 

// //max element find out from arrays 
// #include<iostream>
// using namespace std;

// //prototype declaration function name and it's input parameters
// int checktarget(int arr[], int size){
//         int max_ans = INT8_MIN;
//     for(int i = 0; i < size; i++){
//             if(arr[i] > max_ans){
//                 max_ans = max(max_ans, arr[i]);
//             }
//     }
//     return max_ans;
// }

// int main () {
//     int arr[100]; // how array declares with size

//     int size;
//     cout << "Please enter the number of elements: ";
//     cin >> size;

//     for(int i = 0; i < size; i++){
//         cout << "Enter the element at index: " << i << endl;
//         cin >> arr[i];
//     }

//     cout << "Maximum element is: " << checktarget(arr, size) << endl;
    
//     return 0;                  
// }


// //min element find out from arrays 
// #include<iostream>
// using namespace std;

// //prototype declaration function name and it's three input parameters
// int checktarget(int arr[], int size){
//         int min_ans = INT8_MAX;
//     for(int i = 0; i < size; i++){
//             if(arr[i] < min_ans){
//                 min_ans = min(min_ans, arr[i]);
//             }
//     }
//     return min_ans;
// }

// int main () {
//     int arr[100]; // how array declares with size

//     int size;
//     cout << "Please enter the number of elements: ";
//     cin >> size;

//     for(int i = 0; i < size; i++){
//         cout << "Enter the element at index: " << i << endl;
//         cin >> arr[i];
//     }

//     cout << "Minimum element is: " << checktarget(arr, size) << endl;
    
//     return 0;                  
// }


// // 72. count total number of 0's and 1's 
// #include<iostream>
// using namespace std;

// //prototype declaration function name and it's three input parameters
// void checktarget(int arr[], int size){
//     int ctrz = 0;
//     int ctro = 0;
//     for(int i = 0; i < size; i++){
//             if(arr[i] == 0){
//                 ctrz++;
//             }
//             else if(arr[i] == 1){
//                 ctro++;
//             }
//     }
//     cout << "Total number of zero's in this array is: " << ctrz << endl;
//     cout << "Total number of one's in this array is: " << ctro << endl;
// }

// int main () {
//     int arr[100]; // how array declares with size

//     int size;
//     cout << "Please enter the number of elements: ";
//     cin >> size;

//     for(int i = 0; i < size; i++){
//         cout << "Enter the element at index: " << i << endl;
//         cin >> arr[i];
//     }
//     checktarget(arr, size);
    
//     return 0;                  
// }

// // 73.print extreme values of an array
// #include<iostream>
// using namespace std;

// //prototype declaration function name and it's input parameters
// void checktarget(int arr[], int size){
//     int i = 0;
//     int j = size - 1;
//     while(i <= j){
//         if(i == j){
//             cout << arr[i] << " ";
//             break;
//         }
//         else {
//             cout << arr[i] << " "; 
//             i++;
//             cout << arr[j] << " ";
//             j--;
//         }
//     }
// }

// int main () {
//     int arr[100]; // how array declares with size

//     int size;
//     cout << "Please enter the number of elements: ";
//     cin >> size;

//     for(int i = 0; i < size; i++){
//         cout << "Enter the element at index: " << i << endl;
//         cin >> arr[i];
//     }
//     checktarget(arr, size);
    
//     return 0;                  
// }

// // 74.Swap of two number's 
// // Method no. - 1:-- by mine method 

// #include<iostream>
// using namespace std;

// void swap(int b, int a){
//     cout << "after swapping: " << endl;
//     cout << a << " " << b << endl;
// }

// int main () {
//     int a, b;
//     cout << "Please enter the number: " << endl;
//     cin >> a >> b;
//     swap(a, b);
//     return 0;
// }

// // Swap of two number's 
// // Method no. - 2:-- by addtion or subtraction 

// #include<iostream>
// using namespace std;

// void swap(int a, int b){
//     cout << "after swapping: " << endl;
//     cout << a + b - a<< " " << a + b - b << endl;
// }

// int main () {
//     int a, b;
//     cout << "Please enter the number: " << endl;
//     cin >> a >> b;
//     swap(a, b);
//     return 0;
// }

// // Swap of two number's 
// // Method no. - 3:-- by using temp variable
// #include<iostream>
// using namespace std;

// void swap(int a, int b){
//     cout << "after swapping: " << endl;
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << a << " " << b << " " << endl;
// }

// int main () {
//     int a, b;
//     cout << "Please enter the number: " << endl;
//     cin >> a >> b;
//     swap(a, b);
//     return 0;
// }

// // Swap of two number's 
// // Method no. - 4:- Exor method
// #include<iostream>
// using namespace std;

// void swap(int a, int b){
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
//     cout << a << " " << b;
// }

// int main () {
//     int a, b;
//     cout << "Please enter the number: " << endl;
//     cin >> a >> b;
//     swap(a, b);
//     return 0;
// }

// // Swap of two number's 
// // Method no. - 4:- Exor method
// #include<iostream>
// using namespace std;

// void swap(int a, int b){
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
//     cout << a << " " << b;
// }

// int main () {
//     int a, b;
//     cout << "Please enter the number: " << endl;
//     cin >> a >> b;
//     swap(a, b);
//     return 0;
// }

// //Reverse an array
// #include<iostream>
// using namespace std;

// int main () {
//     int size;
//     cin >> size;
//     int a[100]; 
//     for(int i = 0; i < size; i++){
//         cin >> a[i] ;
//     }
//     // reverse an array 
//     for(int i = size - 1; i >=0; i--){
//         cout << a[i] <<" ";
//     }

//     return 0;
// }

// //Leetcode qs input: [2,4,4]
// // output: 2 (print vo kro jo ek hi element ho)
// #include<iostream>
// using namespace std;

// void leetcode(int arr[], int size){
//     int ans = 0;
//     for(int i = 0; i < size; i++){
//         ans = ans ^ arr[i];
//     }
//     cout << ans;
// }

// int main () {
//     int arr[100];
//     int size;
//     cout << "please enter size: " << endl;
//     cin >> size;
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }
//     leetcode(arr,size);
//     return 0;
// }

// //76.Sorting array's using bubble sort method 
// #include<iostream>
// using namespace std;

// void sortarrays(int arr[], int size){
//     for(int i = 0; i < size - 1; i++){
//         for(int j = 0; j < size - i - 1; j++){
//             if(arr[j] >= arr[j + 1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     cout << "After Sorting Zero's and One's: " << endl;
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " " ;
//     }
// }

// int main () {
//     int size;
//     cout << "please enter the size of elements: " << endl;
//     cin >> size;
//     int arr[1000];
//     for(int i = 0; i < size; i++){
//         cout << "Please enter the number at index: " << i << endl;
//         cin >> arr[i];
//     }
//     sortarrays(arr, size);
//     return 0;
// }

// // 77.sorting of 0's and 1's with time complexity is O(n)

// #include<iostream>
// using namespace std;

// void sortZeroOne(int a[], int size){
//     int zerocount = 0;
//     int onecount = 0;

//     // count 0 and 1's
//     for(int i = 0; i < size; i++){
//         if(a[i] == 0){
//             zerocount++;
//         }
//         else if(a[i] == 1){
//             onecount++;
//         }
//     }

//     int i = 0;
//     for(;i < zerocount; i++){
//         a[i] = 0;
//     }
//     for(;i < size; i++){
//         a[i] = 1;
//     }
// }

// int main(){
//     int size;
//     cout << "Please enter the size: ";
//     cin >> size;
//     int a[1000];
//     for(int i = 0; i < size; i++){
//         cout << "Please enter the digit at index: " << i << endl;
//         cin >> a[i];
//     }
//     sortZeroOne(a, size);
//     for(int i = 0;i < size; i++){
//     cout << a[i] << " ";
//     }
//     return 0;
// }

// // sorting of 0's and 1's with time complexity is O(n) with fill function & in-built sort function 
// #include<iostream>
// #include<algorithm>
// using namespace std;

// void sortZeroOne(int a[], int size){
//     int zerocount = 0;
//     int onecount = 0;

//     // count 0 and 1's
//     for(int i = 0; i < size; i++){
//         if(a[i] == 0){
//             zerocount++;
//         }
//         else if(a[i] == 1){
//             onecount++;
//         }
//     }
//     fill(a, a+zerocount, 0);
//     fill(a + zerocount, a + size, 1);
// }

// int main(){
//     int size;
//     cout << "Please enter the size: ";
//     cin >> size;
//     int a[1000];
//     for(int i = 0; i < size; i++){
//         cout << "Please enter the digit at index: " << i << endl;
//         cin >> a[i];
//     }
//     // sortZeroOne(a, size);
//     sort(a, a + size); // it will sort the array in ascending order for this we include header file #include<algorithm>
//     cout << "after sorting: "<< endl;
//     for(int i = 0;i < size; i++){
//     cout << a[i] << " ";
//     }
//     return 0;
// }

// /*
// (10,10), (10,20), (10,30), (10,40), 
// (20,10), (20,20), (20,30), (20,40),      
// (30,10), (30,20), (30,30), (30,40),      
// (40,10), (40,20), (40,30), (40,40),      
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int a[] = {10, 20, 30, 40};
//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             cout << "(" << a[i] << ",";
//             cout << a[j] << "), ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// //78. check two sum pairs with target value.
// /*
// 40
// (10,30) (20,20) (30,10) 
// */
// #include<iostream>
// using namespace std;

// void checktwosum(int a[], int size, int target){
//     for(int i = 0; i < size; i++){
//         for(int j = 0; j < size; j++){
//             if(a[i] + a[j] == target){
//                 cout << "(" << a[i] << "," << a[j] << ") ";
//             }
//         }
//     }
// }

// int main() {
//     int target, size;
//     int a[100];
//     cout << "Please enter size of an array: ";
//     cin >> size;
//     cout << "Please enter elements of an array: ";
//     for(int i = 0; i < size; i++){
//         cin >> a[i];
//     } 
//     cout << endl;
//     cout << "Enter target value: ";// check target value include in pairs;
//     cin >> target;
//     checktwosum(a, size,target);
//     return 0;
// }

// // 79.pair example :-- how function returns elements in pairs 
// #include<iostream>
// using namespace std;

// // pair<int,int> checktwosum(int a[], int size, int target){
//     pair<int,int>ans = make_pair(-1,-1);
//     //for(int i = 0; i < size; i++){
//         for(int j = 0; j < size; j++){
//             if(a[i] + a[j] == target){
//                 ans.first = a[i];
//                 ans.second = a[j];
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     int target, size;
//     int a[100];
//     cout << "Please enter size of an array: ";
//     cin >> size;
//     cout << "Please enter elements of an array: ";
//     for(int i = 0; i < size; i++){
//         cin >> a[i];
//     } 
//     cout << endl;
//     cout << "Enter target value: ";// check target value include in pairs;
//     // cin >> target;
//     // pair<int,int>ans = checktwosum(a, size,target);
//     // if(ans.first == -1 && ans.second == -1){
//     //     cout << "Pair not found"<< endl;
//     // }
//     else{
//         cout << "Pair found: " << ans.first << ", " << ans.second ;
//     }
//     return 0;
// }

// // 80.wap to print triplet pairs
// #include<iostream>
// using namespace std;

// void triplet(int arr[], int size){
//     int count = 0;
//     for(int i = 0;i < size; i++){
//         for(int j = 0; j < size; j++){
//             for(int k = 0; k < size; k++){
//                 cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
//                 count++;
//             }
//         }
//         cout << endl;
//     } 
//     cout << "total triplet pairs: " << count << endl;
// }

// int main () {
//     int arr[] = {10,20,30,40};
//     int size = 4;
//     triplet(arr, size);
//     return 0;
// }

// // 81.wap to print three sum pairs with non-repeated digits
// #include<iostream>
// using namespace std;

// void triplet(int a[], int size, int target){
//     int count = 0;
//     for(int i = 0;i < size; i++){
//         for(int j = i + 1; j < size; j++){
//             for(int k = j + 1; k < size; k++){
//                 if(a[i] + a[j] + a[k] == target){
//                 cout << a[i] << ", " << a[j] << ", " << a[k] << endl;
//                 count++;
//             }
//         }
//         }
//         cout << endl;
//     } 
//     cout << "total triplet pairs: " << count << endl;
// }

// int main () {
//     int a[] = {10,20,30,40};
//     int size = 4;
//     triplet(a, size,80);
//     return 0;
// }

// // 82.wap to shift an array by n shift
// #include<iostream>
// using namespace std;

// void rotateArray(int arr[], int size, int shift){
//     int finalshift = shift % size;

//     if(finalshift == 0){
//         // no need to do anything
//         return ;
//     }
        
//     //Step1: copy last finalshift elements into a temp array
//     int temp[10000];
//     int index = 0;
//     for(int i = size - finalshift; i < size; i++){
//         temp[index] = arr[i]; 
//         index++;
//     }
//     //step2: shift array elements by finalshift places
//     for(int i = size - 1; i >= 0; i--){
//         arr[i] = arr[i - finalshift];
//     }

//     //step 3: copy temp elements into original array
//     for(int i = 0; i < finalshift; i++){
//         arr[i] = temp[i];
//     }

// }

// // vectors for C++;
// #include <iostream>
// #include <vector>

// using namespace std;

// void print(vector<int> v) {
//   cout << "Printing vector " << endl;
//   int size = v.size();
//   for (int i = 0; i < size; i++) {
//     cout << v[i] << " ";
//     // cout << v.at(i) << " ";
//   }
//   cout << endl;
// }

// void print2(vector<int> v) {
//   cout << "Printing vector method 2" << endl;
//   for(auto it:v){
// 	  cout<<it<<" ";
//   }
//   cout << endl;
// }

// int main() {
// 	vector<int>v;
// 	v.push_back(10);
// 	v.push_back(20);
// 	v.push_back(30);
// 	v.push_back(40);
// 	print(v);
// 	print2(v);
//  //  vector<char> v;
//  //  v.push_back('a');

//  //  v.push_back('b');
// 	// v.push_back('c');

//  //  v.push_back('d');

//   // cout << "Front element: " << v[0] << endl;
//   // cout << "Front element: " << v.front() << endl;
//   // cout << "End Element: " << v[v.size() - 1] << endl;
//   // cout << "End Element: " << v.back() << endl;

//   // // vector initialization
//   // vector<int>arr; // default with no data, 0 size
//   // vector<int>arr2(5, -1); // init with n size with specific data
//   // // arr2.push_back(50);
//   // // print(arr2);

//   // vector<int>arr3 = {1,2,3,4,5};
//   // // arr3.pop_back();
//   // // print(arr3);

//   // vector<int>arr4{1,2,3,4,5};
//   // // print(arr4);

//   // // how to copy vector
//   // vector<int> arr5 = {1,2,3,4,5};
//   // vector<int>arr6(arr5);
//   // print(arr6);

//   //  // in vector, dont tell size of vector.
//   //  // just keep inserting, i will manage the allocations.
//   //  vector<int> v; // array hi hai.

//   //  // insert
//   //  int n;
//   //  cin >> n;
//   //  for (int i = 0; i < n; ++i) {
//   //    int d;
//   //    cin >> d;
//   //    v.push_back(d);
//   //  }
//   //  print(v);

//   // // I want to clear the vector
//   // v.clear();
//   // v.push_back(50);
//   //  print(v);

//   // // pop
//   // v.pop_back();
//   //   print(v);
// }

// #include<iostream>
// using namespace std;


// bool search2DArray(int arr[][4], int rowSize, int colSize, int target) {

//     for(int i=0; i<rowSize; i++) {
//         for(int j=0; j<colSize; j++) {

//             if(arr[i][j] == target) {
//                 return true;
//             }

//         }
//     }
//     //agar line 13 tak pohoch gye
//     //iska matlab dono loop traverse kar chuke ho
//     //iska matlab entire array traverse kr chuke ho
//     //iska matlab entire array me target nahi mila
//     //iska matlab target not found
//     //iska matlab return false
//     return false;
// }

// int findMinimumIn2DArray(int arr[][4], int rowSize, int colSize) {

//     int minValue = INT_MAX;

//     for(int i=0; i<rowSize; i++) {
//         for(int j=0; j<colSize; j++) {
//             minValue = min(arr[i][j], minValue);
//         }
//     }
    
//     return minValue;

// }

// int findMaximumIn2DArray(int arr[][4], int rowSize, int colSize) {

//     int maxAns = INT_MIN;

//     for(int i=0; i<rowSize; i++) {
//         for(int j=0; j<colSize; j++) {
//             maxAns = max(arr[i][j], maxAns);
//         }
//     }
//     //overall T.C -> O(rowSize*colSize)
//     //overall S.c-> O(1) space

//     return maxAns;

// }

// void printRowSum(int arr[][4], int rowSize, int colSize) {

//     for(int i=0; i<rowSize; i++) {
//         int sum = 0;
//         //hr row k liye sum starting me 0 hai
//         for(int j=0; j<colSize; j++) {
//             sum = sum + arr[i][j];
//         }
//         //jab saare column k element add krliye hai
//         //toh fer print krdo
//         cout << sum << endl;
//     }
    
// }

// void printColumnSum(int arr[][4], int rowSize, int colSize) {

//     for(int col=0; col<colSize; col++) {
//         //hr column k liye mere pass sum = 0 hona chahiye 
//         int sum = 0;
//         for(int row=0; row<rowSize; row++) {
//             sum = sum + arr[row][col];
//         }
//         cout << sum << endl;
//     }

// }

// void printDiagnolSum(int arr[][3], int rowSize, int colSize) {

//     int sum = 0;
    
//     for(int i=0; i<rowSize; i++) {
//         sum = sum + arr[i][i];
//     }
    
//     cout << "Sum: " << sum << endl;



//     // int sum = 0;
//     // for(int i=0; i<rowSize; i++) {
//     //     for(int j=0; j<colSize; j++) {
//     //         if(i == j) {
//     //             sum = sum + arr[i][j];
//     //         }
//     +
//     //     }
//     // }
//     // cout << "sum " << sum <<endl;
// }

// void transposeMatrix(int arr[][3], int rowSize, int colSize) {

//     //same array me hi transpose karo
//     for(int i=0; i<rowSize; i++) {
//         for(int j=i; j<colSize; j++) {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }

//     //printing
//     cout << "printint the transpose" << endl;
//     for(int i=0; i<rowSize; i++) {
//         for(int j=0; j<colSize; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }


//     // int ans[100][100] = {0};

//     // for(int i=0; i<rowSize; i++) {
//     //     for(int j=0; j<colSize; j++) {
//     //         ans[i][j] = arr[j][i];
//     //     }
//     // }

    
//     // for(int i=0; i<rowSize; i++) {
//     //     for(int j=0; j<colSize; j++) {
//     //         cout << ans[i][j] << " ";
//     //     }cout << endl;
//     // }


// }


// int main() {

//     int arr[3][3] = {
//                     {10,11,12},
//                     {20,21,22},
//                     {30,31,32}
//                     };
//     int rowSize = 3;
//     int colSize = 3;

//     transposeMatrix(arr,rowSize, colSize);

//     //printDiagnolSum(arr,rowSize,colSize);
    
    
//     //printColumnSum(arr,rowSize,colSize);

    

//     //printRowSum(arr,rowSize,colSize);


//     // int maxAns = findMaximumIn2DArray(arr,rowSize,colSize);
//     // cout << "max num: " << maxAns << endl;


//     // int ans = findMinimumIn2DArray(arr,rowSize,colSize);
//     // cout << ans << endl;




//     //int target = 404;

//     // bool ans = search2DArray(arr,rowSize,colSize,target);

//     // cout << "ans is: " << ans << endl;











//     //declaring 2D array
//     //int arr[4][3];

//     //initialise
//     // int arr[3][3] = {
//     //                 {10,20,100},
//     //                 {30,40,200},
//     //                 {50,60,300}
//     //                 };
//     // int rowSize=3;
//     // int colSize=3;

//     //diagnol matrix -> square matrix
//     // for(int i=0; i<rowSize; i++) {
//     //     cout << arr[i][i] << " ";
//     // }

//     // for(int r=0; r<rowSize; r++) {
//     //     for(int c=0; c<colSize; c++) {
//     //         if(r == c) {
//     //             cout << arr[r][c] <<  " ";
//     //         }
//     //     }
//     //     cout << endl;
//     // }

//     ///int arr[3][2] = {10,20,30,40,50,60};
//     // int arr[3][2] = {10,20};

//     //cout << arr[2][1] << endl;

//     //traverse the entire array


//     //row-wise
//     // for(int rowIndex = 0; rowIndex<rowSize; rowIndex++) {
//     //     for(int colIndex=0; colIndex<colSize; colIndex++) {
//     //         cout << arr[rowIndex][colIndex] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     //column wise
//     // for(int col=0; col<colSize; col++) {
//     //     for(int row=0; row<rowSize; row++) {
//     //         cout << arr[row][col] << " ";
//     //     }
//     //     cout << endl;
//     // } 


//     //square-matrix
//     // for(int r=0; r<rowSize; r++) {
//     //     for(int c=0; c<colSize; c++) {
//     //         cout << "Printing " << c << ", " << r << endl;
//     //         cout << arr[c][r] << " ";
//     //     }
//     //     cout << endl;
//     // }


//     // int arr[2][3];
//     // int rowSize = 2;
//     // int colSize = 3;

//     // //taking input -> row-wise
//     // for(int i=0; i<rowSize; i++) {
//     //     for(int j=0; j<colSize; j++) {
//     //         cout << "Enter the value for (" << i << ", " <<j << ") : ";
//     //         cin >> arr[i][j];
//     //     }
//     // }

//     // cout << "Printing 2D array: " << endl;
//     // //row-wise
//     // for(int rowIndex = 0; rowIndex<rowSize; rowIndex++) {
//     //     for(int colIndex=0; colIndex<colSize; colIndex++) {
//     //         cout << arr[rowIndex][colIndex] << " ";
//     //     }
//     //     cout << endl;
//     // }




//     return 0;
// }

// // vectors in 2D array
// #include <iostream>
// #include<vector>
// using namespace std;

// bool search2DArray(vector<vector<int> > arr, int target){
//   int rowSize = arr.size();
//   int colSize = arr[0].size();

//   for(int i=0; i<rowSize; i++) {
//     for(int j=0; j<colSize; j++) {

//       if(arr[i][j] == target ){
//         return true;
//       }

//     }
//   }
//   return false;
// }

// int main() {
//   vector<vector<int>> arr(4, vector<int>(3,0));
//   int rowSize = arr.size();
//   int colSize = arr[0].size();
  
//   for(int i=0; i<rowSize; i++) {
//     for(int j=0; j<colSize; j++) {
//       cin >> arr[i][j];
//     }
//   }

//   int target = 40;

//   bool ans = search2DArray(arr,target);
//   cout << "ans: " << ans << endl;


//   return 0;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[1000]; // for arrays 
//     for(int i=0; i<n ; i++){
//         cin >> arr[i];
//     }
//     // int target;
//     // cin >> target;

//    // cout << tripletSumToX(arr, n, target);
//     sort0sand1s(arr, n);
//     for(int i = 0; i < n ; i++){
//         cout << arr[i] << " " ;
//     }
//     return 0;
// }
// // 84. Two sum two pointer approach
// #include <iostream>
// #include <algorithm>
// using namespace std;

// bool twoSum2pointerapproach(int arr[], int n, int target) {
//     int l = 0;
//     int h = n - 1;

//     while (l < h) {
//         int csum = arr[l] + arr[h];
//         if (csum == target) return true;
//         else if (csum > target) h--;
//         else l++;
//     }
//     return false;
// }

// bool hasArrayTwoCandidates(int arr[], int n, int target) {
//     sort(arr, arr + n);
//     return twoSum2pointerapproach(arr, n, target);
// }

// int main() {
//     int arr[] = {1, 4, 45, 6, 10, -8};
//     int n = sizeof(arr);
//     int target = 16;

//     if (hasArrayTwoCandidates(arr, n, target))
//         cout << "Yes, pair exists" << endl;
//     else
//         cout << "No, pair does not exist" << endl;

//     return 0;
// }


// // 85.find pivot index with time_complexity is O(n * n) = O(n ^ 2);
// #include<iostream>
// using namespace std;

// void pivotindex(int arr[], int n){
//     for(int index = 1; index < n - 1; index++){  // check from 0 to n-1
//         int lsum = 0, rsum = 0;

//         for(int i = 0; i < index; i++){
//             lsum += arr[i];
//         }

//         for(int i = index + 1; i < n; i++){
//             rsum += arr[i];
//         }

//         if(lsum == rsum){
//             cout << "Pivot index is: " << index << endl;
//             return;
//         }
//     }
//             cout << "Not found" << endl;
// }

// int main () {
//     int n;
//     cout << "Please enter size: ";
//     cin >> n;
//     int arr[1000];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     pivotindex(arr, n);
//     return 0;
// }

// // find pivot index with time_complexity is O(n)
// #include<iostream>
// using namespace std;

// void pivotindex(int arr[], int n){
//     int lsum[n] = {0}, rsum[n] = {0};
//     // cal. lsum array
//     for(int i = 1; i < n; i++)
//         lsum[i] = lsum[i - 1] + arr[i - 1];
    
//     // cal.rsum array
//     for(int i = n - 2; i > 0; --i){
//         rsum[i] = rsum[i + 1] + arr[i + 1];
//     }
//     // check krte h
//     for(int i = 0; i < n; i++){
//         if(lsum[i] == rsum[i]) 
//             cout << "yes index is: " << i;
//     }
//     return;
// }

// int main () {
//     int n;
//     cout << "Please enter size: ";
//     cin >> n;
//     int arr[1000];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     pivotindex(arr, n);
//     return 0;
// }

// // 86.find missing number time complexity is O(n logn)
// #include<iostream>
// using namespace std;

// void missingnumber(int arr[], int n){
//     // check
//     for(int i = 0; i <= n; i++){
//         if(arr[i] != i){
//             cout << "Missing number is: " << i;
//             return;
//         }
//     }
//     cout << "No number is missing.";
// }


// int main(){
//     int n, temp;
//     cout << "Please enter size: ";
//     cin >> n;
//     int arr[10000];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0; i < n - 1; i++){
//         for(int j = 0; j < n - i - 1; j++){

//             if(arr[j] > arr[j + 1]){
//                 temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     missingnumber(arr, n);
//     return 0;
// }

// // find missing number with time complexity is O(n) 
// #include<iostream>
// using namespace std;

// int missingnumber(int arr[], int n){
//     int ans = 0;
//     for(int i = 0; i < n; i++){
//         ans ^=  arr[i];
//     }
//     for(int i = 0; i <= n; i++){
//         ans ^= i;
//     }
//     return ans;
// }


// int main(){
//     int n, temp;
//     cout << "Please enter size: ";
//     cin >> n;
//     int arr[10000];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     cout << "Missing number is: " << missingnumber(arr, n);
//     return 0;
// }

// //87.Brtueforce program for arrays .
// /*
// 6
// 1
// 12
// -5
// -6
// 50
// 3
// Please enter the value of K:        
// 4
// 12.75
// */
// #include<iostream>
// using namespace std;

// void bruteforce(int nums[], int size, int k){
//     int maxsum = INT8_MIN;
//     int i = 0, j = k - 1;
//     while(j < size){
//         int sum = 0;
//         for(int i = 0; i <= j; i++){
//             sum += nums[i];
//         }
//         maxsum = max(maxsum, sum);
//             ++i, ++j;
//     }
//     double maxavg = maxsum / (double)k;
//     cout << maxavg;
// }

// int main () {
//     int arr[1000];
//     int size;
//     cin >> size;
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }
//     int k;
//     cout << "Please enter the value of K: " << endl;
//     cin >> k;
//     bruteforce(arr, size, k);
//     return 0;
// }

// // another method

// #include<iostream>
// using namespace std;

// void slidingwindow(int nums[], int size, int k){
//     int i = 0, j = k - 1;
//     int sum = 0;
//     for(int i = 0; i <= j; i++){
//             sum += nums[i];
//         }
//     int maxsum = sum;
//     j++;
//     while(j < size){
//         sum -= nums[i++];
//         sum += nums[j++];
//         maxsum = max(maxsum, sum);
//         }
//     double maxavg = maxsum / (double)k;
//     cout << maxavg;
//     }

// int main () {
//     int arr[1000];
//     int size;
//     cin >> size;
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }
//     int k;
//     cout << "Please enter the value of K: " << endl;
//     cin >> k;
//     slidingwindow(arr, size, k);
//     return 0;
// }

// // 88.wap to remove duplicates from an array.
// #include<iostream>
// #include<algorithm>  // for sort
// using namespace std;

// int removeduplicates(int arr[], int size) {
//     if (size == 0) return 0;

//     int j = 0;

//     for (int i = 1; i < size; i++) {
//         if (arr[i] != arr[j]) {
//             j++;
//             arr[j] = arr[i];
//         }
//     }
//     return j + 1;
// }

// int main() {
//     int size;
//     cin >> size;
//     int arr[1000];

//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     sort(arr, arr + size);  // ✅ Sort the array before removing duplicates

//     int newSize = removeduplicates(arr, size);

//     for (int i = 0; i < newSize; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// // 89.Move all negative number to the left side of an array
// #include<iostream>
// using namespace std;

// void moveALLnegativetoleft(int *a,int n){
//     int l = 0, h = n - 1;
//     while(l < h){
//         if(a[l] < 0){
//             l++;
//         }
//         else if(a[h] > 0){
//             h--;
//         }
//         else {
//             swap(a[l], a[h]);
//         }
//     }
// }

// int main () {
//     int a[] = {1,2,-3,4,-5,6};
//     int n = sizeof(a)/sizeof(int);
//     moveALLnegativetoleft(a, n);

//     for(int i = 0; i < n; i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// //90. Wap to find the duplicate number with modifying an array.
// #include<iostream>
// #include<algorithm>
// using namespace std;

// void duplicate(int arr[], int size){
//     for(int i = i ; i  < size; i++){
//         if(arr[i] == arr[i + 1]){
//              cout << "Duplicate number is: " << arr[i];
//              break;
//         }
//     }
// }

// int main() {
//     int arr[1000];
//     int size;
//     cout << "Please enter the size of an array: ";
//     cin >> size;
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }
//     sort(arr, arr + size);
//     duplicate(arr, size);
//     return 0;
// }

// // OR

// //90. Wap to find the duplicate number also it modifying an array.
// #include<iostream>
// #include<algorithm>
// using namespace std;

// void duplicate(int arr[], int size){
//     for(int i = 0 ; i  < size; i++){
//         if(arr[i +1] == arr[i]){
//              cout << "Duplicate number is: " << arr[i];
//              break;
//         }
//     }
// }

// int main() {
//     int arr[1000];
//     int size;
//     cout << "Please enter the size of an array: ";
//     cin >> size;
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }
//     sort(arr, arr + size);
//     duplicate(arr, size);
//     return 0;
// }


// // method -- 02

// //90. Wap to find the duplicate number also it modifying an array.
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int duplicate(int arr[], int size){
//     int ans = -1;
//     for(int i = 0; i < size; i++){
//         int index = abs(arr[i]);
        
//         // already visited
        
//         if(arr[index] < 0){
//             ans = index;
//             break;
//         }
//         // mark negative
//         arr[index] *= -1;
//     }
//     return ans;
// }

// int main() {
//     int arr[1000];
//     int size;
//     cout << "Please enter the size of an array: ";
//     cin >> size;
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }
//     cout << "duplciate number is: " << duplicate(arr, size);
//     return 0;
// }

// // method -- 03

// //90. Wap to find the duplicate number also it modifying an array.
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int duplicate(int arr[], int size){
//     while(arr[0] != arr[arr[0]]){
//         swap(arr[0], arr[arr[0]]);
//     }
// }

// int main() {
//     int arr[1000];
//     int size;
//     cout << "Please enter the size of an array: ";
//     cin >> size;
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }
//     cout << "duplciate number is: " << duplicate(arr, size);
//     return 0;
// }

// //91.wap to find missing elements from an array with duplicates 

// // method - 01

// #include<iostream>
// using namespace std;

// void missing(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         int index = abs(arr[i]);
//         if(arr[index - 1] > 0){
//             arr[index - 1] *= -1;
//         }
//     }

//     for(int i = 0; i < n; i++){
//          if(arr[i] > 0){
//             cout << i + 1 << " ";
//         }
//     }
// }

// int main (){
//     int arr[] = {1,3,5,3,4};
//     // size of an array
//     int n = sizeof(arr)/sizeof(int);
//     missing(arr, n);
//     return 0;
// }

// // 92. find common elements in 3 sorted array 
// #include<iostream>
// #include<algorithm>
// using namespace std;

// void missing(int a[], int b[], int c[], int n1, int n2, int n3){
//     int i = 0, j = 0, k = 0;
//     while(i < n1 && j < n2 && k < n3){
//         if(a[i] == b[j] && b[j] == c[k] && c[k] == a[i]){
//             cout << a[i] << " ";
//             i++;
//             j++;
//             k++;
//         }
//         else if(a[i] < b[j]){
//             i++;
//         }
//         else if(b[j] < c[k]){
//             j++;
//         }
//         else{
//             k++;
//         }
//     }
// }

// int main (){
//     int a[] = {1,3,5,6,9};
//     // size of an array
//     int n1 = sizeof(a)/sizeof(int);
//     int b[] = {9, 3, 1, 3, 6, 8};
//     // size of an array
//     int n2 = sizeof(b)/sizeof(int);
//     int c[] = {5, 3, 9, 1, 3 ,7, 6};
//     // size of an array
//     int n3 = sizeof(c)/sizeof(int);
//     sort(a, a + n1);
//     sort(b, b + n2);
//     sort(c, c + n3);
//     missing(a, b, c, n1, n2, n3);
//     return 0;
// }

// // 93.wap to print wave of a matrix by using vector's.


// #include<iostream>                // preprocessor directory and header file included for our code
// #include<vector>                 // vector file must include for vector's
// using namespace std;            //  for our input and output standard

// void wavematrix(vector<vector<int>>v){
//     int rs = v.size();
//     int cs = v[0].size();

//     //outer loop depends upon column
//     for(int i = 0;i < cs ; i++){
//         if((i & 1) == 0){
//             // even columns
//             for(int j = 0; j < rs; j++){
//                 cout << v[j][i] << " ";
//             }
//         }
//         else{
//             // odd columns
//             for(int j = rs - 1; j >= 0; j--){
//                 cout << v[j][i] << " ";
//             }
//         }
//     }
// }

// int main(){
//     vector<vector<int>>v = {// vector declaration
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//     };
//     wavematrix(v);   // function call
//     return 0;
// }

//  //wap to print spiralmatrix
// #include<iostream>
// #include<vector>
// using namespace std;

// void spiralmatrix(vector<vector<int>>v){
//     // row size
//     int m = v.size();
//     // column size 
//     int n = v[0].size();
//     //initialisaton 
//     int total_elements = m * n;

//     int startingrow = 0;
//     int endingcol = n - 1;
//     int endingrow = m - 1;
//     int startingcol = 0;

//     int count = 0;
//     while (count < total_elements){    
//     //1. starting row
//     for(int i = startingcol ; i <= endingcol && count < total_elements; i++){
//         cout << v[startingrow][i] << " ";
//         count++;
//     }
//     startingrow++;
//     //2. ending column 
//     for(int j = startingrow; j <= endingrow && count < total_elements; j++){
//         cout << v[j][endingcol] << " ";
//         count++;
//     }
//     endingcol--;
//     //3.ending row
//     for(int i = endingrow; i >= startingcol && count < total_elements; i--){
//         cout << v[endingrow][i] <<  " ";
//         count++;
//     }
//     endingrow--;

//     //4.starting col
//     for(int i = endingrow; i >= startingrow && count < total_elements; i--){
//         cout << v[i][startingcol] << " ";
//         count++;
//     }
//     startingcol++;
// }
// }
// int main(){
//     vector<vector<int>>v {
//        {1,  2,   3, 4,   5,  6},
//        {7,  8,   9, 10, 11, 12},
//        {13, 14, 15, 16, 17, 18},
//        {19, 20, 21, 22, 23, 24},
//        {25, 26, 27, 28, 29, 30}
//     };
//     spiralmatrix(v);
//     return 0;
// }

// // In container's vector part cover up
// // C++ with STL :-- (contgainer's) -- 1.vector part 
// #include<iostream>
// using namespace std;
// #include<vector> // for using vector

// int main() {

//     // vector initialise with values 
//     vector <int> v = {10,20};


//     // vector initialise without values
//     vector<int> age; // creates a vector of size 10 with all elements initialized to 0
//     age.push_back(10); // adds an element to the end of the vector
//     age.push_back(20); // adds another element to the end of the vector     
//     age.push_back(30);

//     // Using begin() and end()
//     // for (auto it = v.begin(); it != v.end(); ++it) {
//     //     cout << *it << " ";
//     // }
//     // v.reserve(4);
//     // v.push_back(60);
    
//     // v.push_back(60);
    
//     // v.push_back(60);
//     // v.push_back(60);
//     // cout << v[5] << endl;
//     // size function used
//     // cout << age.size() << endl;// prints the size of the vector
    
//     // empty function used 
//     // if(age.empty()) {
//     //     cout << "Vector is empty" << endl; // checks if the vector is empty
//     // } else {
//     //     cout << "Vector is not empty" << endl;
//     // }

//     // Capacity function using
//     // cout << age.capacity() << " ";

//     // max_size function used
//     // cout << age.max_size() << endl;
//     // cout << v.max_size() << endl;

//     // front and back functions used
//     // cout << "Front element: " << v.front() << endl; // prints the first element of the vector
//     // cout << "Back element: " << v.back() << endl; // prints the last

//     // push_back or pop_back functions used
//     // v.push_back(30); // adds an element to the end of the vector    
//     // cout << "After push_back: ";
//     // for (auto it = v.begin(); it != v.end(); ++it) {                    
//     //     cout << *it << " "; // prints the elements of the vector after push_back    
//     // }
//     // v.pop_back();  // delete last element of a vector
//     // for (auto it = v.begin(); it != v.end(); ++it) {                    
//     //     cout << *it << " "; // prints the elements of the vector after push_back    
//     // }

//     // insert function used
//     // v.insert(v.begin(), 80); // inserts an element at the beginning of the vector
//     // cout << "After insert: ";  
//     //  for (auto it = v.begin(); it != v.end(); ++it) {                    
//     //     cout << *it << " "; // prints the elements of the vector after push_back    
//     // }            
    
//     // erase function used
//     // v.erase(v.begin(), v.end() - 1); 
//     // for (auto it = v.begin(); it != v.end(); ++it) {        
//     //     cout << *it << " "; // prints the elements of the vector after erase    
//     // }

//     // clear function used 
//     // v.clear(); // clears the vector, removing all elements
//     // cout << v.size() << endl; // prints the size of the vector after clearing it
//     //  for (auto it = v.begin(); it != v.end(); ++it) {        
//     //     cout << *it << " "; // prints the elements of the vector after erase    
//     // }

//     // swap function used 
//     cout << "Before Swap: " << "\n";
//     cout << "Age vector is : ";
//     for (auto it = age.begin(); it != age.end(); ++it) {    
//         cout << *it << " "; // prints the elements of the vector after erase    
//     }
//     cout << endl;
//     cout << "V vector is: ";
//     for (auto it = v.begin(); it != v.end(); ++it) {        
//         cout << *it << " "; // prints the elements of the vector after erase    
//     }
//     cout << endl;
//     swap(v, age); // swaps the contents of two vectors
//     cout << "After swap: "<< "\n";  
//     cout << "Age vector is : ";  
//     for (auto it = age.begin(); it != age.end(); ++it) {    
//         cout << *it << " "; // prints the elements of the vector after erase    
//     } 
//     cout << endl;
//     cout << "V vector is: ";
//       for (auto it = v.begin(); it != v.end(); ++it) {        
//         cout << *it << " "; // prints the elements of the vector after erase    
//     }
//     return 0;
// }

// // iterator in c++ with vector (how to traverse the 1D vector using iterator)
// // iterator.cpp// This file is part of a C++ project that demonstrates the use of iterators.
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     // declaring a 1D vector of integers
//     vector<int> first;
//     // adding elements to the vector
//     first.push_back(10);
//     first.push_back(20);        
//     first.push_back(30);
//     first.push_back(40);
    
//     // using an iterator to traverse the vector
//     vector<int>::iterator it = first.begin();
//     cout << "Using iterator to traverse the vector: ";
//     while(it != first.end()) {      
//         cout << *it << " "; // dereferencing the iterator to get the value  
//         it++; // moving to the next element
// }
// return 0;
// }

// // 2D vector or 2D array
// #include <iostream>
// #include <vector>   
// using namespace std;

// int main () {
//     vector<vector<int>> arr(4, vector<int>(5, 0));
//     // Initializing a 2D vector with 4 rows and 5 columns, all elements set to 0
//     // row and column size
//     int rowSize = arr.size();
//     int colSize = arr[0].size();
    
//     for(int i = 0; i < rowSize; i++) {
//         for(int j = 0; j < colSize; j++) {
//             cout << arr[i][j] << " "; // output elements of 2D vector
//         }
//         cout << "\n" ;
//     }   
//     return 0;
// }

// // jagged array example using vector

// #include<iostream>
// #include<vector> // header file for vector
// using namespace std;    

// int main() {
//     // declaring a 2D vector having 5 rows and each row having a different number of columns
//     vector<vector<int>> jaggedArray(5); // 2d array with 5 rows
//     // first row having 4 columns
//     jaggedArray[0] = vector<int>(4, 0); // 4 columns initialized to 0
//     // second row having 2 columns  
//     jaggedArray[1] = vector<int>(2, 0); // 5 columns initialized to 0
//     // third row having 5 columns
//     jaggedArray[2] = vector<int> (5, 0);
//     // 4th row having 3 columns 
//     jaggedArray[3] = vector<int>(3, 0);
//     // 5th row having 1 column  
//     jaggedArray[4] = vector<int> (1, 0);
//     cout << "Jagged Array: \n";
//     for(int i = 0; i < jaggedArray.size(); i++){
//         for(int j = 0; j < jaggedArray[i].size(); j++){
//             cout << jaggedArray[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// /*
// Jagged Array: 
// 0 0 0 0 
// 0 0 
// 0 0 0 0 0 
// 0 0 0 
// 0 
// */

// // list 
// // member function of list(container's)
// #include<iostream>
// #include<list>
// #include<queue>
// #include<stack>
// using namespace std;

// int main() {
//     list<int> l;
//     l.push_back(1);
//     // 1 
//     l.push_back(2);
//     // 1 --> 2
//     l.push_back(3);
//     // 1 --> 2 --> 3
//     l.push_back(4);
//     // 1 --> 2 --> 3 --> 4
//     l.push_back(5);
//     // 1 --> 2 --> 3 --> 4 --> 5

//     // begin() and end() are member functions of list
//     cout << endl;
//     // for traverse the list we use iterator
//     list<int>::iterator it = l.begin();
//     while(it != l.end()){
//         cout << *it << " ";
//         it++;
//     }

//     // size function 
//     cout << l.size() << endl; // 5

//     // empty function
//     cout << l.empty() << endl; // 0 (false)

//     // front function
//     cout << l.front() << endl; // 1 

//     // back function
//     cout << l.back() << endl; // 5

//     // pop_front function
//     l.pop_front();  // 2 --> 3 --> 4 --> 5
//     cout << l.front() << endl; // 2     

//     // pop_back function
//     l.pop_back(); // 2 --> 3 --> 4          
//     cout << l.back() << endl; // 4
 
//     // push_back function
//     l.push_back(6); // 2 --> 3 --> 4 --> 6      

//     // push_front function  
//     l.push_front(1); // 1 --> 2 --> 3 --> 4 --> 6       

//     // insert function
//     l.insert(2, 10); // 1 --> 2 --> 10 --> 3 --> 4 --> 6    

//     // erase function 
//     l.erase(l.begin()); // 2 --> 10 --> 3 --> 4 --> 6

//     list<int> l2;
//     l2.push_back(7);
//     l2.push_back(8);    
    
//     // swap function
//     l.swap(l2); // l now contains 7, 8 and l2 contains

//     cout << l.front() << endl; // 7
//     cout << l.back() << endl; // 8

//     // remove function
//     l.remove(7); // removes all occurrences of 7 from the list
//     cout << l.front() << endl; // 8
//     // clear function
//    // l.clear(); // list is now empty

//     return 0;

//     // queue declaration
//     queue<int> q;
//     // same functionality in it's member function
    
//     stack<int> st;
// } 

// // dequeue 
// #include<iostream>
// #include<queue>
// using namespace std;

// int main () {
//     // create or declare a queue
//     deque<int> dq;
 
//     // functionality of member function is same as previous container's

//     // here iterator is used 
// }

// // priority queue 
// #include<iostream>
// #include<queue>
// using namespace std;

// int main() {
//     // create or declaration a priority queue
//     priority_queue<int> pq;
//     // it automatic obey's max heap(maximum value ko priority p rkhega means sbse aange)
//     // Same functionality of it's member function as preivous container's
//     // min-heap
//     priority_queue<int,vector<int>,greater<int>> pq1;
//     // it stores value in increasing order it gives priority to the min value first 

// }

// // map 
// #include<iostream>
// #include<map>  // header file for map 
// #include<unordered_map> // header file for unordered_map
// using namespace std;

// int main () {

//     // another map
//     map<int, string> table; // map with int as key and string as value
    
//     table[3] = "three";
//     table.insert(make_pair(4, "four"));

//     table.insert(make_pair(1, "one"));
//     table.insert(make_pair(2, "two"));
    
//     map<int,string>::iterator it = table.begin(); // pointing to first element of map 
//     while(it != table.end()) {
//        // cout << it->first << " : " << it->second << endl; // accessing key and value
//        pair<int,string> temp = *it; // dereferencing the iterator to get the pair
//        cout << temp.first << " : " << temp.second << endl; // accessing key and value
//         it++;
//     }


//     // creation 
//     // map<string,string> table;
//     // key & value both are strings type 

//     // insert function 
//     // insertion way's
//     // pair<string,string> p;
//     // p.first = "br";
//     // p.second = "brazil";
//     // table.insert(p); // 
//     // table["in"] = "India";
//     // // using insert
//     // table.insert(make_pair("en", "england"));

    

//     // begin and end
//    // map<string,string>::iterator it = table.begin(); // pointing to first element of map 
//    // while(it != table.end()) {
//        // cout << it->first << " : " << it->second << endl; // accessing key and value
//     //   pair<string,string> temp = *it; // dereferencing the iterator to get the pair
//      //  cout << temp.first << " : " << temp.second << endl; // accessing key and
//       //  it++;
//     //}

//     // empty function
//     // if(table.empty() == true){
//     //     cout << "Table is empty." << endl;
//     // }
//     // else {
//     //     cout << "table is not empty." << endl;
//     // }

//     // size() 
//     //cout << table.size() << endl;

//     // using .at
//     //cout << table.at("in") << endl; // accessing value using key
//     //table.at("in") = "india2"; // updating value using key
//    // table["in"] = "India3";      // modify value 
//    // cout << table.at("in") << endl; // accessing updated value

//    // erase function
//     // table.erase(table.begin(), table.end());
//     // cout << table.size() << endl;

//     // find function
//     // table.find("in"); // returns an iterator to the element with key "en"
//     // if(table.find("in") != table.end()) {
//     //     cout << "Key 'in' found in the map." << endl;
//     // } else {
//     //     cout << "Key 'in' not found in the map." << endl;
//     // }

//     //count function
//     if(table.count("in") > 0) { 
//         cout << "Key 'in' exists in the map." << endl;
//     } else {
//         cout << "Key 'in' does not exist in the map." << endl;
//     }

// }

// // set container's
// #include<iostream>
// #include<set>
// #include<unordered_set> // for unordered set 
// using namespace std;

// int main() {
//     // create or declare a set
//     // ordered set
//     //set<int> st;

//     // unordered set
//     unordered_set<int> st;
    
//     // insert function
//     // insert elements into the set
//     st.insert(10);
//     st.insert(15);
//     st.insert(20);
//     st.insert(2);
//     st.insert(5);

//     // begin and end member of function of set
//     // traverse the set container using iterator
//     unordered_set<int>::iterator it = st.begin();
//     while(it != st.end()){
//         cout << *it << " ";
//         // returns output in sorted order
//         it++;    }

//     // cout << endl;

//     // empty function
//     // cout << st.empty() << endl; // 0 (false) if set is not empty, 1 (true) if set is empty

//     // size function
//     // cout << st.size() << endl;
    
//     // erase function 
//     // st.erase(15); // particular element is erased
//     // set<int>::iterator it = st.begin();
//     // while(it != st.end()){
//     //     cout << *it << " ";
//     //     // returns output in sorted order
//     //     it++;    }

//     // clear function
//     // st.clear();
//     // cout << st.size() << endl;

//     // find function
//     if(st.find(10) != st.end()){
//         cout << "\nElement found" << endl;
//     } else {
//         cout << "Element not found" << endl;
//     }
    
//     // count function
//     if(st.count(155) == 1){
//         cout << "Element found" << endl;
//     } else {
//         cout << "Element not found" << endl;
//     }
// }

// // map 
// #include<iostream>
// #include<map>  // header file for map 
// #include<unordered_map> // header file for unordered_map
// using namespace std;

// int main () {

//     // another map
//     map<int, string> table; // map with int as key and string as value
    
//     table[3] = "three";
//     table.insert(make_pair(4, "four"));

//     table.insert(make_pair(1, "one"));
//     table.insert(make_pair(2, "two"));
//     map<int,string>::iterator it = table.begin(); // pointing to first element of map 
//     while(it != table.end()) {
//        // cout << it->first << " : " << it->second << endl; // accessing key and value
//        pair<int,string> temp = *it; // dereferencing the iterator to get the pair
//        cout << temp.first << " : " << temp.second << endl; // accessing key and value
//         it++;
//         }

//     // find function
//     if(table.find(2) != table.end()) {
//         cout << "Key 2 found in the map." << endl;      
//     } else {
//         cout << "Key 2 not found in the map." << endl;  
//          //count function
//     if(table.count(1) > 0) { 
//         cout << "Key 1 exists in the map." << endl;
//     } else {
//         cout << "Key 1 does not exist in the map." << endl;
//     }
// }
// }

// // Algorithms 
// // Algorithms in STL
// // Iterator's and iterating algorithms
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void printdouble(int x) {
//     cout <<  x * 2 << " ";
// }

// bool checkeven(int x) {
//     return x % 2 == 0;
// }
// int main () {
//     // Iterator's and Iterating Algorithms
    
//     // using vector bcz we need dynamic array
//     vector<int> v;
//     v.push_back(10);
//     v.push_back(15);    
//     v.push_back(20);
//     v.push_back(27);
//     v.push_back(32);
//     v.push_back(33);

//     // for_each loop to print vector elements by double  
//     //for_each(v.begin(), v.end(), printdouble);

//     // find_if algorithm to find an element in vector
//    // auto it = find_if(v.begin(), v.end(), checkeven);
//     // cout << *it << endl;  // sbse pehle element jo conatiner me hoga vo return hoga 

//     // count algorithm to count even numbers in vector      
//     //int target = 20;
//    //cout << count(v.begin(), v.end(), target) << endl;

//    // count_if algorithm to count even numbers in vector
// //    count_if(v.begin(), v.end(), checkeven);
// //    cout << count_if(v.begin(), v.end(), checkeven) << endl;

//     // sort algorithm to sort the vector
//    sort(v.begin(), v.end()); // sort the vector in ascending order
//    // cout << "After sorting: ";
//     // for(auto it:v) {
//     //     cout << it << " ";
//     // }
//     // cout << endl;

//     // reverse algorithm to reverse the vector
//     // reverse(v.begin(), v.end());
//     // for(auto it: v){
//     //    // cout << it << " ";
//     // }

//     // rotate algorithm to rotate the vector
//     // rotate(v.begin(), v.begin() + 5, v.end());
//     // for(auto it: v){
//     //     cout << it << " ";
//     // }

//     // unique algorithm to remove
//     // auto it = unique(v.begin(), v.end());
//     // v.erase(it, v.end()); // remove duplicates
//     // cout << "After removing duplicates: ";
//     // for(auto it: v){
//     //     cout << it << " ";
//     // }

//     // partition algorithm to partition the vector
//     auto it = partition(v.begin(), v.end(), checkeven);
//     for(auto a: v) {
//         cout << a << " ";
//     }
// }

// // Algorithms in STL
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// // void printdouble(int x) {
// //     cout <<  x * 2 << " ";
// // }

// int checkeven(int x) {
//     return x % 2 == 0;
// }

// int main () {
//     // Iterator's and Iterating Algorithms
    
//     // using vector bcz we need dynamic array
//     vector<int> v = {1,2,3,4,5,6};

//     // for_each loop to print vector elements by double  
//     //for_each(v.begin(), v.end(), printdouble);

//     // find algorithm to find an element in vector  
//     //[] int target = 3;
//     // auto it = find(v.begin(), v.end(), target);
//     // cout << *it << endl;  // sbse pehle element jo conatiner me hoga vo return hoga
    
//     // find_if algorithm to find an element in vector
//    //auto it = find_if(v.begin(), v.end(), checkeven);
//     //cout << *it << endl;  // sbse pehle element jo conatiner me hoga vo return hoga 

//     // count algorithm to count even numbers in vector      
//     //int target = 20;
//    //cout << count(v.begin(), v.end(), target) << endl;

//    // count_if algorithm to count even numbers in vector
//     // int ans = count_if(v.begin(), v.end(), checkeven);
//     // cout << ans << endl;

//     // sort algorithm to sort the vector
//   // sort(v.begin(), v.end()); // sort the vector in ascending order
//    // cout << "After sorting: ";
//     // for(auto it:v) {
//     //     cout << it << " ";
//     // }
//     // cout << endl;

//     // reverse algorithm to reverse the vector
//     // reverse(v.begin(), v.end());
//     // for(auto it: v){
//     //    // cout << it << " ";
//     // }

//     // rotate algorithm to rotate the vector
//     // rotate(v.begin(), v.begin() + 2, v.end()); // left shift by 5 elements
//     // rotate(v.begin(), v.end() - 2, v.end());  // right shift by 2 elements

//     // for(auto it: v){
//     //     cout << it << " ";
//     // }

//     // unique algorithm to remove
//     // auto it = unique(v.begin(), v.end());
//     // v.erase(it, v.end()); // remove duplicates
//     // cout << "After removing duplicates: ";
//     // for(auto it: v){
//     //     cout << it << " ";
//     // }

//    // partition algorithm to partition the vector
//     partition(v.begin(), v.end(), checkeven);
//     for(auto a: v) {
//         cout << a << " ";
//     }
// }

// // iterator.cpp
// #include<iostream>
// #include<vector>
// #include<forward_list>
// using namespace std;

// int main () {
//     // create vector 
//     //vector<int> v = {1,2,3};

//     // create iterator for traversing the vector
//     // vector<int>:: iterator it = v.begin();
//     // while(it != v.end()){
//     //     cout << *it << " ";
//     //     it++;
//     // }
//     // cout << endl;

//     // types of iterator's
//     // 3. forward iterator
//     forward_list<int> list;
//     list.push_front(10);
//     list.push_front(20);     
//     list.push_front(30);

//     // traverse the singly linked list using forward iterator
//     forward_list<int>:: iterator it = list.begin();
//     while(it != list.end()){
//         // write the iterator value
//         (*it) = (*it) + 5; // increment each element by 5
//        // read the iterator value
//         cout << *it << " ";
//         it++;
//     }
//     // cout << "this not print anything." << endl;

//     //bidirectional iterator :-- in which we initialise the iterator be like list.begin() for forward iteration and list.end() - 1 for backward iterating 

//     // Random access iterator :-- used like list.begin() + 3 be like that

// }

// // for functor's firstly we need to study OOPS concepts 

#include<iostream>
using namespace std;

class functorOne {
    public:
        bool operator()(int a, int b) {
            ///descending order me cmp karna chahte ho
            // if  a>b -> true, a should be placed before b
            // that's why descending order banata h
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

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class comparator{
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {

    vector<int> arr;

    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(15);

    //ascending order
    sort(arr.begin(), arr.end(),comparator());

    //print
    for(int a: arr) {
        cout << a << " ";
    }
    cout << endl;



    return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
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
        if(a.marks == b.marks) {
            return a.name < b.name;
        }
        return a.marks > b.marks;
    }
};

int main() {
    vector<Student> arr;
    arr.push_back(Student(90,"Love"));
    arr.push_back(Student(90, "Laksay"));
    arr.push_back(Student(95,"Kunal"));

    sort(arr.begin(), arr.end(), comparator());

    for(Student a: arr) {
        cout << a.marks << " " << a.name << endl;
    }



    return 0;
}































































































// //// oops(objects + classes) week 8
// #include<iostream>
// #include<string>
// using namespace std;

// // class creation 
// class Student {
//     public:   // encapsulation

//     // Attributes
//     int id, age, nos;
//     string name;
//     int *gpa;


//     // ctor constructor
//      Student() {
//      cout << "Student default ctor called." << endl;
//      }
    
//     // parameterised constructor 
//     Student(int id, int age, int nos, string name, float gpa){
//         this->id = id;
//         this->age = age;
//         this->nos = nos;
//         this->name = name;
//         cout << "Student parameterised ctor called." << endl;
//         this->gpa = new int(gpa); // dynamic memory allocation for gpa
//     }

//     // copy constructor
//     Student(const Student &srcobj){
//         cout << "Student copy ctor called." << endl;
//         this->id = srcobj.id;
//         this->age = srcobj.age;
//         this->nos = srcobj.nos;
//         this->name = srcobj.name;
//     }

//     // behaviour /functions / methods
//     void study() {
//         cout << this->name << " Studying" << endl;
//     }   

//     void sleep() {
//         cout << this->name << " sleeping..." << endl;
//     }   

//     void bunk() {
//         cout << this->name << " bunking..." << endl;
//     }

//     // dtor destructor 
//     ~Student(){
//     cout << "Student default dtor called" << endl;
//     delete this->gpa; // deallocating the memory allocated for gpa
//     }
// };

// // object creation
// int main() {
//     // Student A;
//     // A.id = 1;
//     // A.age = 20;
//     // A.nos = 5;  
//     // A.name = "John";
//     // A.study();

//     // Student B;
//     // B.id = 1;
//     // B.age = 20;
//     // B.nos = 5;  
//     // B.name = "Doe";
//     // B.sleep();

//     // Another way to create an object
//     // Student A(1, 20, 5, "John");   // for this to work, we need to define a parameterised constructor
//     //Student B(2, 21, 6, "Doe");

//     // A.study();
//     // B.bunk();

//     // ctor copy
//    // Student C = A; // copy all the attributes of A to C
//     // Student C(A); // copy all the attributes of A to C
//     // cout << "C.id: " << C.id << endl; 

//     // C.name = "Cathy"; // changing the name of C
//     // C.study();

//     // Dynamic allocation or student pointer
//     Student *D = new Student(3,24,8,"Alice", 9.8);
//     cout << D->name << endl;
//     cout << D->id << endl;
//     cout << D->age << endl;
//     cout << D->nos << endl;
//     cout << *(D->gpa) << endl;
//     D->study(); // using arrow operator to access the method of the object
//     delete D; // Deallocating the memory allocated for D

//     return 0;
// }

// // // Implementing Encapsulation(binds data and methods) in C++
// // // oops = fundamental concepts of (object + classes)
// // #include<iostream>
// // #include<string> // header file for string class
// // using namespace std;

// // // for defining object in C++ firstly we need to create a class

// // class Student {
// //     public: // access specifier / Encapsulation

// //     // attributes :-- those variable which use to describe the object
// //     int id, age, nos;
// //     string name;

// // private: 
// //     float *gpa;
// //     string gf;

// // public:   // access modifier
// //     // ctor 
// //     Student() {
// //         cout << "Default ctor called.\n";
// //     }

// //     // parameterised ctor called later
// //     Student(int id, int age, int nos, string name, float gpa, string gf, ) {
// //         cout << "parameterised ctor called.\n";
// //         this->id = id; 
// //         this->age = age;
// //         this->nos = nos;
// //         this->name = name;
// //         this->gpa = new float(gpa);
// //         this->gf = gf;
// //     }

// //     // behaviour/ functions / methods
// //     void dance() {
// //         cout << this->name << " dancing\n";
// //     }
// //     void study() {
// //         cout << this->name << " studying\n";
// //     }
// //     void sleep() {
// //         cout << this->name << " Sleeping\n";
// //     }

// //     // dtor called 
// //     ~Student() {
// //         cout << "Default dtor called.\n";
// //         delete this->gpa;
// //     }

// // private: 
// //     void gfchatting() 
// //     {
// //         cout << this->name << " chatting with gf \n" ;
// //     }
    
// // };

// // // creating objects after class
// // int main () {
// //    Student A(1,12, "john", 5, 7.8, "Menu");

// //    cout << A.age << endl;

// //     A.sleep();
// //     return 0; 
// // }

// // Perfect Encapsulation :-- all attributes is hidden 
// // Implementing Encapsulation(binds data and methods) in C++
// // oops = fundamental concepts of (object + classes)
// #include<iostream>
// #include<string> // header file for string class
// using namespace std;

// // for defining object in C++ firstly we need to create a class

// class Student {
//  private:  // access specifier / Encapsulation

//     // attributes :-- those variable which use to describe the object
//     int id, age, nos;
//     string name;
//     float *gpa;
//     string gf;

// public:  
//     // getter and setter

     
//     void setgpa(float a){
//         // layer of authentication
//         *this->gpa = a;
//     }

//     float getgpa() const{
//         return *this->gpa;
//     }

//     float getAge() const{
//         return this->age;
//     }
    

//     // ctor 
//     Student() {
//         cout << "Default ctor called.\n";
//     }

//     // parameterised ctor called later
//     Student(int id, int age, int nos, string name, float gpa, string gf) {
//         cout << "parameterised ctor called.\n";
//         this->id = id; 
//         this->age = age;
//         this->nos = nos;
//         this->name = name;
//         this->gpa = new float(gpa);
//         this->gf = gf;
//     }

//     // behaviour/ functions / methods
//     void dance() {
//         cout << this->name << " dancing\n";
//     }
//     void study() {
//         cout << this->name << " studying\n";
//     }
//     void sleep() {
//         cout << this->name << " Sleeping\n";
//     }

//     // dtor called 
//     ~Student() {
//         cout << "Default dtor called.\n";
//         delete this->gpa;
//     }

// private: 
//     void gfchatting() 
//     {
//         cout << this->name << " chatting with gf \n" ;
//     }
    
// };

// // creating objects after class
// int main () {
//    Student A(1,12, 5, "john", 7.8, "Menu");

//    // getter and setter lgane k baad aap access nhi kr paoge cout k through 
//    //cout << A.age << endl; 
   
//    cout << A.getgpa() << endl;
//    A.setgpa(9.8);
//    cout << A.getgpa() << endl;
//     cout << A.getAge() << endl;
//     A.sleep();
//     return 0; 
// }


// // Implementing inheritance in C++ by using vehicle example
// #include<iostream>
// #include<string>

// using namespace std;

// class Vehicle{                     // base class or parent class
// protected: 
//     string name;
//     string model;
//     int no_of_tyres;

// public:
//     Vehicle(string _name, string _model, int _no_of_tyres){
//         cout << "I am inside Vehicle constructor" << endl;
//         this->name = _name;
//         this->model = _model;           
//         this->no_of_tyres = _no_of_tyres;
//     }
// public:
//     void start_engine(){
//         cout << "Engine started " << name << " " << model <<endl;
//     }
//     void stop_engine(){
//         cout << "Engine stopped " << name << " " << model << endl;
//     }

//     //dtor 
//     ~Vehicle(){
//         cout << "I am inside Vehicle destructor" << endl;
//     }
// };    

// class Car : public Vehicle{              // inheritance used here 
// protected:
//     int no_of_doors;                    // specific to car h
//     string transmission_type;

// public:
//     Car(string _name, string _model, int _no_of_tyres, int _no_of_doors, string _transmission_type) : Vehicle(_name,_model, _no_of_tyres){
//         cout << "I am inside Car constructor" << endl; 
//         this->no_of_doors = _no_of_doors;
//         this->transmission_type = _transmission_type;
//     }

//     void start_AC(){
//         cout << "AC started " << name << endl;
//     }

//     // dtor 
//     ~Car(){
//         cout << "I am inside Car destructor" << endl;
//     }
// };

// class Motorcycle : public Vehicle{
// protected:
//     string handlebarstyle;
//     string suspensionstype;

//     // parameterised ctor called
// public:
//     Motorcycle(string _name, string _model, int _no_of_tyres,string _handlebarstyle, string _suspensiontype) : Vehicle(_name,_model, _no_of_tyres){
//         cout << "I am inside Motorcycle constructor" << endl;
//         this->handlebarstyle = _handlebarstyle;
//         this->suspensionstype = _suspensiontype;
//     }

//     void wheelie(){
//         cout << "Wheeeeee "<< name << endl;
//     }   
//     // dtor
//     ~Motorcycle(){
//         cout << "I am inside Motorcycle destructor" << endl;
//     }
// };

// int main() {
//     Car A("BMW", "X5", 4, 4, "manual");
//     A.start_engine();
//     A.start_AC();
//     A.stop_engine(); 

//     // Motorcycle B("KTM", "Duke", 2, "flat", "monoshock");
//     // B.start_engine();
//     // B.wheelie();
//     // B.stop_engine();
//     return 0;
// }


// // types of inheritance through code 
// #include<iostream>
// #include<string>
// using namespace std;

// // Base class for Single Inheritance
// class Employee
// {
// protected:
//     string name;
//     int employeeId;

// public:
//     Employee(const string &empName, int empId) : name(empName), employeeId(empId)
//     {
//         // cout << __FUNCTION__ << endl;
//     }

//     void display() const
//     {
//         cout << "Employee: " << name << ", ID: " << employeeId << endl;
//     }
// };

// // Derived class for Single Inheritance
// class Developer : public Employee
// {
// private:
//     string programmingLanguage;

// public:
//     Developer(const string &empName, int empId, const string &lang)
//         : Employee(empName, empId)
//     {
//         this->programmingLanguage = lang;
//     }

//     void show() const
//     {
//         display();
//         cout << "Specialization: Developer, Programming Language: " << programmingLanguage << endl;
//     }
// };

// // Base classes for Multiple Inheritance
// class ProjectManager
// {
// protected:
//     string projectManaged;

// public:
//     ProjectManager(const string &project) : projectManaged(project) {}

//     void manageProject() const
//     {
//         cout << "Project Manager managing project: " << projectManaged << endl;
//     }
// };

// class TeamLead
// {
// protected:
//     int teamSize;

// public:
//     TeamLead(int size) : teamSize(size) {}

//     void leadTeam() const
//     {
//         cout << "Team Lead leading a team of " << teamSize << " members." << endl;
//     }
// };

// // Derived class for Multiple Inheritance
// class TechLead : public Employee, public ProjectManager, public TeamLead
// {
// public:
//     TechLead(const string &empName, int empId, const string &project, int teamSize)
//         : Employee(empName, empId), ProjectManager(project), TeamLead(teamSize) {}

//     void displayInfo() const
//     {
//         display();
//         manageProject();
//         leadTeam();
//     }
// };

// // Base class for Multi-level Inheritance
// class HRManager : public Employee
// {
// public:
//     HRManager(const string &empName, int empId) : Employee(empName, empId)
//     {
//         cout << __FUNCTION__ << endl;
//     }

//     void handleHRDuties() const
//     {
//         cout << "HR Manager handling human resources duties." << endl;
//     }
// };

// // Derived class for Multi-level Inheritance
// class HRDirector : public HRManager
// {
// public:
//     HRDirector(const string &empName, int empId) : HRManager(empName, empId)
//     {
//         cout << __FUNCTION__ << endl;
//     }

//     void manageHRDepartment() const
//     {
//         cout << "HR Director managing the HR department." << endl;
//     }
// };

// // Base class for Hierarchical Inheritance
// class Executive : public Employee
// {
// public:
//     Executive(const string &empName, int empId) : Employee(empName, empId) {}

//     void makeExecutiveDecisions() const
//     {
//         cout << "Executive making executive decisions." << endl;
//     }
// };

// // Derived classes for Hierarchical Inheritance
// class CEO : public Executive
// {
// public:
//     CEO(const string &empName, int empId) : Executive(empName, empId) {}

//     void leadCompany() const
//     {
//         makeExecutiveDecisions();
//         cout << "CEO leading the company." << endl;
//     }
// };

// // Base classes for Hybrid Inheritance
// class MarketingManager : public Employee
// {
// public:
//     MarketingManager(const string &empName, int empId) : Employee(empName, empId) {}

//     void createMarketingStrategy() const
//     {
//         cout << "Marketing Manager creating a marketing strategy." << endl;
//     }
// };

// class SalesManager : public Employee
// {
// public:
//     SalesManager(const string &empName, int empId) : Employee(empName, empId) {}

//     void boostSales() const
//     {
//         cout << "Sales Manager boosting sales." << endl;
//     }
// };

// class BusinessDevelopmentManager : public MarketingManager, public SalesManager
// {
// public:
//     BusinessDevelopmentManager(const string &empName, int empId)
//         : MarketingManager(empName, empId), SalesManager(empName, empId) {}

//     void coordinateBusinessDevelopment() const
//     {
//         createMarketingStrategy();
//         boostSales();
//         cout << "Business Development Manager coordinating business development efforts." << endl;
//     }
// };

// int main()
// {
//     // Single Inheritance
//     // Developer dev("Ramu Kaka", 101, "C++");
//     // dev.show();

//     // // Multiple Inheritance
//     TechLead techLead("Anna Dev", 202, "Project X", 5);
//     techLead.displayInfo();

//     // // Multi-level Inheritance
//     // HRDirector hrDirector("Lucy Madam", 303);
//     // hrDirector.handleHRDuties();
//     // hrDirector.manageHRDepartment();

//     // Hierarchical Inheritance
//     // CEO ceo("Devi Lal", 404);
//     // ceo.leadCompany();

//     // // Hybrid Inheritance
//     // BusinessDevelopmentManager bdManager("Sam Uncle", 606);
//     // bdManager.coordinateBusinessDevelopment();

//     return 0;
// }

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

// operator overloading
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
    // Complex c1;
    // cout << c1.real << endl;
    // cout << c1.imag << endl;

    Complex C2(4,5);
    C2.print();
    Complex C3(4,5);
    C3.print();

    // addition of complex number
    // Complex C4 = C2 + C3;
    // cout << "Addition: \n";
    // C4.print();

    // same for substraction 
    // Complex C5 = C2 - C3;
    // cout << "Substraction: \n";
    // C5.print();

    // for multiplication
    // Complex C6 = C2 * C3;
    // cout << "Multiplication: \n";
    // C6.print();

    // for division 
    // Complex C7 = C2 / C3;
    // cout << "Division: \n";
    // C7.print();

    // for Equality 
    if(C2 == C3){
        cout << "C2 and C3 are equal.\n";
    }
    else {
        cout << "C2 and C3 are not equal.\n";
    }
    return 0;
}

// Runtime Polymorphism
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
    // Circle c;
    // Rectangle r;
    // Triangle t;
    // shapedrawing(&c);
    // shapedrawing(&r);
    // shapedrawing(&t);

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

// Miscellaneous concepts 
// local and global variables 
#include<iostream>
using namespace std;

// global variables 
int x = 2;

int main () {
    x = 4;  
    //or  :: x// global x
    int x = 20;
    cout << x << endl; // accessing local variables
    cout << ::x << endl; // accessing global variables

    {
        int x = 50;
        cout << x << endl;
    }
    return 0;
}

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
};

// kisi object ko const banaya to whi function ko call krega jo const ho
void printABC(const abc &a){
    cout << a.getX() << " " << a.getY() << " " << a.getZ()  << endl;
}

int main(){
    abc a(1,2,3);
    printABC(a);
    return 0;
}


int main2() {
   initialisation can be done
    const int x = 5;  // x is a constant
    x = 10;            // but we can't re-assign a value
    cout << x << endl;


    2.const with pointer's
    const int *a = new int(2);    // constant data , non-constant pointer
    // or int const *a = new int(2);
    cout << *a << endl;
    // * a = 20;   can't change the content of pointer.
    int b = 20;
    a = &b;   // pointer itslef can be reassigned
    cout << *a << endl;

    constant pointer, but non-constant data
    int *const a =new int(2);
    cout << *a << endl;
    *a = 20;
    cout << *a << endl;
    int b = 50;
    a = &b; // nhi chlega

    const pointer and data
    const int *const a = new int(10);
    cout << *a << endl;
    *a = 50;
    int b = 10;
    a = &b;
    return 0;
}


// macros
#include<iostream>
using namespace std;

// macro used with capital letter for better SEO
#define PI 3.14
float circleArea(float r){
    return PI * r * r;
}

int main() {
    cout << circleArea(1) << endl;
    return 0;
}


// Static Keyword in class
#include<iostream>
using namespace std;

class abc {
public:
    int x, y;
    
    abc() : x(0) , y(0) {}
    // static member function :-- there is no instance of that class is being passed into that method
    static void print(){
      //  cout << x  << " " << y << endl;
      printf("I am in static %s\n", __FUNCTION__);
      // __FUNCTION__ --> gives the function name
    }
};
// x and y vo kisi ek object k instance nhi h vo puri class k instance h 

// print function kisi particular k nhi hoga so abc krke kr skte h 
int main() {
    abc obj1;
    abc::print();
    abc obj2;
    abc::print();
    abc::print();
    return 0;
}  

// Binary search -- Monotonic function

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

void findlastOccurence(int nums[],int n, int target, int &ansindex){
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
    //int arr[] = {6,7,8,9,10,12,14};
    // dsc order
    //int arr[] = {99, 97, 92, 72, 63, 42};
    // first occur and last occur arr
    // int arr[] = {10, 20 , 20 , 20 , 20 , 20 ,  60, 80, 90};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int target ;
    // cin >> target;
    //cout << binarysearchasc(arr, size, target);
    //cout << binarysearchdsc(arr, size, target);
   
    //cout << binarysearchfirstoccur(arr, size, target, index);
    //cout << binarysearchlastoccur(arr, size, target, index);
    // int index = -1;
    // int arr[] = {10, 20 , 20 , 20 , 20 , 20 ,  60, 80, 90};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int target ;
    // cin >> target;
    // cout << totaloccur(arr, size, target, index);
    int arr[] = {3, 4, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    cout << missingnumbersirlogic(arr, size);
    //cout << missingnumberindexlogic(arr, size);
    //cout << missingnumberxorlogic(arr, size);
    //cout << missingnumbersumlogic(arr, size);
    return 0;
}

// auto commit by using extension
// it shows updates 

// not updated