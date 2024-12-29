#include <iostream>

namespace hogwarts {
    int troll = 1;
}

namespace Mordor {
    int troll = 2;
}

int main(){
    {
        using namespace Mordor;
        std::cout << troll << std::endl;
    }


    std::cout << hogwarts::troll << "   " << Mordor::troll << std::endl;

    return 0;
}