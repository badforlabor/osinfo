#include <windows.h>
#include <iostream>
using namespace std;

int main()
{

	LCID lcid = GetSystemDefaultLCID();
	WORD PriLan = PRIMARYLANGID(lcid); 
	WORD SubLan = SUBLANGID(lcid);
	
	std::cout << "primary language:" << PriLan << ", sub language:" << SubLan << std::endl;

	if (PriLan == LANG_CHINESE)
	{
		std::cout << "primary language: Chinese!" << std::endl;
	}
	else if (PriLan == LANG_ENGLISH)
	{
		std::cout << "primary language: English!" << std::endl;
	}

	system("pause");
	return 0;
}
