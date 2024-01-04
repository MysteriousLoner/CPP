#include "contact.hpp"

class Phonebook{
public:
	void add_contacts();
	Contact search_contact(std::string);
private:
	Contact contacts[8];
	int index;
};