#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int maxball;
    int ballsno;

    cout << "Max ball number? ";
    cin >> maxball;
    cout << "How many balls? ";
    cin >> ballsno;
    srand(time(NULL));

    int *drawn_numbers = new int[ballsno];
    for(int i = 0; i < ballsno; i++){
        int rnd = rand() % maxball + 1;
        for(int j = 0; j < ballsno; j++){
            if(rnd == drawn_numbers[j]){
                i--;
                break;
            }
            if(j == ballsno-1){
                cout << rnd << endl;
                drawn_numbers[i] = rnd;
            }
        }
    }

    delete[] drawn_numbers;

    return 0;
}