#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "anotherform.hpp"

int main()
{
	// PresidentialPardonForm form("/Users/leeyang/Documents/CPP/cpp05/ex01/");
	// RobotomyRequestForm form("/Users/leeyang/Documents/CPP/cpp05/ex01/");
	ShrubberyCreationForm form("/Users/leeyang/Documents/CPP/cpp05/ex01/");
	anotherForm asdcidhciadb;
	cout << "------------------------------" << endl;
	{
		cout << "unsigned form" << endl;
		Bureaucrat bureaucrat("william", form.getGradeToSign() + 1);
		bureaucrat.signForm(form);
		cout << bureaucrat;
		cout << form;
		cout << "------------------------------" << endl;
		cout << "unsigned, cant execute" << endl;
		{
			Bureaucrat executor("laian", form.getGradeToExecute() - 1);
			cout << form;
			cout << executor;
			form.execute(executor);
		}
		cout << "------------------------------" << endl;
		cout << "unsigned, can execute" << endl;
		{
			Bureaucrat executor("cyuxian", form.getGradeToExecute() + 1);
			cout << form;
			cout << executor;
			form.execute(executor);
		}
	}
	cout << "------------------------------" << endl;
	cout << "------------------------------" << endl;
	{
		cout << "signed form" << endl;
		cout << form;
		Bureaucrat bureaucrat("william", form.getGradeToSign() - 1);
		cout << bureaucrat;
		bureaucrat.signForm(form);
		cout << "------------------------------" << endl;
		cout << "signed, can execute" << endl;
		{
			Bureaucrat executor("laian", form.getGradeToExecute() - 1);
			cout << form;
			cout << executor;
			form.execute(executor);
		}
		cout << "------------------------------" << endl;
		cout << "signed, cannot execute" << endl;
		{
			Bureaucrat executor("cyuxian", form.getGradeToExecute() + 1);
			cout << form;
			cout << executor;
			form.execute(executor);
		}
	}
	cout << "------------------------------" << endl;
}

// todo:
// replace target from pathname to target name (just check if current directory has file with same name)
// add executeForm() in Bureaucrat.cpp