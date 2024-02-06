#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <vector>
# include <cstdlib>
# include <iomanip>
# include <string>

class Contant
{
    private:
    std::string double_secret;
    std::string name;
    std::string nickname;
    std::string phone_id;
    std::string surname;

    std::string name_ret();
    std::string surname_ret();
    std::string number_id_ret();
    std::string double_secret_ret();
    std::string nickname_ret();

}
