#include <iostream>

using namespace std;

int main()
{
    // Allocates some memory for us
    float *array = new float[20];
    int *count = new int;

    // Frees the memory
    delete[] array;
    delete count;

    return 0;
}