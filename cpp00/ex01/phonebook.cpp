#include "phonebook.hpp"

Phonebook::Phonebook()
{
	Phonebook::index = 0;
}

void Phonebook::add_contacts()
{
	std::string input;
	while (true)
	{
		std::cout << "Enter first name: " << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "No one has an empty name! Try again, and be honest." << std::endl;
		else
		{
			Phonebook::contacts[Phonebook::index].set_first_name(input);
			break;
		}
	}
	while (true)
	{
		std::cout << "Enter last name: " << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "No one has an empty name! Try again, and be honest." << std::endl;
		else
		{
			Phonebook::contacts[Phonebook::index].set_last_name(input);
			break;
		}
	}
	while (true)
	{
		std::cout << "Enter nickname: " << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "No one has an empty name! Try again, and be honest." << std::endl;
		else
		{
			Phonebook::contacts[Phonebook::index].set_nickname(input);
			break;
		}
	}
	while (true)
	{
		std::cout << "Enter phone number: " << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "No one has an empty phone number! Try again, and be honest." << std::endl;
		else
		{
			Phonebook::contacts[Phonebook::index].set_phone_number(input);
			break;
		}
	}
	while (true)
	{
		std::cout << "Enter darkest secret: " << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "No one has an empty secret! Try again, and be honest." << std::endl;
		else
		{
			Phonebook::contacts[Phonebook::index].set_darkest_secret(input);
			break;
		}
	}
	Phonebook::index++;
	if (Phonebook::index == 8)
		Phonebook::index = 0;
	std::cout << "loop ended" << std::endl;
}

Contact Phonebook::search_contact(std::string input)
{
	std::cout << "search_contact " << input << std::endl;
	Contact contact;
	return contact;
}