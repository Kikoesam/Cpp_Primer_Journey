//Write a program that uses a while to sum the numbers from 50 to 100.
#include <iostream>

int sum = 0, val = 50;

int main()
{
    while (val <= 100)
        {
            sum += val; // sum = sum + val
            val++;
        }
    std::cout<<"the Σ of 50 to 100 is : "<< sum;
    return 0;
}