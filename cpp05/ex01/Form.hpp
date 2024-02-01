#ifndef FORM_HPP
#define FORM_HPP

#include <string>

using namespace std;

class GradeTooHighException: public exception
{
public:
	const char *what() const throw();
};

class GradeTooLowException: public exception
{
public:
	const char *what() const throw();
};

class Form
{
private:
	const string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;
	GradeTooHighException Grade2High;
	GradeTooLowException Grade2Low;
public:
	Form();
	Form(const string& name, int gradeToSign, int gradeToExecute);
	~Form();
	string getName();
	bool getIsSigned();
	int getGradeToSign();
	int getGradeToExecute();
	void beSigned();
	void beExecuted();
};

ostream& operator << (ostream& out, Form& form);
#endif