#pragma once
#include <iostream>

class User
{
public:
	User(std::string my_name, std::string my_login, std::string my_password);
	User();
	~User();

	User& operator= (const User& str);

	User sign_up();
	User sign_in(User users[], int usersCount);
	void sendAMessage(User users[], int usersCount, std::string username, std::string message);
	void SendAMessageToEveryone(User users[], int usersCount, std::string message);
	void CheckMessages(User currentUser, User users[], int usersCount);
	void showAll();

	bool _auth = false;
	std::string _my_name;
	std::string _my_messages[5];
	int _message_count = 0;
private:
	std::string _my_login;
	std::string _my_password;
};