// Calculate S(n) = 1 + 1/2 + 1/3 + ... + 1/n
#include <iostream>
#include <iomanip>

int main()
{
    int n, i;
    double S = 0;
    i = 1;

    //Setprecision of number to 2 digit
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    do
    {
        std::cout << "Enter n number: ";
        std::cin >> n;

        //Condition if you enter 0
        if(n < 1) {
            std::cout << "Please enter a number not equal to zero";
            break;
        }
           
        while (i <= n)
        {
            S = S + (1.00 / i); // Remember to set precision to the number 1.00 not 1
            i++;
        }
            std::cout << S << std::endl;
    } 
    while (n < 1);

   
    return 0;
}