#include "EvenOdd.h"

void odd (int x) // Function 1 definition
{
if ((x%2)!=0) std::cout << "It is odd." << std::endl;
else even (x);
}
void even (int x) // Function 2 definition
{
if ((x%2)==0) std::cout << "It is even." << std::endl;
else odd (x);
}
