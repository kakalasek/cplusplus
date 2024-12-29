#include <iostream>
#include <cmath>

using namespace std;

void increment(int & increment, int incrementby = 1)
{
    increment += incrementby;
}
void increment(float & increment, float incrementby = 1.0f)
{
    increment += incrementby;
}

int main()
{
    int intvar = 0;
    float floatvar = 1.5;

    for(int i = 0; i < 10; i++)
    {
        if(i % 2)
        {
            increment(intvar);
            increment(floatvar, sqrt(intvar));
        }
        else 
        {
            increment(intvar, i);
            increment(floatvar);
        }
    }

    cout << intvar * floatvar << endl;

    return 0;
}