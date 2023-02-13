#include <iostream>
#include "user.h"

int main()
{
	char ex = 'n';
	while (ex != 'q')
	{
		std::cout << "q - Exit" << std::endl;
		std::cin >> ex;
	}
	//User a("Vasya", "zxc", "qwe");
	//a.showAll();
	return 0;

}