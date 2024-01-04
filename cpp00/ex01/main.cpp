#include "phonebook.hpp"
#include <iostream>
#include <string>

int main()
{
	std::string input;
	Phonebook phonebook;
	while (true)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			phonebook.add_contacts();
		else if (input == "SEARCH")
			phonebook.search_contact(input);
		else
			std::cout << "Invalid command" << std::endl;
	}
}
