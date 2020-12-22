#include <windows.h>
#include <iostream>

using namespace std;

int option;

void WaterMark()
{
	system("cls");
	std::cout << "SleekZ | Basic Selection C++" << std::endl;
}

int main()
{
	WaterMark();

	std::cout << "Choose an option : \n1) Selection 1 \n2) Selection 2\n3) Selection 3\n4) Selection 4\n";
	std::cin >> option;

	switch (option) {
	case 1:
		WaterMark();

		std::cout << "Selection 1";
		Sleep(3999);
		return 0;


	case 2:
		WaterMark();

		std::cout << "Selection 2";
		Sleep(3999);
		return 0;

	case 3:
		WaterMark();

		std::cout << "Selection 3";
		Sleep(3999);
		return 0;

	case 4:
		WaterMark();

		std::cout << "Selection 4";
		Sleep(3999);
		return 0;

	}
	
}




