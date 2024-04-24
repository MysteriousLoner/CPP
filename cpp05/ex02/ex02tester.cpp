#include "ex02tester.hpp"

Tester::Tester(AForm & form)
{
    cout << "now testing: " << form.getName() << endl;
    cout << "----------------------------------------" << endl;
    cout << "grade exceptions" << endl;
    Bureaucrat bureaucrat("william", form.getGradeToSign() - 1);
    bureaucrat.signForm(form);
}

Tester::~Tester()
{

}