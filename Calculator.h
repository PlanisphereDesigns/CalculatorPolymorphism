/*Guards*/
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

class Calculator {
public:
	/*The strings and int are being passed by reference as reference parameters into the constructor.*/
	Calculator(string& color, int& size, int& howManyMade, 
string& buttonType, string& name);

	/*Get and set*/
	void setColor(string& calculatorColor);
	void setSize(int& size);
	void setNumMade(int& howManyMade);
	void setButtonType(string& buttonType);
	void setName(string& name);
	
	/*Get the printout*/

	/*
	Here, the virtual functions are what represents the additional functionality in the inherited class.
	The base class functions are not all virtual and the class is not pure virtual or pure abstract.
	*/

	//virtual functions for runtime polymorphism
	virtual void setNumSciButtons(int& numScientificButtons);
	virtual void setPrice(double& price);
	virtual void printCalculatorSpecs();
	
protected:
	/*variables*/
	string color;
	int numMade;
	string savedButtonType;
	int calSize;
	string calcName;

	//Use compiler-provided destructor
};

#endif