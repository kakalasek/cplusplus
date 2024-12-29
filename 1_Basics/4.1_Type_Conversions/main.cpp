#include <iostream>

using namespace std;

int main(){
    float f = 3.03;
    double d = 1.23;

    int k = int(f) + (int)d;    // The first is the C++ style, second is C style

    cout << k << endl;

    return 0;
}