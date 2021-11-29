#include <iostream>

int Add(int num1, int num2)
{
	return num1 + num2;
}

int test = 10;
int numbers[] = { 1, 2, 3 };
int numbers2[10] = { 1,2,3,4,5,6,7,8,9,10 };
int numbers2D[2][2] = { {1,2}, {3,4} };

int main()
{
	std::cout << "Katelyn" << std::endl;
	std::cout << "19" << std::endl;
	int number = 'f';
	int health = 100;
	int damage = 20;
	bool test1 = false;
	bool isAlive = true;
	bool test2 = 0;
	int age = 12;

	if (health == 0)
	{
		isAlive = false;
	}
	else if (health == 100)
	{
		damage += 50;
	}
	else if (health == 50)
	{
		std::cout << "DANGER! HEALTH LOW";
	}
	

	for (int i = 0; i < 3; i++)
	{
		std::cout << numbers[i] << std::endl;
	}

	for (int i : numbers2)
	{
		std::cout << i << std::endl;
	}

	char firstName[] = "Katelyn";
	char lastName[35] = "";
	char fullName[73] = "";

	std::cout << firstName << std::endl;
	std::cin >> lastName;
	std::cout << firstName << " "<< lastName << std::endl;
	strcat_s(fullName, firstName);
	strcat_s(fullName, lastName);

	std::cout << fullName << std::endl;
	
	strcpy_s(fullName, firstName);
	std::cout << fullName << std::endl;

	std::cin >> age;
	std::cout << "Your age is: " << age;
	return 0;
}