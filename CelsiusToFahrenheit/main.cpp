#include <iostream>
#include <cmath>
#include <ctime>

void displayTime()
{
    time_t t = time(NULL);
    std::cout << "Today is: " << ctime(&t) << std::endl;
}

int main()
{
    double C, F;
    std::cout << "Enter a value for temperature in Celsius: " << std::endl;
    std::cin >> C;
    F=(C*9/5)+32;
    std::cout << "The value of temperature equivalent in Fahrenheit is: " << F << std::endl;
    displayTime();
    return 0;
}
