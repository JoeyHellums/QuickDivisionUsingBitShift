// C++ program to find out execution time of
// of functions
#include <algorithm>
#include <chrono>
#include <iostream>
#include<vector>
using namespace std;
using namespace std::chrono;
 
// For demonstration purpose, we will fill up
// a vector with random integers and then sort
// them using sort function. We fill record
// and print the time required by sort function
unsigned int nearestpoweroftwo(unsigned int v){
    v--;
    v |= v >> 1;
    v |= v >> 2;
    v |= v >> 4;
    v |= v >> 8;
    v |= v >> 16;
    v++;

    return v;
}


int main()
{

    unsigned int n = 5000;

    for (unsigned int i = 1; i < n; i++) {
        cout << nearestpoweroftwo(i) << "\n";
    }


    return 0;
}