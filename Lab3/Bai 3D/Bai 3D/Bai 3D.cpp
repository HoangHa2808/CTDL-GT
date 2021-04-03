#include <iostream>
#include <string.h>
#include<fstream>
#include <conio.h>


using namespace std;

#include "thuvien.h"
#include"menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int soMenu = 8, menu, n = 0;
	DaySo a;
	do
	{
		system("CLS");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
		system("PAUSE");
	} while (menu > 0);
}

