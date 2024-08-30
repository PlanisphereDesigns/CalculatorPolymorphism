/*Guards*/
#ifndef SCIENTIFICCALCULATOR_H
#define SCIENTIFICCALCULATOR_H

#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>

#include "Calculator.h"
#include "Calculator.cpp"

using namespace std;

class ScientificCalculator : public Calculator {
public:
	virtual void setNumSciButtons(int& numScientificButtons) override;
	virtual void setPrice(double& price) override;
	virtual void printCalculatorSpecs() override;
	/*An inherited constructor.*/
	ScientificCalculator(string& color, int& size, int& howManyMade,
		string& buttonType, string& name, int& numScientificButtons, double& price);
	
protected:
	/*Variables*/
	double savedPrice;
	int numSavedScientificButtons;
	
	//Use compiler-provided destructor
};

#endif