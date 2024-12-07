#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	// PresidentialPardonForm form("/Users/leeyang/Documents/CPP/cpp05/ex01/");
	// RobotomyRequestForm form("/Users/leeyang/Documents/CPP/cpp05/ex01/");
	// ShrubberyCreationForm form("/Users/leeyang/Documents/CPP/cpp05/ex01/");
	Intern will("will");
	AForm *form = will.makeForm("PresidentialPardonForm", "./");
	Bureaucrat laian("laian", 10);
	laian.signForm(*form);
	form->execute(laian);
	delete form;
}

// todo:
// Intern.cpp need to add message from pdf