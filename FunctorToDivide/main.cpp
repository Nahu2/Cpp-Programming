#include <iostream>
#include <ctime>

class Divide
{
    public:
        //Divide(float x): value1(x) {}
        Divide(float x) {value1=x;}
        float operator() (float value2){return value1/value2;}
    private:
        float value1;
};

void displayTime(){
    time_t t = time(NULL);
    std::cout << "Today is: " << ctime(&t) << std::endl;
}


int main()
{
    Divide divide12by(12);
    std::cout << "12 divided by 2 = " << divide12by(2) << std::endl;

    Divide divide13by(13);
    std::cout << "13 divided by 2 = " << divide13by(2) << std::endl;

    Divide divideNumberby(17.35);
    std::cout << "17.35 divided by 234 = " << divideNumberby(234) << std::endl;
    std::cout << std::endl;

    displayTime();
    return 0;
}
