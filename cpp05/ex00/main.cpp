// #include "Bureaucrat.hpp"
#include "Bureaucrat.hpp"

int main()
{
	string input;
	// const char *tempstr;
	int grade;
	// while (1)
	// {
	// 	cout << "Enter a grade: ";
	// 	getline(cin, input);
	// 	try
	// 	{
	// 		tempstr = input.c_str();
	// 		grade = atoi(tempstr);
	// 	}
	// 	catch (exception &e)
	// 	{
	// 		cout << "input error" << endl;
	// 		cout << e.what() << endl;
	// 		continue;
	// 	}
	// 	break;
	// }
	try
	{
		grade = 150;
		cout << "grade: " << grade << endl;
		Bureaucrat bureaucrat("Laian", grade);
		cout << "test" << endl;
		cout << bureaucrat;
		bureaucrat.decrementGrade();
		cout << bureaucrat;
		bureaucrat.incrementGrade();
		cout << bureaucrat;
		bureaucrat.incrementGrade();
		cout << bureaucrat;
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
	// catch (GradeTooLowException &e)
	// {
	// 	cout << "Grade too low" << endl;
	// }
}

// Todo:
// Remove redundant try catch blocks in Bureaucrat.cpp
// Reverse statement in GradeTooLowException.cpp
// replace exception in main() to e.what() to throw correct error message