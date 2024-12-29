#include <iostream>
#include <string>

using namespace std;

int main(){

    string hello = "Hello";
    hello += " There";

    cout << hello.max_size() << endl;

    return 0;
}