/*
We’ll assume that all the transactions for each ISBN are grouped together in the input.
Our program will combine the data for each ISBN in a variable named total.
We’ll use a second variable named trans to hold each transaction we read. 
If trans and total refer to the same ISBN, we’ll update total. Otherwise we’ll
print total and reset it using the transaction we just read:

*/
#include "Sales_item.h"
int main()
{   
    Sales_item total;
    std::cout<< "enter the transaction : "<< std::endl;
    if (std::cin>> total)
    {
        Sales_item trans;
        while (std::cin>> trans)
        {
            if ( total.isbn() == trans.isbn())
            {
                total += trans;
            }
            else
            {
                std::cout<< "total number of this book is : "<< total<< std::endl;
                total = trans;
            }
        }
    }
    else
    std::cout<< "brother insert real data..";
    return 0;
}
