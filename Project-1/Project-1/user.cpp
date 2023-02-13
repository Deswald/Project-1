#include "user.h"

User::User(std::string my_name, std::string my_login, std::string my_password) : _my_name(my_name), _my_login(my_login), _my_password(my_password)
{
}

User::~User()
{
}

void User::Sign_Up()
{
	std::string n, l, p;
	std::cout << "Enter your name, login and password" << std::endl;
	std::cin >> n;
	std::cin >> l;
	std::cin >> p;
	User(n, l, p).showAll();
}

void User::showAll()
{
	std::cout << _my_name << std::endl;
	std::cout << _my_login << std::endl;
	std::cout << _my_password << std::endl;

}