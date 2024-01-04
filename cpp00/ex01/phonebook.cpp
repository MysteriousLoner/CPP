#include "phonebook.hpp"

void Phonebook::add_contacts()
{
	std::string fn;
	while (true)
	{
		std::cout << "Enter first name: " << std::endl;
		std::getline(std::cin, fn);
		if (fn.empty())
			std::cout << "No one has an empty name! Try again, and be honest." << std::endl;
		else
		{
			std::cout << "first name: " << fn << std::endl;
			break;
		}
	}
	Phonebook::index++;
	std::cout << "loop ended" << std::endl;
}

Contact Phonebook::search_contact(std::string input)
{
	std::cout << "search_contact " << input << std::endl;
	Contact contact;
	return contact;
}