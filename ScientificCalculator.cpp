/*Guards*/
#ifndef SCIENTIFICCALCULATOR_CPP
#define SCIENTIFICCALCULATOR_CPP

#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>

#include "Calculator.h"
#include "ScientificCalculator.h"
#include "Calculator.cpp"
using namespace std;



ScientificCalculator::ScientificCalculator(string& color, int& size, int& howManyMade,
	string& buttonType, string& name, int& numScientificButtons, double& price) : Calculator(color, size, howManyMade,
		buttonType, name) {
		setNumSciButtons(numScientificButtons);
		setPrice(price);
	}


	/*Virtual functions*/

void ScientificCalculator::setNumSciButtons(int& numScientificButtons) /*override illegal on function definition*/ {
	numSavedScientificButtons = numScientificButtons;
}

void ScientificCalculator::setPrice(double& price) /*override illegal on function definition*/ {
	savedPrice = price;
}

void ScientificCalculator::printCalculatorSpecs() {
	cout << "Begin scientific calculator report:" << endl;
	cout << "The name of this calculator is " << calcName << "." << endl;
	cout << "Here are the specifications for the calculator that you requested." << endl;
	cout << "The calculator's color is " << color << ". ";
	cout << "The calculator's size is " << calSize << ". ";
	cout << "The calculator's button type is " << savedButtonType << ". ";
	cout << "There were " << numMade << " units made of this calculator." << endl;
	cout << "This function uses runtime polymorphism." << endl;
	
	cout << "This is a SCIENTIFIC CALCULATOR." << endl;
	cout << "The price of the SCIENTIFIC CALCULATOR IS $" << savedPrice << ". " << endl;
	cout << "The number of scientific buttons of the SCIENTIFIC CALCULATOR IS " << numSavedScientificButtons << ". ";

	//Use compiler-provided destructor
}
	// redeclaration of member is not allowd void ScientificCalculator::setNumSciButtons(int numScientificButtons);
	// redeclaration of member is not allowed void ScientificCalculator::setPrice(double price);


#endif