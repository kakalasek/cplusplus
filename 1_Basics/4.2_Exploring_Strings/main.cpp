#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    name = "Joe";

    string pet("Hawk");

    string output;

    getline(cin, output);

    cout << output << endl;

    output.compare(name);

    return 0;
}