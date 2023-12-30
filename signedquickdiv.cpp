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
 

 int8_t quickdivnobranch( int8_t n,  int8_t v){
    //n is numerator, v is denominator, x is result
    
    //get log_2(v)
    unsigned r;     // r will be lg(v)
    int8_t t, tt; // temporaries

    if (tt = v >> 16)
    {
        r = (t = tt >> 8) ? 24 + LogTable256[t] : 16 + LogTable256[tt];
    }
    else 
    {
        r = (t = v >> 8) ? 8 + LogTable256[t] : LogTable256[v];
    }

     int8_t x = n>>r; //divide x by nearest highest power of 2
    return x;
} 

int main()
{
    int8_t number = 127;

    for (int i = -127; i < number; i++) {
            for (int y = -127; y < number; y++) {;
            int regulardiv = 0;
                if(y != 0){
                    regulardiv = i/y;
                }
                int fastdiv = quickdivnobranch(i,y);

                cout << i << "," << y << "," << regulardiv << "," << fastdiv << "," << abs(regulardiv - fastdiv) << "\n";
        };
    }


    return 0;
}