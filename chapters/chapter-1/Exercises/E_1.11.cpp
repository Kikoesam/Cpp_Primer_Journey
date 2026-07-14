//Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.
#include <iostream>

int num1 , num2 ;
int lnum , hnum ; //Lower number, Higher number

int main()
{
    std::cout<<"provide the 2 numbers : "<<std::endl;
    std::cin>> num1 >> num2 ;
    if (num1 > num2)
    {
        lnum = num2;
        hnum = num1;
    }
    else
    {
        lnum = num1;
        hnum = num2;       
    }
    while (lnum != hnum)
    {
        std::cout<<lnum<<std::endl;
        lnum++;
    }
    std::cout<<hnum<<std::endl;
    return 0;
}