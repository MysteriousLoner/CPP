#pragma once

#include "AForm.hpp"

class anotherForm : public AForm
{
public:
    anotherForm(): AForm("anotherForm", 1, 1) {};
    ~anotherForm() {};
};