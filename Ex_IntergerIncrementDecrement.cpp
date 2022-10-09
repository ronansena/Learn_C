// Ex2_01.cpp
// Writing values of variables to the screen
#include <iostream> // For user input and output through std::cin / cout
int main()
{
int count {15};
int total1, total2, total3, total4, total5 , total6, total7, total8, total9, total10, total11, total12, total13 {};

total1 = count++ + 5;
count = 15;
total2 = ++count + 5;
count = 15;
total3 = count-- + 5;
count = 15;
total4 = --count + 5;
count = 15;
total5 = (count++) + 5;
count = 15;
total6 = (++count) + 5;
count = 15;
total7 =  5 + count++ ;
count = 15;
total8 =  5 + ++count;
count = 15;
total9 =  5 + count-- ;
count = 15;
total10 = 5 + --count;
count = 15;
total11 = 5 + (count++);
count = 15;
total12 = 5 + (++count);
count = 15;
total13 = ++count * 3 + count++ * 5;


std::cout << "total1 " << total1 << std::endl;
std::cout << "total2 " << total2 << std::endl;
std::cout << "total3 " << total3 << std::endl;
std::cout << "total4 " << total4 << std::endl;
std::cout << "total5 " << total5 << std::endl;
std::cout << "total6 " << total6 << std::endl;
std::cout << "-----------------------------" << std::endl;
std::cout << "-----------------------------" << std::endl;
std::cout << "-----------------------------" << std::endl;
std::cout << "-----------------------------" << std::endl;
std::cout << "total7 " << total7 << std::endl;
std::cout << "total8 " << total8 << std::endl;
std::cout << "total9 " << total9 << std::endl;
std::cout << "total10 " << total10 << std::endl;
std::cout << "total11 " << total11 << std::endl;
std::cout << "total12 " << total12 << std::endl;
std::cout << "total13 " << total13 << std::endl;
}
