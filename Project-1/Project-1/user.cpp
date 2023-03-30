#include "user.h"

User::User(std::string my_name, std::string my_login, std::string my_password) : _my_name(my_name), _my_login(my_login), _my_password(my_password)
{
}
User::User()
{
}
User::~User()
{
}

User& User::operator= (const User& str)
{
	if (&str == this)
		return *this;
	this->_my_name = str._my_name;
	this->_my_login = str._my_login;
	this->_my_password = str._my_password;
	return *this;
}

User User::sign_up()
{
	std::string regName, regLogin, regPassword;
	std::cout << "Enter your name: ";
	std::cin >> regName;
	std::cout << "Enter login: ";
	std::cin >> regLogin;
	std::cout << "Enter password: ";
	std::cin >> regPassword;

	User newUser(regName, regLogin, regPassword);
	return newUser;
}
User User::sign_in(User users[], int usersCount)
{
	std::string authLogin, authPassword;
	std::cout << "Enter login: ";
	std::cin >> authLogin;
	std::cout << "Enter password: ";
	std::cin >> authPassword;
	for(int i = 0; i <= usersCount; i++)
	{
		if (i == usersCount)
		{
			User userNone;
			return userNone;
		}
		if (users[i]._my_login == authLogin && users[i]._my_password == authPassword)
		{
			this->_auth = 1;
			return users[i];
		}
	}
}
void User::sendAMessage(User users[], int usersCount, std::string username, std::string message)
{
	for (int i = 0; i <= usersCount; i++)
	{
		if (i == usersCount)
		{
			std::cout << "User is not found" << std::endl;
		}
		if (users[i]._my_name == username)
		{
			if (users[i]._message_count != 5)
			{
				users[i]._my_messages[users[i]._message_count] = message;
				users[i]._message_count++;
				std::cout << "Message sent!" << std::endl;
				break;
			}
			else 
			{
				users[i]._message_count = 0;
				users[i]._my_messages[users[i]._message_count] = message;
				users[i]._message_count++;
				std::cout << "Message sent!" << std::endl;
				break;
			}
		}
	}
}
void User::SendAMessageToEveryone(User users[], int usersCount, std::string message)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]._message_count != 5)
		{
			users[i]._my_messages[users[i]._message_count] = message;
			users[i]._message_count++;
		}
		else 
		{
			users[i]._message_count = 0;
			users[i]._my_messages[users[i]._message_count] = message;
			users[i]._message_count++;
		}
	}
}
void User::CheckMessages(User currentUser, User users[], int usersCount)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]._my_login == currentUser._my_login)
		{
			for (int k = 0; k < 5; k++)
			{
				std::cout << "Message: " << users[i]._my_messages[k] << std::endl;
			}
			break;
		}
		else
		{
			std::cout << "Something went wrong." << std::endl;
		}
	}
}
void User::showAll()
{
	std::cout << _my_name << std::endl;
	std::cout << _my_login << std::endl;
	std::cout << _my_password << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << _my_messages[i] << std::endl;
	}

}