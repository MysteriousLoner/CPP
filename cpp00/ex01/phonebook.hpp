#include "contact.hpp"

class Phonebook{
public:
	Phonebook();
	void add_contacts();
	void search_and_print_contact(std::string);
	Contact search_contact(std::string);
	void print_contact(Contact);
private:
	Contact contacts[8];
	int index;
};