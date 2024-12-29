#include <iostream>

using namespace std;

inline long square(long number) // inline keyword inlines the function
{
    return number*number;
};

int main()
{
    long var = 5;
    var = square(var);
    var = square(var);
    var = square(var);
    var = square(var);

    cout << var << endl;

    return 0;
}

