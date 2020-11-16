#include <iostream>

int main()
{
	std::string name;
	int age;

	std::cout << "- Hello! What is your name?" << std::endl;
	std::cin >> name;
	std::cout << "- I'm glad to see you, " << name << "!" << std::endl
			  << "- What is your age?" << std::endl;
	std::cin >> age;
	std::cout << "- I thought you are " << age - 1
		<< "years old. You look younger!" << std::endl;

	return 0;
}