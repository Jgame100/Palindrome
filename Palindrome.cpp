// Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>

int main()
{
    //Title
    std::cout << "Palindrome Test!!\n";
    std::cout << "Input the word you want to check is or isn't a Palindrome: \n";

    // User Inputs a word that will be used to check
    std::string x;
    std::cin >> x;

    // creating a copy of the string and storing it into the variable reversed
    std::string reversed = x;
    std::reverse(reversed.begin(), reversed.end()); // the 'begin' points to the start of the string and 'end' points to the end, and reverses the characters in place.
    
    //Compares if the original input 'x' is equal to the reversed input 'reversed'
    if (x == reversed) {

        std::cout << x + " is a Palindrome!\n";

    } else {

        std::cout << x + " is not a Palindrome!";

    }



}

