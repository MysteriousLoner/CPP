#include "contact.hpp"

void Contact::set_first_name(std::string newStr)
{	
	first_name = newStr;		
}

void Contact::set_last_name(std::string newStr)
{	
	last_name = newStr;
}

void Contact::set_nickname(std::string newStr)		
{	
	nickname = newStr;			
}

void Contact::set_phone_number(std::string newStr)	
{	
	phone_number = newStr;		
}

void Contact::set_darkest_secret(std::string newStr)	
{	
	darkest_secret = newStr;	
}

std::string Contact::get_first_name() 				
{ 	
	return first_name; 		
}

std::string Contact::get_last_name()					
{	
	return last_name;		
}

std::string Contact::get_nickname()					
{	
	return nickname;		
}

std::string Contact::get_phone_number()				
{	
	return phone_number;	
}

std::string Contact::get_darkest_secret()			
{	
	return darkest_secret;	
}