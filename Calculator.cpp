/*Guards*/
#ifndef CALCULATOR_CPP
#define CALCULATOR_CPP

#include<algorithm>
#include<cmath>
#include<vector>
#include<iostream>

using namespace std;

#include "Calculator.h"

	Calculator::Calculator(string& color, int& size, int& howManyMade, string& buttonType, string& name) {
		/*Use the functions inside to set the variables.*/
		/*There is no error checking int the constructor because the input is known to have no errors beforehand.*/
		setColor(color);
		setSize(size);
		setNumMade(howManyMade);
		setButtonType(buttonType);
		setName(name);
		/*DO NOT CALL A VIRTUAL FUNCTION FROM A CONSTRUCTOR*/
	}

	/*Set values*/
	void Calculator::setColor(string& calculatorColor) {
		color = calculatorColor;
	}
	void Calculator::setSize(int& size) {
		calSize = size;
	}
	void Calculator::setNumMade(int& howManyMade) {
		numMade = howManyMade;
	}
	void Calculator::setButtonType(string& buttonType) {
		savedButtonType = buttonType;
	}

	/*Get the printout*/
	void Calculator::printCalculatorSpecs() {
		cout << "Begin the regular calculator's report: " << endl;
		cout << "The name of this calculator is " << calcName << "." << endl;
		cout << "Here are the specifications for the calculator that you requested." << endl;
		cout << "The calculator's color is " << color << ". ";
		cout << "The calculator's size is " << calSize << ". ";
		cout << "The calculator's button type is " << savedButtonType << ". ";
		cout << "And there were " << numMade << " units of this calculator created. ";
		cout << "This is the function of the base class." << endl;
	}

	void Calculator::setName(string& name) {
		calcName = name;
	}


	void Calculator::setNumSciButtons(int& numSciButtons) {
		cout << "No buttons!" << endl;
	}

	void Calculator::setPrice(double& doublePrice) {
		cout << "No price!" << endl;
	}

	//Use compiler-provided destructor
	
#endif