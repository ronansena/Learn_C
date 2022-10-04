// Ex2_01.cpp
// Writing values of variables to the screen
#include <iostream> // For user input and output through std::cin / cout
int main()
{
int apple_count {15};
int orange_count {5};
int total_fruit {apple_count + orange_count};

// Number of apples
// Number of oranges
// Total number of fruit
std::cout << "The value of apple_count is " << apple_count << std::endl;
std::cout << "The value of orange_count is " << orange_count << std::endl;
std::cout << "The value of total_fruit is " << total_fruit << std::endl;
}
