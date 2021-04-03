#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>

using namespace std;

void ChayChuongTrinh();

#include "thuvien.h"
#include"menu.h"

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int  soMenu = 12, menu, n = 0;
	DaySo a;
	do
	{
		system("CLS");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
		system("PAUSE");
	} while (menu > 0);
}

