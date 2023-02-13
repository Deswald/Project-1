#pragma once
#include <iostream>

class User
{
public:
	User(std::string my_name, std::string my_login, std::string my_password);
	~User();
	void Sign_Up();
	void showAll();

private:
	std::string _my_name;
	std::string _my_login;
	std::string _my_password;
};