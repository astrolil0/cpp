#ifndef	CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	nickname;
		std::string	pnumber;
		std::string	dsecret;
	public:
	
		std::string	get_fname(void);
		void set_fname(std::string fn);


		std::string get_lname(void);
		void set_lname(std::string ln);


		std::string get_nickname(void);
		void set_nickname(std::string nn);


		std::string get_pnumber(void);
		void set_pnumber(std::string pn);


		std::string get_dsecret(void);
		void set_dsecret(std::string ds);

};

#endif