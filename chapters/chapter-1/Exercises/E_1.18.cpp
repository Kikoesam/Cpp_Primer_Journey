//write a program to count how many consecutive times each distinct value appears in the input.
#include <iostream>
int main()
{
    int curVal , val;
    std::cout<< "enter random numbers brother : "<< std::endl;
    if (std::cin>> curVal)
    {
        int cnt = 1;
        while (std::cin>> val)
        {
            if(curVal == val)
            {
                cnt++;
            }
            else
            {
                std::cout<< curVal << " is counted " << cnt << " Times." << std::endl;
                curVal = val;
                cnt = 1;
            }
        }
    }

return 0;
}