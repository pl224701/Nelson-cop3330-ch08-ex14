/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jack Nelson
*/

/*
    Answering Questions from Exercise 14: You can declare a non-reference function const.
    This would mean that the variables value is constant and cannot be changed.
    We might want to do that to prevent the value from being changed in the program accidently.
    People don't do it often because they don't access the variable to change it within their implementation so it doesn't change.
*/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void Test1(const int number)
{
    cout << number;
}

void Test2(const double number)
{
    cout << number;
}

void Test3(const char character1)
{
    char character2;
    cout << "Enter a character: ";
    scanf("%s",&character2);
    cout << "Printing characters\n";
    cout << character1;
    cout << "\n";
    cout << character2;
}
// I tried to "change" the constant in the programs even though it wouldn't change because its a constant but it created compiler errors.
void function()
{
    std::string test;
    cout << "Enter Test1, Test2, Test3 for programs 1, 2, and 3 respectively: ";
    getline(cin,test);
    if(test=="Test1")
    {
        int int_number;
        cout << "Enter an integer: ";
        scanf("%d",&int_number);
        Test1(int_number);
    }
    if(test=="Test2")
    {
        double number;
        cout << "Enter a number: ";
        scanf("%lf",&number);
        Test2(number);
    }
    if(test=="Test3")
    {
        char character;
        cout << "Enter a character: ";
        scanf("%s",&character);
        Test3(character);
    }
}
