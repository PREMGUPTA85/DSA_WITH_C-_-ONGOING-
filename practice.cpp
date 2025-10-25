// // dequeue 
// #include<iostream>
// #include<queue>
// using namespace std;

// int main () {
   // create or declare a queue
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
