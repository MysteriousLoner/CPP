#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Bureaucrat.hpp"
#include <exception>
#include "GradeException.hpp"

using namespace std;

class Bureaucrat;

class Form
{
private:
	const string name;
	bool isSigned;
	const int gradeToSign;
	// const int gradeToExecute;
	GradeTooHighException Grade2High;
	GradeTooLowException Grade2Low;
public:
	Form();
	Form(const string& name, int gradeToSign);
	~Form();
	string getName();
	bool getIsSigned();
	int getGradeToSign();
	void beSigned(Bureaucrat&  bureaucrat);
};

ostream& operator << (ostream& out, Form& form);

#endif