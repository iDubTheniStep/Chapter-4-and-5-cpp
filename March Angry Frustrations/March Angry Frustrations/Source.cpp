#include<iostream>
#include <string>
#include <algorithm>
int main()

{

	int countOne = 0;
	int countTwo = 0;
	int countThree = 0;
	int countThrei = 0;
	std::string firstL;
	std::string secL;
	std::string thirdL;


	char c;
	std::string s;
	std::cout << "please enter the first letter of the color" << std::endl;
	std::cin >> firstL;
	std::cout << "please enter the second letter of the color" << std::endl;
	std::cin >> secL;
	std::cout << "please enter the third letter of the color" << std::endl;
	std::cin >> thirdL;
	std::cout << "please enter a color as Y then B then Y." << std::endl;
	std::cin >> s;

	for (int i = 0; s[i] == 'Y'; i++)
	if (s[i] == 'Y')
	{
		countOne++;
	}
	for (int i = 0; i < s.size(); i++)
	if (s[i] == 'B')
	{
		countTwo++;
	}
	for (int i = 0; i < s.size(); i++)
	if (s[i] == 'Y')
	{
		countThree++;
		countThrei = countThree - countOne;
	}

	std::cout << countOne << firstL << countTwo << secL << countThrei << thirdL <<std::endl ;

	system("pause");
	return 0;
}