//Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions that were read.
#include "Sales_item.h"
int main()
{   
    Sales_item book;
    Sales_item sum;
    while(std::cin >> book)
    {
        sum += book;
    }

    std::cout<< sum;

    return 0;
}
