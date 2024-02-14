#include "Contact.hpp"

//Getters

std::string	Contact::get_fname(void)
{
	return (f_name);
}

std::string	Contact::get_lname(void)
{
	return (l_name);
}

std::string	Contact::get_nickname(void)
{
	return (nickname);
}

std::string	Contact::get_pnumber(void)
{
	return (pnumber);
}

std::string	Contact::get_dsecret(void)
{
	return (dsecret);
}

//Setters

void	Contact::set_fname(std::string fn)
{
	f_name = fn;
}

void	Contact::set_lname(std::string ln)
{
	l_name = ln;
}

void	Contact::set_nickname(std::string nn)
{
	nickname = nn;
}

void	Contact::set_pnumber(std::string pn)
{
	pnumber = pn;
}

void	Contact::set_dsecret(std::string ds)
{
	dsecret = ds;
}
