#include <iostream>
#include "EvenOdd.h"

int main()
{
int i;
    do {
        std::cout << std::endl;
        std::cout << "Please, enter number (0 to exit): " << std::endl;
        std::cin >> i;
        if (i!=0) odd(i);
        else std::cout << "Exiting" <<std::endl;
        } while (i!=0);
    return 0;
}
