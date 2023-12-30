// C++ program to find out execution time of
// of functions
#include <algorithm>
#include <chrono>
#include <iostream>
#include<vector>
using namespace std;
using namespace std::chrono;

static const char LogTable256[256] = 
{
#define LT(n) n, n, n, n, n, n, n, n, n, n, n, n, n, n, n, n
    -1, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3,
    LT(4), LT(5), LT(5), LT(6), LT(6), LT(6), LT(6),
    LT(7), LT(7), LT(7), LT(7), LT(7), LT(7), LT(7), LT(7)
};
 
// For demonstration purpose, we will fill up
// a vector with random integers and then sort
// them using sort function. We fill record
// and print the time required by sort function
int addition(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {
                int test = i+y;
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by addition: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
}

int subtraction(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {
                int test = i-y;
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by subtraction: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
}

int multiplication(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {
                int test = i*y;
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by multiplication: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
}

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

int shiftleft(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {
                int test = i<<y;
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by shifting left: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
}

int shiftright(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {
                int test = i<<y;
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by shifting right: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
}

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

int calcpoweroftwo(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (unsigned int y = 1; y < n; y++) {
                i + nearestpoweroftwo(y);
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by calcpoweroftwo: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
}

unsigned int nearestbinarylog(unsigned int v){
const unsigned int b[] = {0x2, 0xC, 0xF0, 0xFF00, 0xFFFF0000};
const unsigned int S[] = {1, 2, 4, 8, 16};
int i;

register unsigned int r = 0; // result of log2(v) will go here
for (i = 4; i >= 0; i--) // unroll for speed...
{
  if (v & b[i])
  {
    v >>= S[i];
    r |= S[i];
  } 
}
    return r;
}

int calcbinarylog(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {;
                i + nearestbinarylog(y);
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by calcbinarylog: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
}

unsigned int nearestbinarylognobranch(unsigned int v){
register unsigned int r; // result of log2(v) will go here
register unsigned int shift;

r =     (v > 0xFFFF) << 4; v >>= r;
shift = (v > 0xFF  ) << 3; v >>= shift; r |= shift;
shift = (v > 0xF   ) << 2; v >>= shift; r |= shift;
shift = (v > 0x3   ) << 1; v >>= shift; r |= shift;
                                        r |= (v >> 1);
    return r;
}

int calcbinarylognobranch(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {;
                i + nearestbinarylognobranch(y);
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by calcbinarylognobranch: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
}

unsigned int nearestbinarylogcertain(unsigned int v){
v = nearestpoweroftwo(v);
static const unsigned int b[] = {0xAAAAAAAA, 0xCCCCCCCC, 0xF0F0F0F0, 
                                 0xFF00FF00, 0xFFFF0000};
register unsigned int r = (v & b[0]) != 0;
for (int i = 4; i > 0; i--) // unroll for speed...
{
  r |= ((v & b[i]) != 0) << i;
}
    return r;
}

int calcbinarylogcertain(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {;
                i + nearestbinarylogcertain(y);
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by calcbinarycertain: "
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

int calcbinaryloglut(int n)
{
    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //multiplication
    for (int i = 1; i < n; i++) {
            for (int y = 1; y < n; y++) {;
                i + nearestbinaryloglut(y);
        };
    }
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by calcbinaryloglut: "
         << duration.count() << " microseconds" << endl;
 
    return 0;
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

    addition(number);
    subtraction(number);
    multiplication(number);
    division(number);
    shiftleft(number);
    shiftright(number);

    calcpoweroftwo(number);

    calcbinarylog(number);
    calcbinarylognobranch(number);
    calcbinarylogcertain(number);
    calcbinaryloglut(number);

    calcquickdiv(number);
    calcquickdivnobranch(number);

    return 0;
}