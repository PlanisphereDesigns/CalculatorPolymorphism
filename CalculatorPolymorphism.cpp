// CalculatorPolymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*Include*/
#include <iostream>
#include<string>

#include"Calculator.h"
#include"ScientificCalculator.h"
#include "Calculator.cpp"
#include "ScientificCalculator.cpp"

/*Set namespace*/
using namespace std;


int main()
{
    cout << "Welcome to the calculator runtime polymorphism program.\n";
    cout << endl;
    cout << "Made class objects. " << endl;
    cout << endl;

    /*Calculator*/
    /*Declare and intitialize variables*/
    string myColor = "ruby";
    string myButton = "round";
    string myCalcName = "My Red Calculator";
    int mySize = 36;
    int myNumMade = 576;
    int numSciButtons = 6;
    double price = 7.99;
    /*These have to be variables because you can only pass variables by reference; typing number into parameter does not pass by reference.*/
    ScientificCalculator mySimpleRedCalculator(myColor, mySize, myNumMade, myButton, myCalcName, numSciButtons, price);

    cout << endl;

    /*Print by calling the function*/
    mySimpleRedCalculator.printCalculatorSpecs();

    cout << endl;
    cout << endl;

    myColor = "blue";
    mySize = 1;
    myCalcName = "Simplest Calculator";
    myButton = "square";
    myNumMade = 13456;
    Calculator myCalculator(myColor, mySize, myNumMade, myButton, myCalcName);
    myCalculator.printCalculatorSpecs();

    /*Dynamic with pointers.*/

    cout << "\nNow using runtime polymorphism with pointers." << endl;
    cout << endl;

    /*Make 2 new calcs with pointers.*/
    cout << "Made 2 new pointers." << endl;
    ScientificCalculator* mySciCalculatorPointer (&mySimpleRedCalculator );
    Calculator* myCalculatorPointer( &myCalculator);
    cout << endl;
    cout << "\nCalled the Calculator function with the pointer this -> print()" << endl;
    mySciCalculatorPointer->printCalculatorSpecs();
    cout << endl;
    cout << "\nCalled the Scientific Calculator function with the pointer this -> print()" << endl;
    myCalculatorPointer->printCalculatorSpecs();

}