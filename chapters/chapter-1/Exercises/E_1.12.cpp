//Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.
#include <iostream>

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    sum += i;
    std::cout<< sum ;
    return 0;
}