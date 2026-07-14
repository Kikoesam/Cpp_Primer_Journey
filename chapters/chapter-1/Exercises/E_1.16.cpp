//Write your own version [for loop] of a program that prints the sum of a set of integers read from cin.
#include <iostream>
int main()
{
    int n, sum, j;
    std::cout<< "enter the number of entries you want to sum : "<<std::endl;
    std::cin>> n;
    for(int i = 0; i < n; i++)
    {
    std::cin>> j;
    sum += j ;
    }
    std::cout<< "the sum is : "<< sum << std::endl;

return 0;
}