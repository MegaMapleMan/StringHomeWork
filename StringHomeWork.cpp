// StringHomeWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cout << "Enter your word: ";
    std::cin >> word;
    std::cout << "--------------------\n";
    std::cout << "Word: " << word << "\n";
    std::cout << "Length: " << word.length() << "\n";
    std::cout << "First: " << word.front() << "\n";
    std::cout << "Last: " << word.back() << "\n";
}