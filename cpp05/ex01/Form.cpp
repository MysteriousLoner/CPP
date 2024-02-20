#include <Form.hpp>

Form::Form() : isSigned(false), name("default"), gradeToSign(150), gradeToExecute(150)
{
    cout << "default form constructor" << endl;
}

Form::Form(const string& name, int gradeToSign, int gradeToExecute)
{
    cout << "form constructor called" << endl;
    if (gradeToSign < 1)
        throw Form::Grade2Low;
    else if (gradeToSign > 150)
        throw Form::Grade2High;
    else
        this->gradeToSign = gradeToSign;
    if (gradeToExecute < 1)
        throw Form::Grade2Low;
    else if (gradeToExecute > 150)
        throw Form::Grade2High;
    else
        this->gradeToExecute = gradeToExecute
}