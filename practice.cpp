
// In container's vector part cover up
// C++ with STL :-- (contgainer's) -- 1.vector part 
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
