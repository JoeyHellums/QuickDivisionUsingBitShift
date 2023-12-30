// C++ program to find out execution time of
// of functions
#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

static const char LogTable256[256] = 
{
#define LT(n) n, n, n, n, n, n, n, n, n, n, n, n, n, n, n, n
    -1, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3,
    LT(4), LT(5), LT(5), LT(6), LT(6), LT(6), LT(6),
    LT(7), LT(7), LT(7), LT(7), LT(7), LT(7), LT(7), LT(7)
};
 

int division(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {
                int test = i/y;
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by division: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
}

unsigned int nearestbinaryloglut(unsigned int v){

unsigned r;     // r will be lg(v)
register unsigned int t, tt; // temporaries

if (tt = v >> 16)
{
  r = (t = tt >> 8) ? 24 + LogTable256[t] : 16 + LogTable256[tt];
}
else 
{
  r = (t = v >> 8) ? 8 + LogTable256[t] : LogTable256[v];
}

    return r;
}

unsigned int quickdiv(unsigned int n, unsigned int d){
    d = nearestbinaryloglut(d); //get ceil(log_2(d))
    unsigned int x = n>>d; //divide x by nearest highest power of 2
    return x;
} 

int calcquickdiv(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {;
                quickdiv(i,y);
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by calcquickdiv: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
}

unsigned int quickdivnobranch(unsigned int n, unsigned int v){
    //n is numerator, v is denominator, x is result
    
    //get ceil(log_2(v))
    unsigned r;     // r will be lg(v)
    register unsigned int t, tt; // temporaries

    if (tt = v >> 16)
    {
        r = (t = tt >> 8) ? 24 + LogTable256[t] : 16 + LogTable256[tt];
    }
    else 
    {
        r = (t = v >> 8) ? 8 + LogTable256[t] : LogTable256[v];
    }

    unsigned int x = n>>r; //divide x by nearest highest power of 2
    return x;
} 

int calcquickdivnobranch(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {;
                quickdivnobranch(i,y);
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by calcquickdivnobranch: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
}



int main()
{
    int number = 5000;

    for (int i = 1; i < number; i++) {
            for (int y = 2; y < number; y++) {;
                int regulardiv = i/y;
                int fastdiv = quickdivnobranch(i,y);

                cout << "" << regulardiv << "," << fastdiv << "," << abs(regulardiv - fastdiv) << "\n";
        };
    }

    division(number);

    //calcquickdiv(number);
    calcquickdivnobranch(number);

    return 0;
}