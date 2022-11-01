// smallest to greatest number from the 3 numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "enter first number:\n";
    std::cin >> a;
    std::cout << "enter second number:\n";
    std::cin >> b;
    std::cout << "enter third number:\n";
    std::cin >> c;

    
    if (a<b&&a<c) 
    {
        std::cout << "the smallest number is:"<<a<<"\n";
    }
    else if (b<a&&b<c)
    {
        std::cout << "the smallest number is:" << b<<"\n";
    }
    else if (c<a&&c<b)
    {
        std::cout << "the smallest number is:" << c<<"\n";
    }

    if (a>b&&a>c)
    {
        std::cout << "the greatest number is:" <<a<<"\n";
    }
    else if (b>a&&b>c)
    {
        std::cout << "the greatest number is:" <<b<< "\n";
    }
    else if (c > a && c > b)
    {
        std::cout << "the greatest number is:" << c << "\n";
    }

  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
